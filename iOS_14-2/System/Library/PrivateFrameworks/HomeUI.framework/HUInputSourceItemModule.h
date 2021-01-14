/*
* Generated on Thursday, January 14, 2021 at 2:24:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HUChildServiceEditorItemModule.h>

@class HFItem;

@interface HUInputSourceItemModule : HUChildServiceEditorItemModule {

	HFItem* _chooseInputsSelectionItem;

}

@property (nonatomic,readonly) HFItem * chooseInputsSelectionItem;              //@synthesize chooseInputsSelectionItem=_chooseInputsSelectionItem - In the implementation block
+(id)supportedServiceTypes;
+(/*^block*/id)_serviceItemComparatorForTelevisionProfile:(id)arg1 ;
-(id)buildSectionsWithDisplayedItems:(id)arg1 ;
-(BOOL)canToggleConfigurationStateForItem:(id)arg1 ;
-(HFItem *)chooseInputsSelectionItem;
@end

