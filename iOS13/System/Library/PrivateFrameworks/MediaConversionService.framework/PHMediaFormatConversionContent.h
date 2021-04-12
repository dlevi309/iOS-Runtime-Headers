/*
* Generated on Monday, March 1, 2021 at 2:34:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(unsigned long long)length;
-(id)description;
-(NSString *)fileType;
-(NSURL *)fileURL;
-(void)setFileURL:(NSURL *)arg1 ;
-(long long)mediaType;
-(BOOL)isVideo;
-(NSString *)fileSignature;
-(BOOL)isImage;
-(void)setMediaType:(long long)arg1 ;
-(BOOL)isAssetBundle;
-(id)typeIdentifierFromFileExtensionWithError:(id*)arg1 ;
@end

