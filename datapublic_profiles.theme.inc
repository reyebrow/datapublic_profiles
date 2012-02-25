<?php

/**
 * @file
 * Provides resources and basic logic for use by the RE Profile feature
 */

/**
 * Implements hook_theme().
 *
 * @see http://views-help.doc.logrus.com/help/views/api-default-views
 * @see re_slideshow_preprocess_views_view_unformatted__profiles__page_1()
 */
function datapublic_profiles_theme($existing, $type, $theme, $path) {
  $module_theme_path = $path . '/theme';
  return array(
    // Theme info for rows in display 'block' in view 'slideshow':
    'views_view_unformatted__profiles__page_1' => array(
      'variables' => array('view' => NULL, 'options' => NULL, 'rows' => NULL, 'title' => NULL),
      'template' => 'views-view-unformatted--profiles--page-1',
      'original hook' => 'views_view_unformatted',
      'path' => $module_theme_path,
      'preprocess functions' => array(
        'template_preprocess',
        'template_preprocess_views_view_unformatted',
      ),
    ),
  );
} // datapublic_profiles_theme()