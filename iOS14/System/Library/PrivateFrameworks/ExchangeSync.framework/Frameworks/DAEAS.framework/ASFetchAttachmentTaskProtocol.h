/*
* Generated on Thursday, January 14, 2021 at 2:27:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
*/


@protocol ASFetchAttachmentTaskProtocol <DATask>
@required
-(void)setMessageID:(id)arg1;
-(id)attachmentName;
-(void)setAttachmentName:(id)arg1;
-(id)attachmentUUID;
-(id)messageID;
-(id)localFileName;
-(void)setLocalFileName:(id)arg1;
-(id)initForMessageServerID:(id)arg1 andAttachmentName:(id)arg2;
-(id)initForMessageUUID:(id)arg1;
-(void)setAttachmentUUID:(id)arg1;
-(id)attachmentContentType;
-(void)setAttachmentContentType:(id)arg1;
-(unsigned long long)localFileLength;
-(void)setLocalFileLength:(unsigned long long)arg1;
-(id)localFileHandle;
-(void)setLocalFileHandle:(id)arg1;

@end

