/*
* Generated on Monday, March 1, 2021 at 2:30:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <ContactsUI/CNContactListStyleDefautProvider.h>

@class CNContactStyle;

@interface CNContactListStyleWrapperProvider : CNContactListStyleDefautProvider {

	CNContactStyle* _contactStyle;

}

@property (nonatomic,readonly) CNContactStyle * contactStyle;              //@synthesize contactStyle=_contactStyle - In the implementation block
-(long long)searchBarStyle;
-(id)tableBackgroundColor;
-(id)tableSeparatorColor;
-(id)cellBackgroundColor;
-(unsigned long long)tableNoContactsAvailableStyle;
-(CNContactStyle *)contactStyle;
-(id)searchBarBackgroundColor;
-(id)headerBackgroundColor;
-(id)cellBackgroundSelectedColor;
-(id)cellNameTextColor;
-(id)cellNameTextHighlightedColor;
-(id)cellSearchResultTextColor;
-(id)cellSearchResultTextDisabledColor;
-(id)cellNameTextFont;
-(id)cellNameTextEmphasisedFont;
-(UIEdgeInsets)cellSeparatorInset;
-(BOOL)cellIsOpaque;
-(BOOL)cellIsVibrant;
-(id)headerIndexTextColor;
-(id)bannerTitleTextColor;
-(id)tableBackgroundFilteredColor;
-(id)tableSectionIndexBackgroundColor;
-(long long)tableSeparatorStyle;
-(long long)tableSeparatorOverlayBlendMode;
-(BOOL)tableIsOpaque;
-(id)searchBarTextColor;
-(id)searchBarTextDisabledColor;
-(id)searchBarPlaceholderTextColor;
-(id)searchBarPlaceholderTextDisabledColor;
-(long long)searchBarKeyboardAppearance;
-(BOOL)searchBarIsTranslucent;
-(long long)navigationBarStyle;
-(BOOL)navigationBarIsTranslucent;
-(id)initWithContactStyle:(id)arg1 ;
@end

