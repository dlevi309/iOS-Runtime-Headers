/*
* Generated on Thursday, January 14, 2021 at 2:25:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/SKUIIndexBarEntryListController.h>

@protocol SKUIEntityProviding;
@class SKUIDynamicPageSectionIndexMapper, SKUIIndexBarEntryViewElement, SKUIViewElement, SKUIIndexBarEntryListViewElement;

@interface SKUIIndexBarDynamicElementEntryListController : SKUIIndexBarEntryListController {

	SKUIDynamicPageSectionIndexMapper* _dynamicIndexMapper;
	id<SKUIEntityProviding> _entityProvider;
	SKUIIndexBarEntryViewElement* _indexBarEntryViewElement;
	SKUIViewElement* _templateElement;
	SKUIIndexBarEntryListViewElement* _entryListViewElement;

}

@property (nonatomic,readonly) SKUIIndexBarEntryListViewElement * entryListViewElement;              //@synthesize entryListViewElement=_entryListViewElement - In the implementation block
-(void)dealloc;
-(void)_entityProviderDidInvalidateNotification:(id)arg1 ;
-(id)entryDescriptorAtIndex:(long long)arg1 ;
-(long long)numberOfEntryDescriptors;
-(BOOL)hidesIndexBar;
-(id)targetIndexBarEntryIDForEntryDescriptorAtIndex:(long long)arg1 returningRelativeSectionIndex:(out long long*)arg2 ;
-(BOOL)needsRootTargetViewElement;
-(id)rootTargetIndexBarEntryID;
-(void)setRootTargetViewElement:(id)arg1 ;
-(void)reloadViewElementData;
-(id)initWithEntryListViewElement:(id)arg1 ;
-(SKUIIndexBarEntryListViewElement *)entryListViewElement;
@end

