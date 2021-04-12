/*
* Generated on Monday, March 1, 2021 at 2:30:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVCaptureVideoPreviewLayer.h>

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
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(CGSize)contentSize;
-(id)initWithLayer:(id)arg1 ;
-(void)layoutSublayers;
-(void)removeConnection:(id)arg1 ;
-(void)attachSafelyToFigCaptureSession:(OpaqueFigCaptureSessionRef)arg1 ;
-(void)detachSafelyFromFigCaptureSession:(OpaqueFigCaptureSessionRef)arg1 ;
-(id)_initWithSession:(id)arg1 makeConnection:(BOOL)arg2 ;
-(void)setAutomaticallyDimsOverCaptureRegion:(BOOL)arg1 ;
-(void)getPrimaryCaptureRectCenter:(CGPoint*)arg1 aspectRatio:(double*)arg2 uniqueID:(long long*)arg3 ;
-(CGRect)primaryCaptureRect;
-(CGRect)overCaptureRect;
-(BOOL)isPrimaryAndOverCaptureCompositingEnabled;
-(BOOL)automaticallyDimsOverCaptureRegion;
-(CGAffineTransform)captureDeviceTransformForSensorSize:(CGSize)arg1 previewSize:(CGSize)arg2 sensorToPreviewVTScalingMode:(id)arg3 ;
-(id)addConnection:(id)arg1 error:(id*)arg2 ;
-(void)didUpdatePreviewImageQueueSlot:(unsigned)arg1 imageQueue:(id)arg2 rotationDegrees:(double)arg3 size:(CGSize)arg4 ;
-(long long)overCaptureStatus;
-(void)setPrimaryCaptureRectAspectRatio:(double)arg1 centerPoint:(CGPoint)arg2 ;
-(void)setPrimaryAndOverCaptureCompositingEnabled:(BOOL)arg1 ;
-(CGPoint)primaryCaptureRectCenterPoint;
-(double)primaryCaptureRectAspectRatio;
-(long long)primaryCaptureRectUniqueID;
-(void)_handleSpatialNotification:(id)arg1 payload:(id)arg2 ;
@end

