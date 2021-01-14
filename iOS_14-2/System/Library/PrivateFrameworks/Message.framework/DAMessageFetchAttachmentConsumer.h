/*
* Generated on Thursday, January 14, 2021 at 2:22:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
*/


@protocol DAMessageFetchAttachmentConsumer
@optional
-(void)attachmentFetchCompletedWithStatus:(long long)arg1 forAttachmentNamed:(id)arg2 ofMessageWithServerID:(id)arg3 dataWasBase64:(BOOL)arg4;
-(void)attachmentFetchCompletedWithStatus:(long long)arg1 forAttachmentNamed:(id)arg2 ofMessageWithServerID:(id)arg3 dataWasBase64:(BOOL)arg4 sentBytesCount:(unsigned long long)arg5 receivedBytesCount:(unsigned long long)arg6;

@required
-(void)consumeData:(id)arg1 ofContentType:(id)arg2 forAttachmentNamed:(id)arg3 ofMessageWithServerID:(id)arg4;

@end

