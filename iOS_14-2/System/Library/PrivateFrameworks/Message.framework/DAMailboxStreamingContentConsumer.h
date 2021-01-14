/*
* Generated on Thursday, January 14, 2021 at 2:22:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
*/


@protocol DAMailboxStreamingContentConsumer
@required
-(BOOL)shouldBeginStreamingForMailMessage:(id)arg1 format:(int)arg2;
-(void)consumeData:(char*)arg1 length:(int)arg2 format:(int)arg3 mailMessage:(id)arg4;
-(void)didEndStreamingForMailMessage:(id)arg1;

@end

