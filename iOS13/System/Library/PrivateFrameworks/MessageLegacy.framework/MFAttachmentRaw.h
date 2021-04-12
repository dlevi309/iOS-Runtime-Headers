/*
* Generated on Monday, March 1, 2021 at 2:34:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MessageLegacy.framework/MessageLegacy
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
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
-(NSString *)mimeType;
-(void)setMimeType:(NSString *)arg1 ;
-(NSString *)fileName;
-(void)setFileName:(NSString *)arg1 ;
-(NSString *)contentID;
-(void)setContentID:(NSString *)arg1 ;
@end

