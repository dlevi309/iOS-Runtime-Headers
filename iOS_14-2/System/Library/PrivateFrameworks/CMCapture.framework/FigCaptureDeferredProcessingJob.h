/*
* Generated on Thursday, January 14, 2021 at 2:23:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/


@protocol FigCaptureDeferredProcessingJobDelegate;
#import <CMCapture/CMCapture-Structs.h>
@class BWDeferredProcessingContainer, FigCaptureDeferredPhotoProcessorRequest, NSString;

@interface FigCaptureDeferredProcessingJob : NSObject {

	id<FigCaptureDeferredProcessingJobDelegate> _delegate;
	BWDeferredProcessingContainer* _container;
	FigCaptureDeferredPhotoProcessorRequest* _processorRequest;
	long long _startNS;
	long long _durationNS;
	NSString* _masterPortType;

}

@property (nonatomic,readonly) FigCaptureDeferredPhotoProcessorRequest * processorRequest;              //@synthesize processorRequest=_processorRequest - In the implementation block
@property (nonatomic,readonly) BWDeferredProcessingContainer * container;                               //@synthesize container=_container - In the implementation block
@property (assign,nonatomic) long long startNS;                                                         //@synthesize startNS=_startNS - In the implementation block
@property (assign,nonatomic) long long durationNS;                                                      //@synthesize durationNS=_durationNS - In the implementation block
@property (nonatomic,readonly) NSString * masterPortType;                                               //@synthesize masterPortType=_masterPortType - In the implementation block
-(NSString *)masterPortType;
-(void)start;
-(long long)durationNS;
-(long long)startNS;
-(id)initWithProcessorRequest:(id)arg1 delegate:(id)arg2 error:(int*)arg3 ;
-(void)completedWithSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)failedWithError:(int)arg1 ;
-(void)setDurationNS:(long long)arg1 ;
-(FigCaptureDeferredPhotoProcessorRequest *)processorRequest;
-(void)setStartNS:(long long)arg1 ;
-(BWDeferredProcessingContainer *)container;
-(void)dealloc;
@end

