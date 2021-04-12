/*
* Generated on Monday, March 1, 2021 at 2:31:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/


#import <Celestial/Celestial-Structs.h>
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
-(id)init;
-(void)dealloc;
-(void)_detectIfStationary;
-(BOOL)isStationary;
-(void)processSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
@end

