/*
* Generated on Thursday, January 14, 2021 at 2:24:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HKOverlayRoomViewController.h>

@class NSNumber, NSString, NSMutableArray;

@interface HKOverlayRoomWalkingViewController : HKOverlayRoomViewController {

	NSNumber* _preferredOverlayIndex;
	NSString* _quantityTypeIdentifier;
	NSMutableArray* _contextDelegates;
	long long _preferredOverlay;

}
-(void)viewDidLoad;
-(id)controllerTitleWithApplicationItems:(id)arg1 ;
-(id)primaryDisplayTypeWithApplicationItems:(id)arg1 ;
-(id)contextSectionsForMode:(long long)arg1 applicationItems:(id)arg2 overlayChartController:(id)arg3 ;
-(id)initialSelectedContextForMode:(long long)arg1 ;
-(id)createViewControllerForMode:(long long)arg1 displayDate:(id)arg2 applicationItems:(id)arg3 ;
-(id)initWithDisplayDate:(id)arg1 applicationItems:(id)arg2 mode:(long long)arg3 identifier:(id)arg4 preferredOverlay:(long long)arg5 ;
-(id)showAllFiltersButtonTitle;
-(/*^block*/id)_buildGranularAverageDataSourceTitleFromTimeScope;
-(/*^block*/id)_buildAverageDataSourceTitleFromTimeScope;
-(id)_buildWalkingAverageDataSourceWithUnitController:(id)arg1 displayType:(id)arg2 healthStore:(id)arg3 ;
@end

