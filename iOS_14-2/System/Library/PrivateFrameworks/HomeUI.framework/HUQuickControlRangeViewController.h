/*
* Generated on Thursday, January 14, 2021 at 2:24:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HUQuickControlSingleControlViewController.h>

@class HFRangeControlItem, HUQuickControlSliderViewProfile;

@interface HUQuickControlRangeViewController : HUQuickControlSingleControlViewController

@property (nonatomic,readonly) HFRangeControlItem * controlItem; 
@property (nonatomic,readonly) HUQuickControlSliderViewProfile * viewProfile; 
+(Class)controlItemClass;
-(id)controlToViewValueTransformer;
-(id)createInteractionCoordinator;
-(id)createViewProfile;
@end

