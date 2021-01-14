/*
* Generated on Thursday, January 14, 2021 at 2:26:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosFormats.framework/PhotosFormats
*/

#import <PhotosFormats/PhotosFormats-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSURL;

@interface PFExportGIFRequest : NSObject <NSCopying> {

	BOOL _shouldDither;
	BOOL _synchronous;
	double _ditherDepth;
	double _maximumFrameRate;
	unsigned long long _maximumFrameSize;
	NSURL* _videoURL;

}

@property (nonatomic,copy) NSURL * videoURL;                                     //@synthesize videoURL=_videoURL - In the implementation block
@property (assign,nonatomic) BOOL shouldDither;                                  //@synthesize shouldDither=_shouldDither - In the implementation block
@property (assign,nonatomic) double ditherDepth;                                 //@synthesize ditherDepth=_ditherDepth - In the implementation block
@property (assign,nonatomic) double maximumFrameRate;                            //@synthesize maximumFrameRate=_maximumFrameRate - In the implementation block
@property (assign,nonatomic) unsigned long long maximumFrameSize;                //@synthesize maximumFrameSize=_maximumFrameSize - In the implementation block
@property (assign,getter=isSynchronous,nonatomic) BOOL synchronous;              //@synthesize synchronous=_synchronous - In the implementation block
+(void)runExport:(id)arg1 toURL:(id)arg2 progress:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 ;
+(id)_exportQueue;
+(id)runExport:(id)arg1 toURL:(id)arg2 completion:(/*^block*/id)arg3 ;
+(opaqueCMSampleBufferRef)_copyNextSampleBuffer:(id)arg1 reader:(id)arg2 time:(SCD_Struct_PF3*)arg3 didReachEnd:(BOOL*)arg4 error:(id*)arg5 ;
+(CGImageRef)_createProcessedGIFImage:(opaqueCMSampleBufferRef)arg1 options:(id)arg2 error:(id*)arg3 ;
+(BOOL)_exportGIFToURL:(id)arg1 request:(id)arg2 progress:(/*^block*/id)arg3 error:(id*)arg4 ;
-(double)maximumFrameRate;
-(void)setMaximumFrameRate:(double)arg1 ;
-(void)setVideoURL:(NSURL *)arg1 ;
-(BOOL)isSynchronous;
-(void)setSynchronous:(BOOL)arg1 ;
-(NSURL *)videoURL;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)ditherDepth;
-(id)initWithVideoURL:(id)arg1 ;
-(void)_ensureValidInputs;
-(BOOL)shouldDither;
-(void)setShouldDither:(BOOL)arg1 ;
-(void)setDitherDepth:(double)arg1 ;
-(unsigned long long)maximumFrameSize;
-(void)setMaximumFrameSize:(unsigned long long)arg1 ;
@end

