/*
* Generated on Monday, March 1, 2021 at 2:30:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <ContactsUI/CNPhotoPickerProviderGroup.h>

@interface CNPhotoPickerProviderSuggestionsGroup : CNPhotoPickerProviderGroup
-(void)providerItemDidUpdate:(id)arg1 ;
-(id)itemsForProviderIdentifier:(id)arg1 ;
-(void)prepareDisplayItems:(id)arg1 ;
-(id)addSymbolImageName;
-(long long)addProviderItem:(id)arg1 ;
-(long long)removeProviderItem:(id)arg1 ;
-(id)initWithProviders:(id)arg1 environment:(id)arg2 allowAddItem:(BOOL)arg3 ;
-(id)providerOfClass:(Class)arg1 ;
-(long long)indexForDefaultMonogram;
-(id)dedupedSuggestionItemsGroupedByProvider;
-(id)providerItems:(id)arg1 withMaxRecentsAndMonogramsCount:(unsigned long long)arg2 ;
-(id)paddedDisplayItems:(id)arg1 ;
-(unsigned long long)maxRecentsAndMonogramsCount;
-(id)defaultMonogramItem;
@end

