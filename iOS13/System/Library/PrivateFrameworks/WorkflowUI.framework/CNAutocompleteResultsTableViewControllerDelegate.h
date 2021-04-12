/*
* Generated on Monday, March 1, 2021 at 2:34:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/


@protocol CNAutocompleteResultsTableViewControllerDelegate <NSObject>
@optional
-(void)autocompleteResultsController:(id)arg1 didSelectRecipient:(id)arg2 atIndex:(unsigned long long)arg3;
-(void)autocompleteResultsController:(id)arg1 didRequestInfoAboutRecipient:(id)arg2;
-(id)autocompleteResultsController:(id)arg1 preferredRecipientForRecipients:(id)arg2;
-(void)autocompleteResultsController:(id)arg1 tintColorForRecipient:(id)arg2 completion:(/*^block*/id)arg3;
-(void)autocompleteResultsController:(id)arg1 didAskToRemoveRecipient:(id)arg2;

@end

