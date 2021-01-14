/*
* Generated on Thursday, January 14, 2021 at 2:23:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/


#import <CMCapture/CMCapture-Structs.h>
@class BWMotionSampleRingBuffer;

@interface BWDeviceMotionActivityDetector : NSObject {

	BWMotionSampleRingBuffer* _motionDataRingBuffer;
	OpaqueFigSimpleMutexRef _ringMutex;
	BOOL _stationary;
	BOOL _newMotionDataAvailable;
	BOOL _robustMethodEnabled;
	BOOL _motionMetadataStatusChecked;

}

@property (getter=isStationary,nonatomic,readonly) BOOL stationary; 
+(void)initialize;
-(BOOL)isStationary;
-(id)init;
-(void)processSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)_detectIfStationary;
-(void)dealloc;
@end

