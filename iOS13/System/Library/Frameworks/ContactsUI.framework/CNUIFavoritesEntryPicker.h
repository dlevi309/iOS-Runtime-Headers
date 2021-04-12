/*
* Generated on Monday, March 1, 2021 at 2:30:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <libobjc.A.dylib/CNContactActionsControllerDelegate.h>

@protocol CNUIFavoritesEntryPickerDelegate;
@class CNContact, UIAlertController, CNContactActionsController, NSString;

@interface CNUIFavoritesEntryPicker : NSObject <CNContactActionsControllerDelegate> {

	id<CNUIFavoritesEntryPickerDelegate> _delegate;
	CNContact* _contact;
	UIAlertController* _alertController;
	CNContactActionsController* _actionsController;

}

@property (nonatomic,retain) UIAlertController * alertController;                               //@synthesize alertController=_alertController - In the implementation block
@property (nonatomic,retain) CNContactActionsController * actionsController;                    //@synthesize actionsController=_actionsController - In the implementation block
@property (assign,nonatomic,__weak) id<CNUIFavoritesEntryPickerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) CNContact * contact;                                             //@synthesize contact=_contact - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)descriptorForRequiredKeys;
-(id<CNUIFavoritesEntryPickerDelegate>)delegate;
-(void)setDelegate:(id<CNUIFavoritesEntryPickerDelegate>)arg1 ;
-(CNContact *)contact;
-(void)setAlertController:(UIAlertController *)arg1 ;
-(UIAlertController *)alertController;
-(id)viewController;
-(id)initWithContact:(id)arg1 ;
-(CNContactActionsController *)actionsController;
-(void)contactActionsController:(id)arg1 didSelectAction:(id)arg2 ;
-(void)setActionsController:(CNContactActionsController *)arg1 ;
@end

