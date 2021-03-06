/**  CycleTracks, Copyright 2009-2013 San Francisco County Transportation Authority
 *                                    San Francisco, CA, USA
 *
 *   @author Matt Paul <mattpaul@mopimp.com>
 *
 *   This file is part of CycleTracks.
 *
 *   CycleTracks is free software: you can redistribute it and/or modify
 *   it under the terms of the GNU General Public License as published by
 *   the Free Software Foundation, either version 3 of the License, or
 *   (at your option) any later version.
 *
 *   CycleTracks is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *   GNU General Public License for more details.
 *
 *   You should have received a copy of the GNU General Public License
 *   along with CycleTracks.  If not, see <http://www.gnu.org/licenses/>.
 */

//
//  SavedTripsViewController.h
//  CycleTracks
//
//  Copyright 2009-2013 SFCTA. All rights reserved.
//  Written by Matt Paul <mattpaul@mopimp.com> on 8/10/09.
//	For more information on the project, 
//	e-mail Elizabeth Sall at the SFCTA <elizabeth.sall@sfcta.org>
//

//
// Adapted to Open Bike by Gregory Kip (gkip@permusoft.com) and others.
//

#import <CoreLocation/CoreLocation.h>
#import <MapKit/MapKit.h>
#import "ActivityIndicatorDelegate.h"
#import "RecordingInProgressDelegate.h"

@class LoadingView;
@class MapViewController;
@class Trip;
@class TripManager;

@interface SavedTripsViewController : UITableViewController 
	<TripPurposeDelegate,
	UIActionSheetDelegate,
	UIAlertViewDelegate,
	UINavigationControllerDelegate>
{
	NSMutableArray *trips;
    NSManagedObjectContext *managedObjectContext;
	
	id <RecordingInProgressDelegate> delegate;
	TripManager *tripManager;
	Trip *selectedTrip;
	
	LoadingView *loading;
}

@property (nonatomic, retain) NSMutableArray *trips;
@property (nonatomic, retain) NSManagedObjectContext *managedObjectContext;

@property (nonatomic, retain) id <RecordingInProgressDelegate> delegate;
@property (nonatomic, retain) TripManager *tripManager;
@property (nonatomic, retain) Trip *selectedTrip;

- (void)initTripManager:(TripManager*)manager;

// DEPRECATED
- (id)initWithManagedObjectContext:(NSManagedObjectContext*)context;
- (id)initWithTripManager:(TripManager*)manager;

@end
