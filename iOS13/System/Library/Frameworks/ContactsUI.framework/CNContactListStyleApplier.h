/*
* Generated on Monday, March 1, 2021 at 2:30:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/


@protocol CNContactListStyle;
@interface CNContactListStyleApplier : NSObject {

	id<CNContactListStyle> _contactListStyle;

}

@property (nonatomic,readonly) id<CNContactListStyle> contactListStyle;                       //@synthesize contactListStyle=_contactListStyle - In the implementation block
@property (nonatomic,readonly) double cellEstimatedHeight; 
@property (nonatomic,readonly) unsigned long long tableNoContactsAvailableStyle; 
+(void)applyDefaultStyleToContact:(id)arg1 usingFormatter:(id)arg2 ofCell:(id)arg3 ;
-(id)initWithContactListStyle:(id)arg1 ;
-(double)cellEstimatedHeight;
-(unsigned long long)tableNoContactsAvailableStyle;
-(void)applyContactListStyleToCell:(id)arg1 ;
-(void)applyContactListStyleToHeaderFooter:(id)arg1 ;
-(void)applyContactListStyleToNavigationBar:(id)arg1 ;
-(void)applyContactListStyleToSearchBar:(id)arg1 ;
-(void)applyContactListStyleToTableView:(id)arg1 ;
-(void)applyContactListStyleToContact:(id)arg1 usingFormatter:(id)arg2 ofCell:(id)arg3 ;
-(void)applyContactListStyleToText:(id)arg1 ofHighlightedCell:(id)arg2 ;
-(void)applyContactListStyleToText:(id)arg1 ofUnhighlightedCell:(id)arg2 ;
-(void)applyContactListStyleToText:(id)arg1 ofSearchResultCell:(id)arg2 ;
-(void)applyContactListStyleToMeContactLabel:(id)arg1 ofCell:(id)arg2 ;
-(void)applyContactListStyleToEmergencyIcon:(id)arg1 ofCell:(id)arg2 ;
-(void)applyContactListStyleToBannerTitle:(id)arg1 primaryAppearance:(BOOL)arg2 ;
-(void)applyContactListStyleToBannerFootnote:(id)arg1 primaryAppearance:(BOOL)arg2 ;
-(id<CNContactListStyle>)contactListStyle;
@end

