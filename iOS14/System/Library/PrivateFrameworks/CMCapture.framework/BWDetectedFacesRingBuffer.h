/*
* Generated on Thursday, January 14, 2021 at 2:23:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/CMCapture-Structs.h>
#import <libobjc.A.dylib/BWFaceDetector.h>

@class NSMutableArray, NSString;

@interface BWDetectedFacesRingBuffer : NSObject <BWFaceDetector> {

	NSMutableArray* _ringBuffer;
	OpaqueFigSimpleMutexRef _mutex;
	int _depth;
	int _numConsecutiveFramesWithFaces;
	SCD_Struct_BW8 _lastUpdatePTS;
	SCD_Struct_BW8 _lastStableFacePTS;

}

@property (readonly) id<BWFaceDetector> faceDetector; 
@property (readonly) float secondsSinceLastFaceDetected; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)flush;
-(id)initWithDepth:(int)arg1 ;
-(float)secondsSinceLastFaceDetected;
-(void)transferFacesToSampleBuffer:(opaqueCMSampleBufferRef)arg1 totalSensorCropRect:(CGRect)arg2 ;
-(void)addFacesFromSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(id<BWFaceDetector>)faceDetector;
-(void)dealloc;
@end

