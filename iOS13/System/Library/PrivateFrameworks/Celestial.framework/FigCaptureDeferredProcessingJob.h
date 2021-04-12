/*
* Generated on Monday, March 1, 2021 at 2:31:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/


@protocol FigCaptureDeferredProcessingJobDelegate;
#import <Celestial/Celestial-Structs.h>
@class BWDeferredProcessingContainer, FigCaptureDeferredPhotoProcessorRequest;

@interface FigCaptureDeferredProcessingJob : NSObject {

	id<FigCaptureDeferredProcessingJobDelegate> _delegate;
	BWDeferredProcessingContainer* _container;
	FigCaptureDeferredPhotoProcessorRequest* _processorRequest;
	long long _startNS;
	long long _durationNS;

}

@property (nonatomic,readonly) FigCaptureDeferredPhotoProcessorRequest * processorRequest;              //@synthesize processorRequest=_processorRequest - In the implementation block
@property (nonatomic,readonly) BWDeferredProcessingContainer * container;                               //@synthesize container=_container - In the implementation block
@property (assign,nonatomic) long long startNS;                                                         //@synthesize startNS=_startNS - In the implementation block
@property (assign,nonatomic) long long durationNS;                                                      //@synthesize durationNS=_durationNS - In the implementation block
-(void)dealloc;
-(BWDeferredProcessingContainer *)container;
-(void)start;
-(FigCaptureDeferredPhotoProcessorRequest *)processorRequest;
-(id)initWithProcessorRequest:(id)arg1 delegate:(id)arg2 error:(int*)arg3 ;
-(void)completedWithSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)failedWithError:(int)arg1 ;
-(long long)durationNS;
-(void)setDurationNS:(long long)arg1 ;
-(long long)startNS;
-(void)setStartNS:(long long)arg1 ;
@end

