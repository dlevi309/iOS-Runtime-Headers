/*
* Generated on Thursday, January 14, 2021 at 2:22:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
*/


@class NSURL;

@interface MFAttachmentDataProvider : NSObject {

	NSURL* _url;

}

@property (retain) NSURL * url;              //@synthesize url=_url - In the implementation block
+(id)dataProviderWithURL:(id)arg1 ;
+(id)dataProviderWithPath:(id)arg1 ;
-(BOOL)save:(id)arg1 ;
-(id)initWithURL:(id)arg1 ;
-(BOOL)exists;
-(NSURL *)url;
-(id)data;
-(BOOL)_isFileURL;
-(void)setUrl:(NSURL *)arg1 ;
-(id)_fileAttributes:(id)arg1 ;
-(id)errorWithMessage:(id)arg1 code:(long long)arg2 ;
-(id)_path;
@end

