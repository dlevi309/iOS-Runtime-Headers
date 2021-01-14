/*
* Generated on Thursday, January 14, 2021 at 2:26:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaConversionService.framework/MediaConversionService
*/


@class NSURL, NSString;

@interface PHMediaFormatConversionContent : NSObject {

	unsigned long long _length;
	NSURL* _fileURL;
	NSString* _fileSignature;
	long long _mediaType;

}

@property (readonly) NSString * fileSignature; 
@property (assign) long long mediaType;                      //@synthesize mediaType=_mediaType - In the implementation block
@property (retain) NSURL * fileURL;                          //@synthesize fileURL=_fileURL - In the implementation block
@property (readonly) unsigned long long length; 
@property (readonly) NSString * fileType; 
-(void)setFileURL:(NSURL *)arg1 ;
-(void)setMediaType:(long long)arg1 ;
-(long long)mediaType;
-(unsigned long long)length;
-(NSURL *)fileURL;
-(BOOL)isImage;
-(id)description;
-(BOOL)isVideo;
-(NSString *)fileSignature;
-(NSString *)fileType;
-(BOOL)isAssetBundle;
-(id)typeIdentifierFromFileExtensionWithError:(id*)arg1 ;
@end

