/*
* Generated on Thursday, January 14, 2021 at 2:23:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
*/


@class NSData, NSString, NSURL, NSItemProvider;

@interface _MFMailComposeAttachmentWrapper : NSObject {

	NSData* _data;
	NSString* _mimeType;
	NSString* _fileName;
	NSURL* _fileURL;
	NSString* _identifier;
	NSItemProvider* _itemProvider;

}

@property (nonatomic,readonly) NSData * data;                              //@synthesize data=_data - In the implementation block
@property (nonatomic,readonly) NSString * mimeType;                        //@synthesize mimeType=_mimeType - In the implementation block
@property (nonatomic,readonly) NSString * fileName;                        //@synthesize fileName=_fileName - In the implementation block
@property (nonatomic,readonly) NSURL * fileURL;                            //@synthesize fileURL=_fileURL - In the implementation block
@property (nonatomic,readonly) NSString * identifier;                      //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSItemProvider * itemProvider;              //@synthesize itemProvider=_itemProvider - In the implementation block
+(id)wrapperWithFileURL:(id)arg1 mimeType:(id)arg2 ;
+(id)wrapperWithData:(id)arg1 mimeType:(id)arg2 fileName:(id)arg3 ;
+(id)wrapperWithItemProvider:(id)arg1 mimeType:(id)arg2 fileName:(id)arg3 ;
-(NSString *)mimeType;
-(id)initWithFileURL:(id)arg1 mimeType:(id)arg2 ;
-(id)initWithData:(id)arg1 mimeType:(id)arg2 fileName:(id)arg3 ;
-(id)initWithItemProvider:(id)arg1 mimeType:(id)arg2 fileName:(id)arg3 ;
-(unsigned long long)fileSize;
-(NSItemProvider *)itemProvider;
-(NSString *)fileName;
-(NSURL *)fileURL;
-(id)description;
-(NSData *)data;
-(NSString *)identifier;
@end

