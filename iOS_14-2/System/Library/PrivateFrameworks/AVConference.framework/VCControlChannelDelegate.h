/*
* Generated on Thursday, January 14, 2021 at 2:25:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


@protocol VCControlChannelDelegate <NSObject>
@required
-(void)controlChannel:(id)arg1 receivedMessage:(id)arg2 transactionID:(unsigned)arg3 fromParticipant:(id)arg4;
-(void)controlChannel:(id)arg1 sendReliableMessage:(id)arg2 didSucceed:(BOOL)arg3 toParticipant:(id)arg4;
-(void)controlChannel:(id)arg1 clearTransactionCacheForParticipant:(id)arg2;

@end

