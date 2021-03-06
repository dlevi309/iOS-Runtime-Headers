/*
* Generated on Thursday, January 14, 2021 at 2:27:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PreferenceBundles/MobileSafariSettings.bundle/MobileSafariSettings
*/

#import <MobileSafariSettings/SafariAutoFillListController.h>
#import <libobjc.A.dylib/_SFSettingsAuthenticationRequiring.h>

@class NSArray, UIBarButtonItem, NSString;

@interface SafariSavedCreditCardsController : SafariAutoFillListController <_SFSettingsAuthenticationRequiring> {

	NSArray* _specifiersForAddItem;
	UIBarButtonItem* _deleteBarButtonItem;
	UIBarButtonItem* _editBarButtonItem;
	UIBarButtonItem* _cancelBarButtonItem;
	NSArray* _virtualCards;
	NSArray* _specifiersForVirtualCardSection;
	BOOL _hasBeenAuthenticated;

}

@property (nonatomic,copy,readonly) NSString * authenticationPrompt; 
@property (nonatomic,readonly) BOOL showsAuthenticationPromptAsTitle; 
@property (assign,nonatomic) BOOL hasBeenAuthenticated;                            //@synthesize hasBeenAuthenticated=_hasBeenAuthenticated - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)specifiers;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)_deleteButtonTapped;
-(void)_cancelEditing;
-(id)_deleteBarButtonItem;
-(void)_updateDeleteButton;
-(void)_addItem:(id)arg1 ;
-(BOOL)hasBeenAuthenticated;
-(void)setHasBeenAuthenticated:(BOOL)arg1 ;
-(BOOL)showsAuthenticationPromptAsTitle;
-(NSString *)authenticationPrompt;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id)_cancelBarButtonItem;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)_updateEditButton;
-(id)_editBarButtonItem;
-(long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2 ;
-(BOOL)canBeShownFromSuspendedState;
-(void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2 ;
-(void)_showEditBarButtonItemAnimated:(BOOL)arg1 ;
-(id)_specifiersForVirtualCardSection;
-(id)titleForAddItem;
-(Class)controllerClassForAddItem;
-(id)_specifiersForAddItem;
-(void)_createVirtualCardSectionSpecifiers;
-(id)_specifiersToAddOrRemoveWhenTogglingEditButton;
-(void)_toggleEditing;
-(unsigned long long)_autoFillItemCount;
-(id)deleteConfirmationTitle;
-(id)deleteConfirmationMessage;
-(void)_deleteSelectedItems;
-(void)deleteItemsForSpecifiers:(id)arg1 ;
-(BOOL)isSpecifierForAutoFillItem:(id)arg1 ;
-(void)_viewVirtualCardInWallet:(id)arg1 ;
@end

