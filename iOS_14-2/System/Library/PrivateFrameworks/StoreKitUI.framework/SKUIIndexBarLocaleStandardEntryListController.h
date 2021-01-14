/*
* Generated on Thursday, January 14, 2021 at 2:25:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/SKUIIndexBarEntryListController.h>

@class SKUIIndexBarEntryListViewElement, NSSet, IKViewElementStyle;

@interface SKUIIndexBarLocaleStandardEntryListController : SKUIIndexBarEntryListController {

	SKUIIndexBarEntryListViewElement* _entryListViewElement;
	NSSet* _requiredVisibilitySet;
	IKViewElementStyle* _style;

}
-(id)entryDescriptorAtIndex:(long long)arg1 ;
-(long long)numberOfEntryDescriptors;
-(id)targetIndexBarEntryIDForEntryDescriptorAtIndex:(long long)arg1 returningRelativeSectionIndex:(out long long*)arg2 ;
-(void)reloadViewElementData;
-(id)initWithSKUIIndexBarEntryListViewElement:(id)arg1 ;
@end

