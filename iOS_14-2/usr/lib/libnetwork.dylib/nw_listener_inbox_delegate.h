/*
* Generated on Thursday, January 14, 2021 at 2:20:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libnetwork.dylib
*/


@protocol nw_listener_inbox_delegate
@required
-(BOOL)canHandleNewConnection:(id)arg1;
-(void)handleInbound:(id)arg1 addProtocolInbox:(BOOL)arg2;
-(void)handleInboundPacket:(const char*)arg1 length:(unsigned short)arg2 from:(id)arg3 to:(id)arg4 interface:(id)arg5 socket:(id)arg6;
-(void)handleInboxFailed:(id)arg1 error:(id)arg2;
-(void)handleInboxCancelComplete:(id)arg1;

@end

