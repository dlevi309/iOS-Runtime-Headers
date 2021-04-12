/*
* Generated on Monday, March 1, 2021 at 2:32:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
*/


@class NSData, NSString, NSURL;

@interface _MFMailComposeAttachmentWrapper : NSObject {

	NSData* _data;
	NSString* _mimeType;
	NSString* _fileName;
	NSURL* _fileURL;
	NSString* _identifier;

}

@property (nonatomic,readonly) NSData * data;                      //@synthesize data=_data - In the implementation block
@property (nonatomic,readonly) NSString * mimeType;                //@synthesize mimeType=_mimeType - In the implementation block
@property (nonatomic,readonly) NSString * fileName;                //@synthesize fileName=_fileName - In the implementation block
@property (nonatomic,readonly) NSURL * fileURL;                    //@synthesize fileURL=_fileURL - In the implementation block
@property (nonatomic,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
+(id)wrapperWithFileURL:(id)arg1 mimeType:(id)arg2 ;
+(id)wrapperWithData:(id)arg1 mimeType:(id)arg2 fileName:(id)arg3 ;
-(id)description;
-(NSData *)data;
-(NSString *)identifier;
-(unsigned long long)fileSize;
-(NSURL *)fileURL;
-(NSString *)mimeType;
-(NSString *)fileName;
-(id)initWithFileURL:(id)arg1 mimeType:(id)arg2 ;
-(id)initWithData:(id)arg1 mimeType:(id)arg2 fileName:(id)arg3 ;
@end

