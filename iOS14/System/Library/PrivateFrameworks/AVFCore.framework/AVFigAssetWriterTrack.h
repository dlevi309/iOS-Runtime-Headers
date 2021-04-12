/*
* Generated on Thursday, January 14, 2021 at 2:21:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/


@protocol OS_dispatch_queue;
#import <AVFCore/AVFCore-Structs.h>
@class AVWeakReference, NSString, AVMediaFileType, NSObject, NSOperationQueue;

@interface AVFigAssetWriterTrack : NSObject {

	AVWeakReference* _weakReference;
	OpaqueFigAssetWriterRef _figAssetWriter;
	int _trackID;
	NSString* _mediaType;
	AVMediaFileType* _mediaFileType;
	NSObject*<OS_dispatch_queue> _aboveHighWaterLevelQueue;
	BOOL _aboveHighWaterLevel;
	SCD_Struct_AV6 _sampleBufferCoalescingInterval;
	NSOperationQueue* _operationQueue;

}

@property (nonatomic,readonly) OpaqueFigAssetWriterRef figAssetWriter;                   //@synthesize figAssetWriter=_figAssetWriter - In the implementation block
@property (nonatomic,readonly) NSString * mediaType;                                     //@synthesize mediaType=_mediaType - In the implementation block
@property (nonatomic,readonly) AVMediaFileType * mediaFileType;                          //@synthesize mediaFileType=_mediaFileType - In the implementation block
@property (nonatomic,readonly) int trackID;                                              //@synthesize trackID=_trackID - In the implementation block
@property (nonatomic,readonly) CVPixelBufferPoolRef pixelBufferPool; 
@property (nonatomic,readonly) BOOL encoderSupportsMultiPass; 
@property (getter=isAboveHighWaterLevel,readonly) BOOL aboveHighWaterLevel; 
@property (assign,nonatomic) SCD_Struct_AV6 sampleBufferCoalescingInterval;              //@synthesize sampleBufferCoalescingInterval=_sampleBufferCoalescingInterval - In the implementation block
+(id)assetWriterTrackWithFigAssetWriter:(OpaqueFigAssetWriterRef)arg1 mediaType:(id)arg2 mediaFileType:(id)arg3 formatSpecification:(id)arg4 sourcePixelBufferAttributes:(id)arg5 multiPass:(BOOL)arg6 attachedAdaptor:(id)arg7 error:(id*)arg8 ;
-(void)setLanguageCode:(id)arg1 ;
-(void)setMediaDataLocation:(id)arg1 ;
-(int)_attachToFigAssetWriterUsingFormatSpecification:(id)arg1 sourcePixelBufferAttributes:(id)arg2 multiPass:(BOOL)arg3 error:(id*)arg4 ;
-(void)setSampleReferenceBaseURL:(id)arg1 ;
-(NSString *)mediaType;
-(id)init;
-(void)setAlternateGroupID:(short)arg1 ;
-(void)setExtendedLanguageTag:(id)arg1 ;
-(void)setSampleBufferCoalescingInterval:(SCD_Struct_AV6)arg1 ;
-(void)setFormatDescriptions:(id)arg1 ;
-(void)setFigMetadata:(id)arg1 ;
-(void)setExcludeFromAutoSelection:(BOOL)arg1 ;
-(void)setFigTrackMatrix:(id)arg1 ;
-(void)setFigDimensions:(id)arg1 ;
-(void)setTrackVolume:(float)arg1 ;
-(void)setPreferredChunkDuration:(SCD_Struct_AV6)arg1 ;
-(void)setPreferredChunkAlignment:(long long)arg1 ;
-(void)setPreferredChunkSize:(long long)arg1 ;
-(BOOL)encoderSupportsMultiPass;
-(BOOL)isAboveHighWaterLevel;
-(BOOL)beginPassReturningError:(id*)arg1 ;
-(BOOL)addPixelBuffer:(CVBufferRef)arg1 atPresentationTime:(SCD_Struct_AV6)arg2 error:(id*)arg3 ;
-(void)endPassWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_refreshAboveHighWaterLevel;
-(OpaqueFigAssetWriterRef)figAssetWriter;
-(void)_figAssetWriterDidDropBelowLowWaterLevelForTrackID:(int)arg1 ;
-(SCD_Struct_AV6)sampleBufferCoalescingInterval;
-(void)setMarksOutputTrackAsEnabled:(BOOL)arg1 ;
-(void)setProvisionalAlternateGroupID:(short)arg1 ;
-(BOOL)addSampleBuffer:(opaqueCMSampleBufferRef)arg1 error:(id*)arg2 ;
-(int)trackID;
-(AVMediaFileType *)mediaFileType;
-(void)setLayer:(long long)arg1 ;
-(id)initWithFigAssetWriter:(OpaqueFigAssetWriterRef)arg1 mediaType:(id)arg2 mediaFileType:(id)arg3 formatSpecification:(id)arg4 sourcePixelBufferAttributes:(id)arg5 multiPass:(BOOL)arg6 error:(id*)arg7 ;
-(void)setMediaTimeScale:(int)arg1 ;
-(CVPixelBufferPoolRef)pixelBufferPool;
-(void)prepareToEndSession;
-(void)dealloc;
-(BOOL)markEndOfDataReturningError:(id*)arg1 ;
@end

