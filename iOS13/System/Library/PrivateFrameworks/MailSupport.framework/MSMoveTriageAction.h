/*
* Generated on Monday, March 1, 2021 at 2:33:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MailSupport.framework/MailSupport
*/

#import <MailSupport/MSTriageAction.h>

@class EMMailbox, ECMessageFlagChange;

@interface MSMoveTriageAction : MSTriageAction {

	EMMailbox* _destinationMailbox;
	long long _destinationMailboxType;
	ECMessageFlagChange* _flagChange;
	BOOL _copyMessages;

}
-(id)_changeAction;
-(id)initWithMessageListSelection:(id)arg1 delegate:(id)arg2 destinationMailboxType:(long long)arg3 flagChange:(id)arg4 copyMessages:(BOOL)arg5 ;
-(id)initWithMessageListSelection:(id)arg1 delegate:(id)arg2 destinationMailbox:(id)arg3 flagChange:(id)arg4 copyMessages:(BOOL)arg5 ;
@end

