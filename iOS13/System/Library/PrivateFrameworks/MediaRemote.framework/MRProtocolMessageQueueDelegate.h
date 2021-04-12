/*
* Generated on Monday, March 1, 2021 at 2:32:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/


@protocol MRProtocolMessageQueueDelegate <NSObject>
@required
-(unsigned long long)messageQueue:(id)arg1 processData:(id)arg2 atReadPosition:(long long)arg3;
-(void)messageQueue:(id)arg1 didSendMessage:(id)arg2;
-(void)messageQueue:(id)arg1 didPurgeMessage:(id)arg2;

@end

