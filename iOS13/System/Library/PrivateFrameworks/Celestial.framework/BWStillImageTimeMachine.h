/*
* Generated on Monday, March 1, 2021 at 2:31:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/


#import <Celestial/Celestial-Structs.h>
@interface BWStillImageTimeMachine : NSObject {

	OpaqueFigSimpleMutexRef _timeMachineMutex;
	opaqueCMSampleBuffer* _frames;
	BOOL _suspended;
	int _capacity;

}

@property (nonatomic,readonly) int capacity;              //@synthesize capacity=_capacity - In the implementation block
+(void)initialize;
+(BOOL)afComplete:(opaqueCMSampleBufferRef)arg1 ;
-(void)dealloc;
-(id)initWithCapacity:(int)arg1 ;
-(void)resume;
-(int)capacity;
-(void)drain;
-(void)_drain;
-(opaqueCMSampleBufferRef)copyBestFrame;
-(int)insertFrame:(opaqueCMSampleBufferRef)arg1 ;
-(void)suspendAndDrain;
@end

