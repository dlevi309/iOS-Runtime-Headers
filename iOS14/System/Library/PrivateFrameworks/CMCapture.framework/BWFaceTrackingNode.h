/*
* Generated on Thursday, January 14, 2021 at 2:23:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/BWNode.h>

@protocol OS_dispatch_queue, OS_dispatch_semaphore;
@class BWFigCaptureISPProcessingSession, NSObject;

@interface BWFaceTrackingNode : BWNode {

	CVAFaceKitRef _faceKitRef;
	BWFigCaptureISPProcessingSession* _processingSession;
	os_unfair_lock_s _processingLock;
	NSObject*<OS_dispatch_queue> _processingQueue;
	NSObject*<OS_dispatch_semaphore> _processingSemaphore;
	BOOL _processing;
	opaqueCMSimpleQueueRef _nextSbufQueue;
	BOOL _setupDone;
	BOOL _structuredLightOccluded;
	BOOL _frontCamera;
	int _orientation;
	BOOL _mirrored;
	int _faceKitMachThreadPriority;
	BOOL _faceKitRGBOnly;
	int _faceKitMaxFaces;
	BOOL _faceKitUsesFaceRecognition;
	BOOL _addMesh;
	BOOL _addDebugInfo;

}
+(void)initialize;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(void)didReachEndOfDataForInput:(id)arg1 ;
-(id)nodeType;
-(int)_setupCVA;
-(id)nodeSubType;
-(void)_startProcessingSampleSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)setFrontCamera:(BOOL)arg1 ;
-(void)setUsesFaceRecognition:(BOOL)arg1 ;
-(BOOL)usesFaceRecognition;
-(id)initWithProcessingSession:(id)arg1 figThreadPriority:(unsigned)arg2 useDepth:(BOOL)arg3 queueDepth:(int)arg4 ;
-(void)setMirrored:(BOOL)arg1 ;
-(BOOL)mirroringEnabled;
-(int)maxFaces;
-(void)_processSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(int)orientation;
-(void)setMaxFaces:(int)arg1 ;
-(void)dealloc;
-(void)setOrientation:(int)arg1 ;
-(BOOL)frontCamera;
@end

