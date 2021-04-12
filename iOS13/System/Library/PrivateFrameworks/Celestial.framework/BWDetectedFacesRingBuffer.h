/*
* Generated on Monday, March 1, 2021 at 2:31:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/

#import <Celestial/Celestial-Structs.h>
#import <libobjc.A.dylib/BWFaceDetector.h>

@class NSMutableArray, NSString;

@interface BWDetectedFacesRingBuffer : NSObject <BWFaceDetector> {

	NSMutableArray* _ringBuffer;
	OpaqueFigSimpleMutexRef _mutex;
	int _depth;
	int _numConsecutiveFramesWithFaces;
	SCD_Struct_BW2 _lastUpdatePTS;
	SCD_Struct_BW2 _lastStableFacePTS;

}

@property (readonly) id<BWFaceDetector> faceDetector; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) float secondsSinceLastFaceDetected; 
-(void)dealloc;
-(id<BWFaceDetector>)faceDetector;
-(void)flush;
-(id)initWithDepth:(int)arg1 ;
-(void)transferFacesToSampleBuffer:(opaqueCMSampleBufferRef)arg1 totalSensorCropRect:(CGRect)arg2 ;
-(void)addFacesFromSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(int)getFaceRects:(CGRect*)arg1 maxCount:(int)arg2 forPTS:(SCD_Struct_BW2)arg3 ;
-(float)secondsSinceLastFaceDetected;
@end

