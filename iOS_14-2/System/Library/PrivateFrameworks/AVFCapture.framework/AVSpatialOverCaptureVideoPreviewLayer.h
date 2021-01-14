/*
* Generated on Thursday, January 14, 2021 at 2:23:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture
*/

#import <AVFCapture/AVFCapture-Structs.h>
#import <AVFCapture/AVCaptureVideoPreviewLayer.h>

@class CALayer;

@interface AVSpatialOverCaptureVideoPreviewLayer : AVCaptureVideoPreviewLayer {

	os_unfair_lock_s _primaryCaptureRectLock;
	CGPoint _primaryCaptureRectCenterPoint;
	double _primaryCaptureRectAspectRatio;
	long long _primaryCaptureRectUniqueID;
	BOOL _havePendingPrimaryCaptureRectChange;
	CGRect _primaryCaptureRect;
	CGRect _overCaptureRect;
	CGSize _contentSize;
	BOOL _primaryAndOverCaptureCompositingEnabled;
	long long _overCaptureStatus;
	BOOL _isPresentationLayer;
	BOOL _automaticallyDimsOverCaptureRegion;
	CALayer* _topDimmingOverlay;
	CALayer* _bottomDimmingOverlay;
	double _lastAspectCenterUpdateTime;

}

@property (nonatomic,readonly) CGPoint primaryCaptureRectCenterPoint; 
@property (nonatomic,readonly) double primaryCaptureRectAspectRatio; 
@property (nonatomic,readonly) CGRect primaryCaptureRect;                                                                                //@synthesize primaryCaptureRect=_primaryCaptureRect - In the implementation block
@property (nonatomic,readonly) CGRect overCaptureRect;                                                                                   //@synthesize overCaptureRect=_overCaptureRect - In the implementation block
@property (nonatomic,readonly) CGSize contentSize;                                                                                       //@synthesize contentSize=_contentSize - In the implementation block
@property (assign,getter=isPrimaryAndOverCaptureCompositingEnabled,nonatomic) BOOL primaryAndOverCaptureCompositingEnabled; 
@property (nonatomic,readonly) long long overCaptureStatus; 
@property (assign,nonatomic) BOOL automaticallyDimsOverCaptureRegion; 
+(long long)uniqueID;
-(long long)primaryCaptureRectUniqueID;
-(double)primaryCaptureRectAspectRatio;
-(void)layoutSublayers;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)addConnection:(id)arg1 error:(id*)arg2 ;
-(void)attachSafelyToFigCaptureSession:(OpaqueFigCaptureSessionRef)arg1 ;
-(long long)overCaptureStatus;
-(id)_initWithSession:(id)arg1 makeConnection:(BOOL)arg2 ;
-(BOOL)isPrimaryAndOverCaptureCompositingEnabled;
-(void)didUpdatePreviewImageQueueSlot:(unsigned)arg1 imageQueue:(id)arg2 rotationDegrees:(double)arg3 size:(CGSize)arg4 ;
-(CGRect)overCaptureRect;
-(void)removeConnection:(id)arg1 ;
-(CGSize)contentSize;
-(BOOL)automaticallyDimsOverCaptureRegion;
-(void)detachSafelyFromFigCaptureSession:(OpaqueFigCaptureSessionRef)arg1 ;
-(id)initWithLayer:(id)arg1 ;
-(CGAffineTransform)captureDeviceTransformForSensorSize:(CGSize)arg1 previewSize:(CGSize)arg2 sensorToPreviewVTScalingMode:(id)arg3 ;
-(void)setAutomaticallyDimsOverCaptureRegion:(BOOL)arg1 ;
-(void)setPrimaryCaptureRectAspectRatio:(double)arg1 centerPoint:(CGPoint)arg2 ;
-(void)_handleSpatialNotification:(id)arg1 payload:(id)arg2 ;
-(CGPoint)primaryCaptureRectCenterPoint;
-(void)setPrimaryAndOverCaptureCompositingEnabled:(BOOL)arg1 ;
-(void)getPrimaryCaptureRectCenter:(CGPoint*)arg1 aspectRatio:(double*)arg2 uniqueID:(long long*)arg3 ;
-(CGRect)primaryCaptureRect;
@end

