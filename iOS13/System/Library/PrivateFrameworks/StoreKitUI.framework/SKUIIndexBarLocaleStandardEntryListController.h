/*
* Generated on Monday, March 1, 2021 at 2:31:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

