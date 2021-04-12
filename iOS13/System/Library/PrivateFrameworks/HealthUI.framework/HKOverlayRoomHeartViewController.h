/*
* Generated on Monday, March 1, 2021 at 2:34:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HKOverlayRoomViewController.h>

@class NSNumber, NSString;

@interface HKOverlayRoomHeartViewController : HKOverlayRoomViewController {

	NSNumber* _preferredOverlayIndex;
	NSString* _secondaryIdentifier;

}

@property (nonatomic,copy,readonly) NSString * secondaryIdentifier;              //@synthesize secondaryIdentifier=_secondaryIdentifier - In the implementation block
-(void)viewDidLoad;
-(NSString *)secondaryIdentifier;
-(id)controllerTitleWithApplicationItems:(id)arg1 ;
-(id)primaryDisplayTypeWithApplicationItems:(id)arg1 ;
-(id)contextSectionsForMode:(long long)arg1 applicationItems:(id)arg2 overlayChartController:(id)arg3 ;
-(id)initialSelectedContextForMode:(long long)arg1 ;
-(id)createViewControllerForMode:(long long)arg1 displayDate:(id)arg2 applicationItems:(id)arg3 ;
-(long long)_initialPillForIdentifier:(id)arg1 ;
-(id)initWithDisplayDate:(id)arg1 applicationItems:(id)arg2 mode:(long long)arg3 secondaryIdentifier:(id)arg4 ;
@end

