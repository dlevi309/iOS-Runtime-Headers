/*
* Generated on Thursday, January 14, 2021 at 2:23:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/CMCapture-Structs.h>
#import <libobjc.A.dylib/BWObjectDetector.h>

@class NSMutableArray, NSString;

@interface BWDetectedObjectsInfoRingBuffer : NSObject <BWObjectDetector> {

	NSMutableArray* _ringBuffer;
	OpaqueFigSimpleMutexRef _mutex;
	int _depth;
	int _numConsecutiveFramesWithObjects;
	SCD_Struct_BW8 _lastUpdatePTS;
	SCD_Struct_BW8 _lastStableObjectPTS;

}

@property (readonly) id<BWObjectDetector> objectDetector; 
@property (readonly) float secondsSinceLastObjectDetected; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)flush;
-(id<BWObjectDetector>)objectDetector;
-(id)objectsForPTS:(SCD_Struct_BW8)arg1 ;
-(float)secondsSinceLastObjectDetected;
-(id)initWithRingBufferDepth:(int)arg1 ;
-(void)addObjectsFromSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)transferObjectsToSampleBuffer:(opaqueCMSampleBufferRef)arg1 totalSensorCropRect:(CGRect)arg2 ;
-(void)dealloc;
@end

