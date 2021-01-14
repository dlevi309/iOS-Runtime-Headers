/*
* Generated on Thursday, January 14, 2021 at 2:25:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
*/


@class MFMessage;

@interface MFMessageBody : NSObject {

	MFMessage* _message;
	BOOL _isEncrypted;

}

@property (nonatomic,readonly) BOOL isEncrypted;              //@synthesize isEncrypted=_isEncrypted - In the implementation block
-(void)setMessage:(id)arg1 ;
-(id)message;
-(id)attachments;
-(unsigned)numberOfAttachmentsSigned:(BOOL*)arg1 encrypted:(BOOL*)arg2 ;
-(BOOL)isHTML;
-(id)rawData;
-(id)contentToOffset:(unsigned long long)arg1 resultOffset:(unsigned long long*)arg2 asHTML:(BOOL)arg3 ;
-(BOOL)isRich;
-(id)textHtmlPart;
-(id)htmlContent;
-(id)htmlContentToOffset:(unsigned long long)arg1 resultOffset:(unsigned long long*)arg2 ;
-(id)contentToOffset:(unsigned long long)arg1 resultOffset:(unsigned long long*)arg2 asHTML:(BOOL)arg3 isComplete:(BOOL*)arg4 ;
-(BOOL)isEncrypted;
-(id)attachmentURLs;
@end

