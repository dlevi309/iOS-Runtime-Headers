/*
* Generated on Monday, March 1, 2021 at 2:34:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
*/


@protocol ASFetchAttachmentTaskProtocol <DATask>
@required
-(id)messageID;
-(void)setMessageID:(id)arg1;
-(id)attachmentName;
-(void)setAttachmentName:(id)arg1;
-(id)attachmentUUID;
-(void)setAttachmentUUID:(id)arg1;
-(id)localFileName;
-(void)setLocalFileName:(id)arg1;
-(id)initForMessageServerID:(id)arg1 andAttachmentName:(id)arg2;
-(id)initForMessageUUID:(id)arg1;
-(id)attachmentContentType;
-(void)setAttachmentContentType:(id)arg1;
-(unsigned long long)localFileLength;
-(void)setLocalFileLength:(unsigned long long)arg1;
-(id)localFileHandle;
-(void)setLocalFileHandle:(id)arg1;

@end

