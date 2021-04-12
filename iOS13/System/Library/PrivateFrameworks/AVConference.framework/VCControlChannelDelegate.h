/*
* Generated on Monday, March 1, 2021 at 2:33:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


@protocol VCControlChannelDelegate <NSObject>
@required
-(void)controlChannel:(id)arg1 receivedMessage:(id)arg2 transactionID:(unsigned)arg3 fromParticipant:(id)arg4;
-(void)controlChannel:(id)arg1 sendReliableMessage:(id)arg2 didSucceed:(BOOL)arg3 toParticipant:(id)arg4;
-(void)controlChannel:(id)arg1 clearTransactionCacheForParticipant:(id)arg2;

@end

