/*
* Generated on Thursday, January 14, 2021 at 2:23:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/


#import <CMCapture/CMCapture-Structs.h>
@interface BWStillImageTimeMachine : NSObject {

	OpaqueFigSimpleMutexRef _timeMachineMutex;
	opaqueCMSampleBuffer* _frames;
	BOOL _suspended;
	int _capacity;

}

@property (nonatomic,readonly) int capacity;              //@synthesize capacity=_capacity - In the implementation block
+(void)initialize;
+(BOOL)afComplete:(opaqueCMSampleBufferRef)arg1 ;
-(void)drain;
-(int)capacity;
-(void)_drain;
-(opaqueCMSampleBufferRef)copyBestFrame;
-(void)suspendAndDrain;
-(int)insertFrame:(opaqueCMSampleBufferRef)arg1 ;
-(id)initWithCapacity:(int)arg1 ;
-(void)resume;
-(void)dealloc;
@end

