/*
* Generated on Thursday, January 14, 2021 at 2:22:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@class PLSandboxedURL, NSData, NSString, NSURL, PFVideoComplement;

@interface PLStreamShareSource : NSObject {

	PLSandboxedURL* _sandboxedMediaURL;
	PLSandboxedURL* _sandboxedVideoComplementImageURL;
	PLSandboxedURL* _sandboxedVideoComplementVideoURL;
	NSData* _mediaData;
	NSString* _fileExtension;
	NSURL* _mediaURL;
	PFVideoComplement* _videoComplement;
	long long _mediaType;

}

@property (nonatomic,retain) NSData * mediaData;                               //@synthesize mediaData=_mediaData - In the implementation block
@property (nonatomic,retain) NSString * fileExtension;                         //@synthesize fileExtension=_fileExtension - In the implementation block
@property (nonatomic,retain) NSURL * mediaURL;                                 //@synthesize mediaURL=_mediaURL - In the implementation block
@property (nonatomic,retain) PFVideoComplement * videoComplement;              //@synthesize videoComplement=_videoComplement - In the implementation block
@property (assign,nonatomic) long long mediaType;                              //@synthesize mediaType=_mediaType - In the implementation block
-(void)setMediaType:(long long)arg1 ;
-(long long)mediaType;
-(id)photoLibrary;
-(void)_cleanupIfNeededMediaAtURL:(id)arg1 ;
-(void)cleanupResources;
-(NSString *)fileExtension;
-(NSURL *)mediaURL;
-(void)setFileExtension:(NSString *)arg1 ;
-(id)serializedDictionary;
-(id)initWithDictionary:(id)arg1 ;
-(void)setMediaURL:(NSURL *)arg1 ;
-(void)setMediaData:(NSData *)arg1 ;
-(PFVideoComplement *)videoComplement;
-(NSData *)mediaData;
-(void)setVideoComplement:(PFVideoComplement *)arg1 ;
@end

