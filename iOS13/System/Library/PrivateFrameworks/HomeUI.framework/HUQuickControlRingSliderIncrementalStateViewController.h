/*
* Generated on Monday, March 1, 2021 at 2:34:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HUQuickControlSingleControlViewController.h>
#import <libobjc.A.dylib/HUQuickControlRingSliderInteractionCoordinatorDelegate.h>

@class HUQuickControlRingSliderView, HFIncrementalStateControlItem, HUQuickControlRingSliderViewProfile, NSString;

@interface HUQuickControlRingSliderIncrementalStateViewController : HUQuickControlSingleControlViewController <HUQuickControlRingSliderInteractionCoordinatorDelegate> {

	HUQuickControlRingSliderView* _ringSliderView;

}

@property (nonatomic,readonly) HFIncrementalStateControlItem * controlItem; 
@property (nonatomic,readonly) HUQuickControlRingSliderViewProfile * viewProfile; 
@property (nonatomic,retain) HUQuickControlRingSliderView * ringSliderView;                    //@synthesize ringSliderView=_ringSliderView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)controlItemClass;
-(id)createInteractionCoordinator;
-(void)setRingSliderView:(HUQuickControlRingSliderView *)arg1 ;
-(HUQuickControlRingSliderView *)ringSliderView;
@end

