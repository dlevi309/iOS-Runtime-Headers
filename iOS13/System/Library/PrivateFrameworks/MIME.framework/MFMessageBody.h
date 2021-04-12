/*
* Generated on Monday, March 1, 2021 at 2:32:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
*/


@class MFMessage;

@interface MFMessageBody : NSObject {

	MFMessage* _message;
	BOOL _isEncrypted;

}

@property (nonatomic,readonly) BOOL isEncrypted;              //@synthesize isEncrypted=_isEncrypted - In the implementation block
-(id)attachments;
-(id)message;
-(void)setMessage:(id)arg1 ;
-(BOOL)isEncrypted;
-(id)rawData;
-(id)htmlContentToOffset:(unsigned long long)arg1 resultOffset:(unsigned long long*)arg2 ;
-(id)htmlContent;
-(id)contentToOffset:(unsigned long long)arg1 resultOffset:(unsigned long long*)arg2 asHTML:(BOOL)arg3 isComplete:(BOOL*)arg4 ;
-(BOOL)isHTML;
-(id)attachmentURLs;
-(unsigned)numberOfAttachmentsSigned:(BOOL*)arg1 encrypted:(BOOL*)arg2 ;
-(id)textHtmlPart;
-(id)contentToOffset:(unsigned long long)arg1 resultOffset:(unsigned long long*)arg2 asHTML:(BOOL)arg3 ;
-(BOOL)isRich;
@end

