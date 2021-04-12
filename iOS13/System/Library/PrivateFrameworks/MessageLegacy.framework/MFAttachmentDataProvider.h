/*
* Generated on Monday, March 1, 2021 at 2:34:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MessageLegacy.framework/MessageLegacy
*/


@class NSURL;

@interface MFAttachmentDataProvider : NSObject {

	NSURL* _url;

}

@property (retain) NSURL * url;              //@synthesize url=_url - In the implementation block
+(id)dataProviderWithURL:(id)arg1 ;
+(id)dataProviderWithPath:(id)arg1 ;
-(id)initWithURL:(id)arg1 ;
-(id)data;
-(NSURL *)url;
-(id)_path;
-(BOOL)save:(id)arg1 ;
-(void)setUrl:(NSURL *)arg1 ;
-(BOOL)exists;
-(BOOL)_isFileURL;
-(id)_fileAttributes:(id)arg1 ;
-(id)errorWithMessage:(id)arg1 code:(long long)arg2 ;
@end

