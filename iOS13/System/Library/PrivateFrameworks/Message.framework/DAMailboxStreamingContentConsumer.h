/*
* Generated on Monday, March 1, 2021 at 2:31:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
*/


@protocol DAMailboxStreamingContentConsumer
@required
-(BOOL)shouldBeginStreamingForMailMessage:(id)arg1 format:(int)arg2;
-(void)consumeData:(char*)arg1 length:(int)arg2 format:(int)arg3 mailMessage:(id)arg4;
-(void)didEndStreamingForMailMessage:(id)arg1;

@end

