/*
* Generated on Thursday, January 14, 2021 at 2:25:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/SKUIIndexBarEntryListController.h>

@class SKUIIndexBarEntryDescriptor, SKUIViewElement, SKUIIndexBarEntryViewElement;

@interface SKUIIndexBarSingleEntryListController : SKUIIndexBarEntryListController {

	SKUIIndexBarEntryDescriptor* _entryDescriptor;
	SKUIViewElement* _descriptiveViewElement;
	SKUIIndexBarEntryViewElement* _entryViewElement;

}

@property (nonatomic,readonly) SKUIIndexBarEntryViewElement * entryViewElement;              //@synthesize entryViewElement=_entryViewElement - In the implementation block
-(id)entryDescriptorAtIndex:(long long)arg1 ;
-(long long)numberOfEntryDescriptors;
-(BOOL)hidesIndexBar;
-(id)targetIndexBarEntryIDForEntryDescriptorAtIndex:(long long)arg1 returningRelativeSectionIndex:(out long long*)arg2 ;
-(BOOL)needsRootTargetViewElement;
-(void)reloadViewElementData;
-(id)initWithEntryViewElement:(id)arg1 ;
-(SKUIIndexBarEntryViewElement *)entryViewElement;
@end

