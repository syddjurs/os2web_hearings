<?php
/**
 * @file
 * os2web_hearings.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function os2web_hearings_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function os2web_hearings_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function os2web_hearings_node_info() {
  $items = array(
    'os2web_hearings_hearing' => array(
      'name' => t('Planer i høring'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Titel'),
      'help' => '',
    ),
    'os2web_hearings_hearing_case' => array(
      'name' => t('Høring'),
      'base' => 'node_content',
      'description' => t('Oprettelse af høring.'),
      'has_title' => '1',
      'title_label' => t('Overskrift'),
      'help' => '',
    ),
  );
  return $items;
}
