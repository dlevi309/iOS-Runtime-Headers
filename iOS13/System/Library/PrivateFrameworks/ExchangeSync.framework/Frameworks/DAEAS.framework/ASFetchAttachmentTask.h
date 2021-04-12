/*
* Generated on Monday, March 1, 2021 at 2:34:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)finishWithError:(id)arg1 ;
-(NSString *)messageID;
-(void)setMessageID:(NSString *)arg1 ;
-(id)command;
-(id)requestBody;
-(NSString *)attachmentName;
-(void)setAttachmentName:(NSString *)arg1 ;
-(NSString *)attachmentUUID;
-(void)setAttachmentUUID:(NSString *)arg1 ;
-(NSString *)localFileName;
-(void)setLocalFileName:(NSString *)arg1 ;
-(int)commandCode;
-(BOOL)processContext:(id)arg1 ;
-(BOOL)shouldLogIncomingData;
-(id)initForMessageServerID:(id)arg1 andAttachmentName:(id)arg2 ;
-(id)initForMessageUUID:(id)arg1 ;
-(NSString *)attachmentContentType;
-(void)setAttachmentContentType:(NSString *)arg1 ;
-(unsigned long long)localFileLength;
-(void)setLocalFileLength:(unsigned long long)arg1 ;
-(NSFileHandle *)localFileHandle;
-(void)setLocalFileHandle:(NSFileHandle *)arg1 ;
-(id)parameterData;
@end

