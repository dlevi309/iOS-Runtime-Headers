/*
* Generated on Thursday, January 14, 2021 at 2:26:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ModelIO.framework/ModelIO
*/


#import <ModelIO/ModelIO-Structs.h>
@class MDLStereoscopicCamera;

@interface MDLInteractiveCameraController : NSObject {

	 _lookAt;
	 _clickPoint;
	 _dragVector;
	float _pitch;
	float _yaw;
	MDLAABB _framingBounds;
	float _targetElevation;
	float _tumbleSpeed;
	float _zoomSpeed;
	float _trackSpeed;
	float _targetDistance;
	float _zoom;
	MDLStereoscopicCamera* _camera;
	 _dragPoint;
	unsigned long long _mode;
	 _viewSize;
	 _trackVector;

}

@property (nonatomic,copy) MDLStereoscopicCamera * camera;              //@synthesize camera=_camera - In the implementation block
@property (assign,nonatomic)  clickPoint; 
@property (assign,nonatomic)  dragPoint;                                //@synthesize dragPoint=_dragPoint - In the implementation block
@property (assign,nonatomic)  trackVector;                              //@synthesize trackVector=_trackVector - In the implementation block
@property (assign,nonatomic) unsigned long long mode;                   //@synthesize mode=_mode - In the implementation block
@property (assign,nonatomic) float tumbleSpeed;                         //@synthesize tumbleSpeed=_tumbleSpeed - In the implementation block
@property (assign,nonatomic) float zoomSpeed;                           //@synthesize zoomSpeed=_zoomSpeed - In the implementation block
@property (assign,nonatomic) float trackSpeed;                          //@synthesize trackSpeed=_trackSpeed - In the implementation block
@property (assign,nonatomic)  targetPosition; 
@property (assign,nonatomic) float targetDistance;                      //@synthesize targetDistance=_targetDistance - In the implementation block
@property (assign,nonatomic)  position; 
@property (assign,nonatomic) MDLAABBRef framingBounds; 
@property (assign,nonatomic)  viewSize;                                 //@synthesize viewSize=_viewSize - In the implementation block
@property (assign,nonatomic) float zoom;                                //@synthesize zoom=_zoom - In the implementation block
-(MDLStereoscopicCamera *)camera;
-(void)setZoom:(float)arg1 ;
-()position;
-(float)zoom;
-(unsigned long long)mode;
-(void)update:(float)arg1 ;
-()viewSize;
-(id)init;
-(void)setMode:(unsigned long long)arg1 ;
-(void)setCamera:(MDLStereoscopicCamera *)arg1 ;
-(void)setViewSize:;
-(void)setPosition:;
-()targetPosition;
-(void)setTargetPosition:;
-(void)frameBounds;
-(void)frameObject;
-(void)setFramingBounds:(MDLAABBRef)arg1 ;
-(MDLAABBRef)framingBounds;
-(void)setClickPoint:;
-()clickPoint;
-(void)mouseMotionX:(float)arg1 Y:(float)arg2 ;
-()dragPoint;
-(void)setDragPoint:;
-()trackVector;
-(void)setTrackVector:;
-(float)tumbleSpeed;
-(void)setTumbleSpeed:(float)arg1 ;
-(float)zoomSpeed;
-(void)setZoomSpeed:(float)arg1 ;
-(float)trackSpeed;
-(void)setTrackSpeed:(float)arg1 ;
-(float)targetDistance;
-(void)setTargetDistance:(float)arg1 ;
@end

