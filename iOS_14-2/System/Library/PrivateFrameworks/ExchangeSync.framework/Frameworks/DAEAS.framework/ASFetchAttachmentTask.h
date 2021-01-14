/*
* Generated on Thursday, January 14, 2021 at 2:27:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
*/

#import <DAEAS/ASTask.h>
#import <libobjc.A.dylib/ASFetchAttachmentTaskProtocol.h>

@class NSString, NSFileHandle;

@interface ASFetchAttachmentTask : ASTask <ASFetchAttachmentTaskProtocol> {

	NSString* _attachmentUUID;
	NSString* _attachmentName;
	NSString* _messageID;
	NSString* _localFileName;
	NSString* _attachmentContentType;
	unsigned long long _localFileLength;
	NSFileHandle* _localFileHandle;

}

@property (nonatomic,retain) NSString * attachmentUUID;                       //@synthesize attachmentUUID=_attachmentUUID - In the implementation block
@property (nonatomic,retain) NSString * attachmentName;                       //@synthesize attachmentName=_attachmentName - In the implementation block
@property (nonatomic,retain) NSString * messageID;                            //@synthesize messageID=_messageID - In the implementation block
@property (nonatomic,retain) NSString * localFileName;                        //@synthesize localFileName=_localFileName - In the implementation block
@property (nonatomic,retain) NSString * attachmentContentType;                //@synthesize attachmentContentType=_attachmentContentType - In the implementation block
@property (assign,nonatomic) unsigned long long localFileLength;              //@synthesize localFileLength=_localFileLength - In the implementation block
@property (nonatomic,retain) NSFileHandle * localFileHandle;                  //@synthesize localFileHandle=_localFileHandle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setMessageID:(NSString *)arg1 ;
-(NSString *)attachmentName;
-(void)setAttachmentName:(NSString *)arg1 ;
-(void)finishWithError:(id)arg1 ;
-(NSString *)attachmentUUID;
-(NSString *)messageID;
-(id)command;
-(id)requestBody;
-(NSString *)localFileName;
-(void)setLocalFileName:(NSString *)arg1 ;
-(int)commandCode;
-(BOOL)processContext:(id)arg1 ;
-(BOOL)shouldLogIncomingData;
-(id)initForMessageServerID:(id)arg1 andAttachmentName:(id)arg2 ;
-(id)initForMessageUUID:(id)arg1 ;
-(void)setAttachmentUUID:(NSString *)arg1 ;
-(NSString *)attachmentContentType;
-(void)setAttachmentContentType:(NSString *)arg1 ;
-(unsigned long long)localFileLength;
-(void)setLocalFileLength:(unsigned long long)arg1 ;
-(NSFileHandle *)localFileHandle;
-(void)setLocalFileHandle:(NSFileHandle *)arg1 ;
-(id)parameterData;
@end

