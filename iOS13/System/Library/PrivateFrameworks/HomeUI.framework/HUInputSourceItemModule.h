/*
* Generated on Monday, March 1, 2021 at 2:34:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

