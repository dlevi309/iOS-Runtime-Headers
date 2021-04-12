/*
* Generated on Monday, March 1, 2021 at 2:30:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libnetwork.dylib
*/


@protocol nw_listener_inbox_delegate
@required
-(BOOL)canHandleNewConnection:(id)arg1;
-(void)handleInbound:(id)arg1 addProtocolInbox:(BOOL)arg2;
-(void)handleInboxFailed:(id)arg1 error:(id)arg2;
-(void)handleInboxCancelComplete:(id)arg1;

@end

