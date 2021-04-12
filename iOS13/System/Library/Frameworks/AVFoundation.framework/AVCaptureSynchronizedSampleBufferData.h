/*
* Generated on Monday, March 1, 2021 at 2:30:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVCaptureSynchronizedData.h>

@class AVCaptureSynchronizedSampleBufferDataInternal;

@interface AVCaptureSynchronizedSampleBufferData : AVCaptureSynchronizedData {

	AVCaptureSynchronizedSampleBufferDataInternal* _internal;

}

@property (readonly) opaqueCMSampleBufferRef sampleBuffer; 
@property (readonly) BOOL sampleBufferWasDropped; 
@property (readonly) long long droppedReason; 
-(void)dealloc;
-(BOOL)sampleBufferWasDropped;
-(long long)droppedReason;
-(BOOL)hasCorrespondingDepthData;
-(BOOL)hasCorrespondingVisionData;
-(int)constituentDeviceCaptureID;
-(opaqueCMSampleBufferRef)sampleBuffer;
-(id)_initWithSampleBuffer:(opaqueCMSampleBufferRef)arg1 sampleBufferWasDropped:(BOOL)arg2 ;
@end

