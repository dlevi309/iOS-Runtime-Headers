/*
* Generated on Thursday, January 14, 2021 at 2:24:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HKOverlayRoomViewController.h>

@class NSNumber;

@interface HKOverlayRoomHeartViewController : HKOverlayRoomViewController {

	NSNumber* _preferredOverlayIndex;
	long long _preferredOverlay;

}

@property (nonatomic,readonly) long long preferredOverlay;              //@synthesize preferredOverlay=_preferredOverlay - In the implementation block
-(void)viewDidLoad;
-(id)controllerTitleWithApplicationItems:(id)arg1 ;
-(id)primaryDisplayTypeWithApplicationItems:(id)arg1 ;
-(id)contextSectionsForMode:(long long)arg1 applicationItems:(id)arg2 overlayChartController:(id)arg3 ;
-(id)initialSelectedContextForMode:(long long)arg1 ;
-(id)createViewControllerForMode:(long long)arg1 displayDate:(id)arg2 applicationItems:(id)arg3 ;
-(id)initWithDisplayDate:(id)arg1 applicationItems:(id)arg2 mode:(long long)arg3 preferredOverlay:(long long)arg4 ;
-(long long)preferredOverlay;
-(long long)_initialPillForPreference:(long long)arg1 ;
@end

