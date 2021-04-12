/*
* Generated on Thursday, January 14, 2021 at 2:22:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
*/


@class NSData, NSString;

@interface MFAttachmentRaw : NSObject {

	NSData* _data;
	NSString* _fileName;
	NSString* _mimeType;
	NSString* _contentID;

}

@property (nonatomic,retain) NSData * data;                    //@synthesize data=_data - In the implementation block
@property (nonatomic,retain) NSString * fileName;              //@synthesize fileName=_fileName - In the implementation block
@property (nonatomic,retain) NSString * mimeType;              //@synthesize mimeType=_mimeType - In the implementation block
@property (nonatomic,copy) NSString * contentID;               //@synthesize contentID=_contentID - In the implementation block
+(id)attachmentData:(id)arg1 fileName:(id)arg2 mimeType:(id)arg3 contentID:(id)arg4 ;
+(id)attachmentData:(id)arg1 fileName:(id)arg2 mimeType:(id)arg3 ;
-(NSString *)mimeType;
-(void)setFileName:(NSString *)arg1 ;
-(void)setMimeType:(NSString *)arg1 ;
-(void)setData:(NSData *)arg1 ;
-(NSString *)fileName;
-(NSString *)contentID;
-(void)setContentID:(NSString *)arg1 ;
-(NSData *)data;
@end

