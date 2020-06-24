<?php

/**
 * @file
 * Using hooks_views_data to contruct view dynamically.
 */

/**
 * Implements hook_views_data().
 */
function node_feedback_views_data()
{
  $data['node_feedback'] = array(
    'table' => array(
      'group' => 'Node Feedback',
      'base' => array(
        'field' => 'nfid',
        'title' => 'Node Feedback Table',
        'help' => 'All the feedbacks are saved in this table',
      ),
    ),
    'nfid' => array(
      'title' => t('NF Id'),
      'help' => t('ID field'),
      'field' => array(
        'click sortable' => true,
      ),
      'filter' => array(
        'handler' => 'views_handler_filter_numeric',
      ),
      'sort' => array(
        'handler' => 'views_handler_sort',
      ),
    ),
    'nid' => array(
      'title' => t('Node Id'),
      'help' => t('Node Id'),
      'field' => array(
        'click sortable' => true,
      ),
      'filter' => array(
        'handler' => 'views_handler_filter_numeric',
      ),
      'sort' => array(
        'handler' => 'views_handler_sort',
      ),
      'relationship' => array(
        'handler' => 'views_handler_relationship',
        'base' => 'node',
        'base field' => 'nid',
        'title' => t('Flagged Content'),
        'label' => t('Flagged node content.'),
      ),
    ),
    'name' => array(
      'title' => t('Username'),
      'help' => t('Username of the feedback author.'),
      'field' => array(
        'click sortable' => true,
      ),
      'filter' => array(
        'handler' => 'views_handler_filter_string',
      ),
    ),
    'response_text_feedback' => array(
      'title' => t('Feedback'),
      'help' => t('Flaging feedback'),
      'field' => array(
        'click sortable' => true,
      ),
      'sort' => array(
        'handler' => 'views_handler_sort',
      ),
      'filter' => array(
        'handler' => 'views_handler_filter_string',
      ),
    ),
    'timestamp' => array(
      'title' => t('Updated Date'),
      'help' => t('Updated timestamp of the flag'),
      'field' => array(
        'click sortable' => true,
        'handler' => 'views_handler_field_date',
      ),
      'filter' => array(
        'handler' => 'views_handler_filter_date',
      ),
      'sort' => array(
        'handler' => 'views_handler_sort',
      ),
    ),
  );

  return $data;
}
