/*
* Generated on Thursday, January 14, 2021 at 2:20:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/


@protocol CNContactListStyle;
@interface CNContactListStyleApplier : NSObject {

	id<CNContactListStyle> _contactListStyle;

}

@property (nonatomic,readonly) id<CNContactListStyle> contactListStyle;                       //@synthesize contactListStyle=_contactListStyle - In the implementation block
@property (nonatomic,readonly) double cellEstimatedHeight; 
@property (nonatomic,readonly) unsigned long long tableNoContactsAvailableStyle; 
@property (nonatomic,readonly) BOOL usesInsetPlatterStyle; 
+(void)applyDefaultStyleToContact:(id)arg1 usingFormatter:(id)arg2 ofCell:(id)arg3 ;
-(double)cellEstimatedHeight;
-(void)applyContactListStyleToHeaderFooter:(id)arg1 ;
-(BOOL)usesInsetPlatterStyle;
-(void)applyContactListStyleToMeContactLabel:(id)arg1 ofCell:(id)arg2 ;
-(void)applyContactListStyleToSelectedCell:(id)arg1 ;
-(void)applyContactListStyleToText:(id)arg1 ofUnhighlightedCell:(id)arg2 ;
-(id)initWithContactListStyle:(id)arg1 ;
-(void)applyContactListStyleToText:(id)arg1 ofSearchResultCell:(id)arg2 ;
-(void)applyContactListStyleToNavigationBar:(id)arg1 ;
-(void)applyContactListStyleToBannerTitle:(id)arg1 primaryAppearance:(BOOL)arg2 ;
-(unsigned long long)tableNoContactsAvailableStyle;
-(id<CNContactListStyle>)contactListStyle;
-(void)applyContactListStyleToCell:(id)arg1 ;
-(void)applyContactListStyleToContact:(id)arg1 usingFormatter:(id)arg2 ofCell:(id)arg3 ;
-(void)applyContactListStyleToSearchCell:(id)arg1 ;
-(void)applyContactListStyleToEmergencyIcon:(id)arg1 ofCell:(id)arg2 ;
-(void)applyContactListStyleToSearchBar:(id)arg1 ;
-(void)applyContactListStyleToTableView:(id)arg1 ;
-(void)applyContactListStyleToText:(id)arg1 ofHighlightedCell:(id)arg2 ;
-(void)applyContactListStyleToBannerFootnote:(id)arg1 primaryAppearance:(BOOL)arg2 ;
-(void)applySelectionTextStyleToCell:(id)arg1 ;
@end

