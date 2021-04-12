/*
* Generated on Monday, March 1, 2021 at 2:30:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/


@protocol CNContactViewHostProtocol <NSObject>
@required
-(BOOL)shouldPerformDefaultActionForContact:(id)arg1 propertyKey:(id)arg2 propertyIdentifier:(id)arg3;
-(void)updateEditing:(BOOL)arg1 doneButtonEnabled:(BOOL)arg2 doneButtonText:(id)arg3;
-(void)didCompleteWithContact:(id)arg1;
-(void)didDeleteContact:(id)arg1;
-(void)isPresentingFullscreen:(BOOL)arg1;
-(void)isPresentingEditingController:(BOOL)arg1;
-(void)didChangePreferredContentSize:(CGSize)arg1;
-(void)viewDidAppear;
-(void)didExecuteClearRecentsDataAction;
-(void)didExecuteDeleteFromDowntimeWhitelistAction;
-(void)presentCancelConfirmationAlert;

@end

