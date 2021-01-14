/*
* Generated on Thursday, January 14, 2021 at 2:20:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/


@protocol CNContactNavigationControllerDelegate <UINavigationControllerDelegate>
@optional
-(void)contactNavigationControllerDidCancel:(id)arg1;
-(void)contactNavigationControllerDidComplete:(id)arg1;
-(BOOL)contactNavigationControllerShouldAddNewContact:(id)arg1;
-(BOOL)contactNavigationController:(id)arg1 canSelectContact:(id)arg2;
-(BOOL)contactNavigationController:(id)arg1 shouldSelectContact:(id)arg2 atIndexPath:(id)arg3;
-(BOOL)contactNavigationController:(id)arg1 shouldShowCardForContact:(id)arg2;
-(BOOL)contactNavigationController:(id)arg1 shouldPerformDefaultActionForContactProperty:(id)arg2;
-(void)contactNavigationController:(id)arg1 didDeleteContact:(id)arg2;
-(BOOL)contactNavigationControllerShouldShowContactsOnKeyCommands:(id)arg1;
-(void)contactNavigationControllerClearContactSelection:(id)arg1;
-(BOOL)contactNavigationControllerShouldShowGroupsViewController:(id)arg1;
-(id)contactNavigationController:(id)arg1 contactViewControllerForContact:(id)arg2 preferredMode:(long long)arg3;
-(BOOL)contactNavigationController:(id)arg1 presentViewController:(id)arg2 animated:(BOOL)arg3;
-(void)contactNavigationControllerDidUpdateAccountsAndGroupsState:(id)arg1;

@end

