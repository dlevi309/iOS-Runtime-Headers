/*
* Generated on Thursday, January 14, 2021 at 2:24:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)controlToViewValueTransformer;
-(void)interactionCoordinator:(id)arg1 viewValueDidChange:(id)arg2 ;
-(id)createInteractionCoordinator;
-(id)createViewProfile;
-(void)setRingSliderView:(HUQuickControlRingSliderView *)arg1 ;
-(HUQuickControlRingSliderView *)ringSliderView;
-(void)updateMainStatusStringWithValue:(id)arg1 ;
-(void)updateSupplementaryValue;
-(void)_getTemperatureThresholdControlItemStateString:(out id*)arg1 temperatureString:(out id*)arg2 withRangeControlItemValue:(id)arg3 ;
-(void)_getHeaterCoolerThresholdControlItemStateString:(out id*)arg1 temperatureString:(out id*)arg2 withRangeControlItemValue:(id)arg3 ;
-(void)modelValueDidChange;
@end

