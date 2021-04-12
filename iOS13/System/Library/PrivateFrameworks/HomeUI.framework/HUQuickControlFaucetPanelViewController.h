/*
* Generated on Monday, March 1, 2021 at 2:34:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)viewDidLoad;
-(HUQuickControlCollectionViewController *)collectionViewController;
-(HFControlItem*<HFPrimaryStateWriter>)primaryStateControlItem;
-(id)initWithControlItems:(id)arg1 home:(id)arg2 itemUpdater:(id)arg3 ;
-(id)childQuickControlContentViewControllers;
-(id)overrideStatusText;
-(HFTemperatureThresholdControlItem *)temperatureControlItem;
-(HFChildServiceControlItem *)childValvesControlItem;
-(id)_controlItemMatchingPredicate:(id)arg1 ;
@end

