<?php
/**
 * @file
 * Provide views data and handlers for mixitup_extended.module.
 */

/**
 * Implements hook_views_plugins().
 */
function mixitup_extended_views_plugins() {
  return array(
    'style' => array(
      'mixitup_views_extended' => array(
        'title' => t('MixItUp Extended'),
        'handler' => 'views_plugin_style_mixitup_views_extended',
        'uses options' => TRUE,
        'help' => t("Display content with MixItUp extended."),
        'theme' => 'views_view_mixitup_extended',
        'base' => array('node'),
        'type' => 'normal',
        'uses row plugin' => TRUE,
        'uses row class' => TRUE,
        'uses grouping' => FALSE,
      ),
    ),
  );
}