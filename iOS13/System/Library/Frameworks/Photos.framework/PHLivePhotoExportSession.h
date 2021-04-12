/*
* Generated on Monday, March 1, 2021 at 2:31:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/


@class NSArray, NSURL;

@interface PHLivePhotoExportSession : NSObject {

	NSArray* _fileURLs;
	NSURL* _imageURL;
	NSURL* _videoURL;

}

@property (nonatomic,readonly) NSArray * fileURLs;              //@synthesize fileURLs=_fileURLs - In the implementation block
@property (nonatomic,retain) NSURL * imageURL;                  //@synthesize imageURL=_imageURL - In the implementation block
@property (nonatomic,retain) NSURL * videoURL;                  //@synthesize videoURL=_videoURL - In the implementation block
+(BOOL)_identifyResourceURLs:(id)arg1 outImageURL:(id*)arg2 outVideoURL:(id*)arg3 error:(id*)arg4 ;
+(BOOL)_canCreateLivePhotoWithURLs:(id)arg1 outError:(id*)arg2 ;
-(NSURL *)imageURL;
-(NSArray *)fileURLs;
-(NSURL *)videoURL;
-(void)setVideoURL:(NSURL *)arg1 ;
-(void)setImageURL:(NSURL *)arg1 ;
-(id)initWithResourceFileURLs:(id)arg1 ;
-(id)writeToFileURL:(id)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)_isOutputURLValid:(id)arg1 withOptions:(id)arg2 error:(out id*)arg3 ;
@end

