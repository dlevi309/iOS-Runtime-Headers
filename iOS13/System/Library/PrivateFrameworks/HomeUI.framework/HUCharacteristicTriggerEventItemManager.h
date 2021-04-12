/*
* Generated on Monday, March 1, 2021 at 2:34:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <Home/HFItemManager.h>

@protocol HFServiceVendor;
@class HFItem, HUTriggerConditionEditorItemModule, HUInstructionsItem, HFStaticItemProvider, HUCharacteristicEventOptionProvider;

@interface HUCharacteristicTriggerEventItemManager : HFItemManager {

	HFItem*<HFServiceVendor> _serviceVendingItem;
	HFItem* _activeOptionItem;
	HUTriggerConditionEditorItemModule* _conditionModule;
	HUInstructionsItem* _instructionsItem;
	HFItem* _serviceNameItem;
	HFStaticItemProvider* _staticItemProvider;
	HUCharacteristicEventOptionProvider* _optionProvider;

}

@property (nonatomic,retain) HUInstructionsItem * instructionsItem;                               //@synthesize instructionsItem=_instructionsItem - In the implementation block
@property (nonatomic,retain) HFItem * serviceNameItem;                                            //@synthesize serviceNameItem=_serviceNameItem - In the implementation block
@property (nonatomic,retain) HFStaticItemProvider * staticItemProvider;                           //@synthesize staticItemProvider=_staticItemProvider - In the implementation block
@property (nonatomic,retain) HUCharacteristicEventOptionProvider * optionProvider;                //@synthesize optionProvider=_optionProvider - In the implementation block
@property (nonatomic,retain) HFItem*<HFServiceVendor> serviceVendingItem;                         //@synthesize serviceVendingItem=_serviceVendingItem - In the implementation block
@property (nonatomic,retain) HFItem * activeOptionItem;                                           //@synthesize activeOptionItem=_activeOptionItem - In the implementation block
@property (nonatomic,readonly) HUTriggerConditionEditorItemModule * conditionModule;              //@synthesize conditionModule=_conditionModule - In the implementation block
+(id)serviceVendingItemForCharacteristicTriggerBuilder:(id)arg1 ;
+(/*^block*/id)_optionItemComparator;
+(id)_titleForItemSection:(id)arg1 ;
-(id)_buildItemProvidersForHome:(id)arg1 ;
-(id)_buildSectionsWithDisplayedItems:(id)arg1 ;
-(HUInstructionsItem *)instructionsItem;
-(HFStaticItemProvider *)staticItemProvider;
-(HUTriggerConditionEditorItemModule *)conditionModule;
-(void)setInstructionsItem:(HUInstructionsItem *)arg1 ;
-(HFItem*<HFServiceVendor>)serviceVendingItem;
-(void)setServiceNameItem:(HFItem *)arg1 ;
-(HFItem *)serviceNameItem;
-(void)setStaticItemProvider:(HFStaticItemProvider *)arg1 ;
-(void)setOptionProvider:(HUCharacteristicEventOptionProvider *)arg1 ;
-(HUCharacteristicEventOptionProvider *)optionProvider;
-(HFItem *)activeOptionItem;
-(id)initWithCharacteristicTriggerBuilder:(id)arg1 delegate:(id)arg2 ;
-(void)setActiveOptionItem:(HFItem *)arg1 ;
-(void)setServiceVendingItem:(HFItem*<HFServiceVendor>)arg1 ;
@end

