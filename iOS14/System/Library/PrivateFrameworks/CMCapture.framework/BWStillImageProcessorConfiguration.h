/*
* Generated on Thursday, January 14, 2021 at 2:23:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/


@protocol MTLCommandQueue;
@class NSArray, BWInferenceScheduler;

@interface BWStillImageProcessorConfiguration : NSObject {

	NSArray* _sensorConfigurations;
	BOOL _deferredProcessingEnabled;
	id<MTLCommandQueue> _metalCommandQueue;
	BWInferenceScheduler* _inferenceScheduler;
	unsigned _figThreadPriority;

}

@property (nonatomic,retain) NSArray * sensorConfigurations;                         //@synthesize sensorConfigurations=_sensorConfigurations - In the implementation block
@property (assign,nonatomic) BOOL deferredProcessingEnabled;                         //@synthesize deferredProcessingEnabled=_deferredProcessingEnabled - In the implementation block
@property (nonatomic,retain) id<MTLCommandQueue> metalCommandQueue;                  //@synthesize metalCommandQueue=_metalCommandQueue - In the implementation block
@property (nonatomic,retain) BWInferenceScheduler * inferenceScheduler;              //@synthesize inferenceScheduler=_inferenceScheduler - In the implementation block
@property (assign,nonatomic) unsigned figThreadPriority;                             //@synthesize figThreadPriority=_figThreadPriority - In the implementation block
-(BOOL)deferredProcessingEnabled;
-(void)setDeferredProcessingEnabled:(BOOL)arg1 ;
-(NSArray *)sensorConfigurations;
-(void)setSensorConfigurations:(NSArray *)arg1 ;
-(id<MTLCommandQueue>)metalCommandQueue;
-(void)setMetalCommandQueue:(id<MTLCommandQueue>)arg1 ;
-(BWInferenceScheduler *)inferenceScheduler;
-(void)setInferenceScheduler:(BWInferenceScheduler *)arg1 ;
-(unsigned)figThreadPriority;
-(void)setFigThreadPriority:(unsigned)arg1 ;
-(void)dealloc;
@end

