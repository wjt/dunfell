/* vim:set et sw=2 cin cino=t0,f0,(0,{s,>2s,n-s,^-s,e2s: */
/*
 * Copyright © Collabora Ltd. 2016
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU Lesser General Public License as published by the
 * Free Software Foundation; either version 2.1 of the License, or (at your
 * option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU Lesser General Public License
 * for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef DWL_TASK_MODEL_H
#define DWL_TASK_MODEL_H

#include <glib.h>
#include <glib-object.h>
#include <gtk/gtk.h>

G_BEGIN_DECLS

/**
 * DwlTaskModel:
 *
 * All the fields in this structure are private.
 *
 * Since: UNRELEASED
 */
#define DWL_TYPE_TASK_MODEL dwl_task_model_get_type ()
G_DECLARE_FINAL_TYPE (DwlTaskModel, dwl_task_model,
                      DWL, TASK_MODEL, GObject)

DwlTaskModel *dwl_task_model_new (GPtrArray *tasks);

G_END_DECLS

#endif /* !DWL_TASK_MODEL_H */
