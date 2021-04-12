/*
* Generated on Thursday, January 14, 2021 at 2:23:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture
*/

#import <AVFCapture/AVFCapture-Structs.h>
#import <AVFCapture/AVCaptureSynchronizedData.h>

@class AVCaptureSynchronizedSampleBufferDataInternal;

@interface AVCaptureSynchronizedSampleBufferData : AVCaptureSynchronizedData {

	AVCaptureSynchronizedSampleBufferDataInternal* _internal;

}

@property (readonly) opaqueCMSampleBufferRef sampleBuffer; 
@property (readonly) BOOL sampleBufferWasDropped; 
@property (readonly) long long droppedReason; 
+(void)initialize;
-(id)_initWithSampleBuffer:(opaqueCMSampleBufferRef)arg1 sampleBufferWasDropped:(BOOL)arg2 ;
-(BOOL)hasCorrespondingDepthData;
-(BOOL)hasCorrespondingVisionData;
-(int)constituentDeviceCaptureID;
-(BOOL)sampleBufferWasDropped;
-(long long)droppedReason;
-(opaqueCMSampleBufferRef)sampleBuffer;
-(void)dealloc;
@end

