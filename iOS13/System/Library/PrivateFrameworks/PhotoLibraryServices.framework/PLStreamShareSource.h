/*
* Generated on Monday, March 1, 2021 at 2:30:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@class NSData, NSString, NSURL, PFVideoComplement;

@interface PLStreamShareSource : NSObject {

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
-(id)initWithDictionary:(id)arg1 ;
-(long long)mediaType;
-(NSString *)fileExtension;
-(void)setMediaData:(NSData *)arg1 ;
-(NSData *)mediaData;
-(void)setMediaType:(long long)arg1 ;
-(id)photoLibrary;
-(PFVideoComplement *)videoComplement;
-(NSURL *)mediaURL;
-(id)serializedDictionary;
-(void)setMediaURL:(NSURL *)arg1 ;
-(void)_cleanupIfNeededMediaAtURL:(id)arg1 ;
-(void)cleanupResources;
-(void)setFileExtension:(NSString *)arg1 ;
-(void)setVideoComplement:(PFVideoComplement *)arg1 ;
@end

