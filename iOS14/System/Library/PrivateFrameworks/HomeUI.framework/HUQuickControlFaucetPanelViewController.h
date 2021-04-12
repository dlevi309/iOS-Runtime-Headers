/*
* Generated on Thursday, January 14, 2021 at 2:24:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HUQuickControlViewController.h>

@class HUQuickControlCollectionViewController, HFTemperatureThresholdControlItem, HFChildServiceControlItem;

@interface HUQuickControlFaucetPanelViewController : HUQuickControlViewController {

	HUQuickControlCollectionViewController* _collectionViewController;

}

@property (nonatomic,readonly) HUQuickControlCollectionViewController * collectionViewController;              //@synthesize collectionViewController=_collectionViewController - In the implementation block
@property (nonatomic,readonly) HFControlItem*<HFPrimaryStateWriter> primaryStateControlItem; 
@property (nonatomic,readonly) HFTemperatureThresholdControlItem * temperatureControlItem; 
@property (nonatomic,readonly) HFChildServiceControlItem * childValvesControlItem; 
+(id)controlItemPredicate;
+(id)_primaryStatePredicate;
+(id)_temperaturePredicate;
+(id)_childValvesPredicate;
-(id)initWithControlItems:(id)arg1 home:(id)arg2 itemUpdater:(id)arg3 ;
-(id)childQuickControlContentViewControllers;
-(id)overrideStatusText;
-(HFControlItem*<HFPrimaryStateWriter>)primaryStateControlItem;
-(void)viewDidLoad;
-(HUQuickControlCollectionViewController *)collectionViewController;
-(HFTemperatureThresholdControlItem *)temperatureControlItem;
-(HFChildServiceControlItem *)childValvesControlItem;
-(id)_controlItemMatchingPredicate:(id)arg1 ;
@end

