/*
* Generated on Monday, March 1, 2021 at 2:34:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HUQuickControlSingleControlViewController.h>
#import <libobjc.A.dylib/HUQuickControlRingSliderInteractionCoordinatorDelegate.h>

@class HUQuickControlRingSliderView, HFRangeControlItem, HUQuickControlRingSliderViewProfile, NSString;

@interface HUQuickControlRingSliderRangeViewController : HUQuickControlSingleControlViewController <HUQuickControlRingSliderInteractionCoordinatorDelegate> {

	HUQuickControlRingSliderView* _ringSliderView;

}

@property (nonatomic,readonly) HFRangeControlItem * controlItem; 
@property (nonatomic,readonly) HUQuickControlRingSliderViewProfile * viewProfile; 
@property (nonatomic,retain) HUQuickControlRingSliderView * ringSliderView;                    //@synthesize ringSliderView=_ringSliderView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)controlItemPredicate;
+(Class)controlItemClass;
-(void)quickControlItemUpdater:(id)arg1 didUpdateResultsForControlItems:(id)arg2 ;
-(void)invalidateViewProfile;
-(void)interactionCoordinator:(id)arg1 viewValueDidChange:(id)arg2 ;
-(id)createInteractionCoordinator;
-(id)createViewProfile;
-(id)controlToViewValueTransformer;
-(void)setRingSliderView:(HUQuickControlRingSliderView *)arg1 ;
-(HUQuickControlRingSliderView *)ringSliderView;
-(void)updateMainStatusStringWithValue:(id)arg1 ;
-(void)updateSupplementaryValue;
-(void)_getTemperatureThresholdControlItemStateString:(out id*)arg1 temperatureString:(out id*)arg2 withRangeControlItemValue:(id)arg3 ;
-(void)_getHeaterCoolerThresholdControlItemStateString:(out id*)arg1 temperatureString:(out id*)arg2 withRangeControlItemValue:(id)arg3 ;
-(void)modelValueDidChange;
@end

