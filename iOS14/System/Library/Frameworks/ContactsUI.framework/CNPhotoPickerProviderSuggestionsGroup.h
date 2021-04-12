/*
* Generated on Thursday, January 14, 2021 at 2:20:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <ContactsUI/CNPhotoPickerProviderGroup.h>

@class NSArray;

@interface CNPhotoPickerProviderSuggestionsGroup : CNPhotoPickerProviderGroup {

	NSArray* _addItems;

}
-(id)addItems;
-(void)providerItemDidUpdate:(id)arg1 ;
-(id)itemsForProviderIdentifier:(id)arg1 ;
-(void)prepareDisplayItems:(id)arg1 ;
-(long long)addProviderItem:(id)arg1 ;
-(long long)removeProviderItem:(id)arg1 ;
-(void)setAddItems:(id)arg1 ;
-(id)initWithProviders:(id)arg1 environment:(id)arg2 allowAddItem:(BOOL)arg3 ;
-(id)providerOfClass:(Class)arg1 ;
-(long long)indexForDefaultMonogram;
-(id)dedupedSuggestionItemsGroupedByProvider;
-(id)paddedDisplayItems:(id)arg1 ;
-(void)loadAvailablePaddingItems;
-(id)providerItems:(id)arg1 withMaxRecentsAndMonogramsCount:(unsigned long long)arg2 ;
-(unsigned long long)maxRecentsAndMonogramsCount;
-(id)defaultMonogramItem;
-(void)reloadMonogramProviderGroupWithVisualIdentity:(id)arg1 size:(CGSize)arg2 RTL:(BOOL)arg3 ;
@end

