/*
* Generated on Monday, March 1, 2021 at 2:30:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <ContactsUI/CNPropertyAction.h>

@class CNContactSuggestionViewController;

@interface CNPropertySuggestionAction : CNPropertyAction {

	long long _selectedChoice;
	CNContactSuggestionViewController* _suggestionViewController;

}

@property (nonatomic,retain) CNContactSuggestionViewController * suggestionViewController;              //@synthesize suggestionViewController=_suggestionViewController - In the implementation block
@property (assign,nonatomic) long long selectedChoice;                                                  //@synthesize selectedChoice=_selectedChoice - In the implementation block
-(void)performActionForItem:(id)arg1 sender:(id)arg2 ;
-(BOOL)_confirmOrReject:(BOOL)arg1 ;
-(id)dataSourceWithPropertyItem:(id)arg1 ;
-(void)setSelectedChoice:(long long)arg1 ;
-(BOOL)_confirmOrRejectSuggestion:(BOOL)arg1 ;
-(BOOL)_confirmOrRejectDonation:(BOOL)arg1 ;
-(void)confirm;
-(void)reject;
-(long long)selectedChoice;
-(CNContactSuggestionViewController *)suggestionViewController;
-(void)setSuggestionViewController:(CNContactSuggestionViewController *)arg1 ;
@end

