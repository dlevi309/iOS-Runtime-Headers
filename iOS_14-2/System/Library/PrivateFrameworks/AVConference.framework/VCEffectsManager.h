/*
* Generated on Thursday, January 14, 2021 at 2:25:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


@protocol OS_dispatch_queue;
#import <AVConference/AVConference-Structs.h>
@class NSObject, NSMutableArray;

@interface VCEffectsManager : NSObject {

	id _delegate;
	NSObject*<OS_dispatch_queue> _xpcCommandQueue;
	NSMutableArray* _effectsArray;
	BOOL _effectsRegistered;
	opaque_pthread_mutex_t _loggingLock;
	SCD_Struct_VC84 _lastPrintTimestamp;
	SCD_Struct_VC84 _lastReceivedTimestamp;
	SCD_Struct_VC84 _lastSentTimestamp;
	int _consecutiveDroppedFrameCount;
	int _cameraFrameCount;
	int _sentFrameCount;
	int _receivedFrameCount;
	int _droppedFrameCount;
	int _failedFrameCount;
	BOOL _forceDisableEffectsHealthCheck;
	opaqueVCRemoteImageQueueRef _senderQueue;
	CVBufferRef _lastReceivedPixelBuffer;
	CVBufferRef _lastReceivedDepthBuffer;
	int _thermalPressureLevel;

}

@property (assign,nonatomic) id<VCEffectsManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (retain) NSMutableArray * effectsArray;                                //@synthesize effectsArray=_effectsArray - In the implementation block
+(id)sharedManager;
-(void)resetEffectsLogging;
-(id)init;
-(id<VCEffectsManagerDelegate>)delegate;
-(void)renderPixelBuffer:(CVBufferRef)arg1 time:(SCD_Struct_VC84)arg2 ;
-(void)registerBlocksForService;
-(void)capturedPixelBuffer:(CVBufferRef)arg1 depthDataPixelBuffer:(CVBufferRef)arg2 time:(SCD_Struct_VC84)arg3 imageData:(id)arg4 ;
-(void)effectsRegistered:(BOOL)arg1 ;
-(void)setDelegate:(id<VCEffectsManagerDelegate>)arg1 ;
-(BOOL)isEffectsOn;
-(void)setEffectsArray:(NSMutableArray *)arg1 ;
-(NSMutableArray *)effectsArray;
-(BOOL)checkEffectsHealth;
-(void)encodeProcessedPixelBuffer:(CVBufferRef)arg1 time:(SCD_Struct_VC84)arg2 imageData:(id)arg3 processTime:(id)arg4 ;
-(void)capturedPixelBuffer:(CVBufferRef)arg1 depthBuffer:(CVBufferRef)arg2 time:(SCD_Struct_VC84)arg3 imageData:(id)arg4 toClient:(id)arg5 ;
-(BOOL)isFaceMeshTrackingEnabled;
-(void)updateThermalLevel:(int)arg1 ;
-(void)dealloc;
@end

