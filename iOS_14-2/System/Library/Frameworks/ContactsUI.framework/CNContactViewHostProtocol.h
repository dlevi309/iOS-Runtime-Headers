/*
* Generated on Thursday, January 14, 2021 at 2:20:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/


@protocol CNContactViewHostProtocol <NSObject>
@required
-(void)didCompleteWithContact:(id)arg1;
-(BOOL)shouldPerformDefaultActionForContact:(id)arg1 propertyKey:(id)arg2 propertyIdentifier:(id)arg3;
-(void)updateEditing:(BOOL)arg1 doneButtonEnabled:(BOOL)arg2 doneButtonText:(id)arg3;
-(void)didDeleteContact:(id)arg1;
-(void)isPresentingFullscreen:(BOOL)arg1;
-(void)isPresentingEditingController:(BOOL)arg1;
-(void)didChangePreferredContentSize:(CGSize)arg1;
-(void)didExecuteClearRecentsDataAction;
-(void)didExecuteDeleteFromDowntimeWhitelistAction;
-(void)presentCancelConfirmationAlert;
-(void)viewDidAppear;

@end

