/*
* Generated on Thursday, January 14, 2021 at 2:23:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
*/


@class NSString;

@interface DAMessageFetchAttachmentRequest : NSObject {

	NSString* _messageID;
	NSString* _attachmentName;

}

@property (nonatomic,copy) NSString * messageID;                   //@synthesize messageID=_messageID - In the implementation block
@property (nonatomic,copy) NSString * attachmentName;              //@synthesize attachmentName=_attachmentName - In the implementation block
-(void)setMessageID:(NSString *)arg1 ;
-(id)description;
-(NSString *)attachmentName;
-(void)setAttachmentName:(NSString *)arg1 ;
-(unsigned long long)hash;
-(id)initWithAttachmentName:(id)arg1 andMessageServerID:(id)arg2 ;
-(NSString *)messageID;
-(BOOL)isEqual:(id)arg1 ;
@end

