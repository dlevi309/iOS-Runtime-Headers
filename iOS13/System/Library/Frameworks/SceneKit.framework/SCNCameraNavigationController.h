/*
* Generated on Monday, March 1, 2021 at 2:32:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
*/

#import <SceneKit/SceneKit-Structs.h>
#import <libobjc.A.dylib/SCNEventHandler.h>
#import <libobjc.A.dylib/SCNCameraControllerDelegate.h>

@protocol SCNCameraNavigationControllerDelegate;
@class SCNNode, SCNView, UIGestureRecognizer, SCNCameraController, NSString;

@interface SCNCameraNavigationController : NSObject <SCNEventHandler, SCNCameraControllerDelegate> {

	UIGestureRecognizer* _pressGesture;
	UIGestureRecognizer* _tapGesture;
	UIGestureRecognizer* _pinchGesture;
	UIGestureRecognizer* _panGesture;
	UIGestureRecognizer* _rotateGesture;
	BOOL _isDraggingWithOneFinger;
	long long _lastGestureFingerCount;
	long long _browseMode;
	float _cameraOriginalFieldOfView;
	float _fieldOfViewZoomFactor;
	float _originalOrthoScale;
	float _orthographicZoomFactor;
	BOOL _enabled;
	BOOL _translationAllowed;
	BOOL _didEverFocusNode;
	BOOL _isSceneBoundingSphereComputed;
	BOOL _cameraTargetComputed;
	BOOL _pinchShouldMoveCamera;
	BOOL _shouldUpdateTarget;
	BOOL _shouldIgnoreMomentumEvents;
	BOOL _isOrbiting;
	BOOL _recordingPointOfViewEvents;
	BOOL _mouseDown;
	SCD_Union_SC137 _sceneBoundingSphere;
	 _translationOrigin;
	float _initialZoom;
	 _initialPointOfViewWorldPosition;
	double _lastKeyInputTime;
	double _flyModeVelocity;
	double _panSensitivity;
	double _truckSensitivity;
	double _rotationSensitivity;
	CGPoint _initialInputLocation;
	CGPoint _lastInputLocation;
	CGPoint _accumulatedDrag;
	double _lastRotationAngle;
	os_unfair_lock_s _drawAtTimeLock;
	SCD_Struct_SC138 _stickyAxis;
	SCD_Struct_SC139 _target;
	SCD_Struct_SC140 _inertia;
	SCD_Struct_SC148* _keyboard;
	SCD_Struct_SC139 _scrollWheelModifiers;
	BOOL _enableFreeCamera;
	BOOL _autoSwitchToFreeCamera;
	SCNCameraController* _cameraController;
	id<SCNCameraNavigationControllerDelegate> _delegate;
	SCNView* _view;
	SCNNode* _freeViewCameraNode;

}

@property (nonatomic,readonly) SCNCameraController * cameraController;                        //@synthesize cameraController=_cameraController - In the implementation block
@property (assign,nonatomic) id<SCNCameraNavigationControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned long long stickyAxis; 
@property (assign,nonatomic) SCNVector3 cameraTarget; 
@property (assign,nonatomic) BOOL gimbalLockMode; 
@property (assign,nonatomic) BOOL enableInertia; 
@property (assign,nonatomic) double friction; 
@property (assign,nonatomic) BOOL automaticCameraTarget; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL autoSwitchToFreeCamera;                                     //@synthesize autoSwitchToFreeCamera=_autoSwitchToFreeCamera - In the implementation block
@property (assign,nonatomic) BOOL allowsTranslation; 
@property (assign,nonatomic) double flyModeVelocity;                                          //@synthesize flyModeVelocity=_flyModeVelocity - In the implementation block
@property (assign,nonatomic) double panSensitivity;                                           //@synthesize panSensitivity=_panSensitivity - In the implementation block
@property (assign,nonatomic) double truckSensitivity;                                         //@synthesize truckSensitivity=_truckSensitivity - In the implementation block
@property (assign,nonatomic) double rotationSensitivity;                                      //@synthesize rotationSensitivity=_rotationSensitivity - In the implementation block
@property (assign,nonatomic) BOOL enabled; 
@property (assign,nonatomic) BOOL enableFreeCamera;                                           //@synthesize enableFreeCamera=_enableFreeCamera - In the implementation block
@property (nonatomic,readonly) SCNNode * freeCamera;                                          //@synthesize freeViewCameraNode=_freeViewCameraNode - In the implementation block
@property (assign,nonatomic) SCNView * view;                                                  //@synthesize view=_view - In the implementation block
-(void)dealloc;
-(BOOL)enabled;
-(void)setEnabled:(BOOL)arg1 ;
-(id<SCNCameraNavigationControllerDelegate>)delegate;
-(void)setDelegate:(id<SCNCameraNavigationControllerDelegate>)arg1 ;
-(SCNView *)view;
-(void)setView:(SCNView *)arg1 ;
-(id)gestureRecognizers;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(double)friction;
-(void)setFriction:(double)arg1 ;
-(id)initWithView:(id)arg1 ;
-(void)_handlePan:(id)arg1 ;
-(double)zoomFactor;
-(void)_handlePinch:(id)arg1 ;
-(void)setZoomFactor:(double)arg1 ;
-(SCNCameraController *)cameraController;
-(float)_targetDistance;
-(id)pointOfView;
-(void)cameraInertiaWillStartForController:(id)arg1 ;
-(void)cameraInertiaDidEndForController:(id)arg1 ;
-(1)worldFront;
-(void)sceneWillChange;
-(void)sceneDidChange;
-(void)viewWillDrawAtTime:(double)arg1 ;
-(void)viewDidDrawAtTime:(double)arg1 ;
-(void)cameraWillChange;
-(void)cameraDidChange;
-(BOOL)wantsRedraw;
-(void)setEnableFreeCamera:(BOOL)arg1 ;
-(SCNNode *)freeCamera;
-(BOOL)enableFreeCamera;
-(BOOL)autoSwitchToFreeCamera;
-(void)setAutoSwitchToFreeCamera:(BOOL)arg1 ;
-(void)activateFreeCamera;
-(void)invalidateCameraTarget;
-(void)setAutomaticCameraTarget:(BOOL)arg1 ;
-(void)_switchToFreeViewCamera;
-(void)setCameraTarget:(SCNVector3)arg1 ;
-(void)_resetFreeViewCamera;
-(void)_prepareFreeViewCamera;
-(BOOL)_freeCameraActivated;
-(void)_installFreeViewCameraIfNeeded;
-(SCNVector3)cameraAutomaticTargetPoint;
-(SCNVector3)cameraTarget;
-(void)zoomBy:(float)arg1 animate:(BOOL)arg2 ;
-(float)_translationCoef;
-(void)focusNode:(id)arg1 ;
-(void)_handlePress:(id)arg1 ;
-(void)_handleRotation:(id)arg1 ;
-(void)_handleDoubleTap:(id)arg1 ;
-(void)beginGesture:(id)arg1 ;
-(void)pinchWithGestureRecognizer:(id)arg1 ;
-(void)panWithGestureRecognizer:(id)arg1 ;
-(void)rotateWithGestureRecognizer:(id)arg1 ;
-(void)_startBrowsingIfNeeded:(CGPoint)arg1 ;
-(BOOL)allowsTranslation;
-(void)setAllowsTranslation:(BOOL)arg1 ;
-(BOOL)enableInertia;
-(void)setEnableInertia:(BOOL)arg1 ;
-(BOOL)gimbalLockMode;
-(void)setGimbalLockMode:(BOOL)arg1 ;
-(SCNVector3)gimbalLockVector;
-(void)setGimbalLockVector:(SCNVector3)arg1 ;
-(BOOL)automaticCameraTarget;
-(unsigned long long)stickyAxis;
-(void)setStickyAxis:(unsigned long long)arg1 ;
-(void)rotateOf:(double)arg1 ;
-(void)zoomBy:(float)arg1 ;
-(void)translateByX:(float)arg1 Y:(float)arg2 Z:(float)arg3 ;
-(void)_computeAutomaticTargetPointIfNeeded;
-(void)focusNodes:(id)arg1 ;
-(BOOL)_pointOfViewUsesOrthographicProjection;
-(float)_pointOfViewOrthographicScale;
-(float)_orthographicScaleForZoomFactor:(float)arg1 ;
-(/*function pointer*/void*)_sceneBoundingSphere;
-(float)_orthographicZoomFactorForProposedZoomFactor:(float)arg1 ;
-(void)_setPointOfViewOrthographicScale:(float)arg1 ;
-(float)_cappedTranslationDelta:(float)arg1 ;
-(void)__didChangePointOfView;
-(2)_defaultTargetForScene:(id)arg1 ;
-(void)_stopInertia;
-(void)_setupUpVector;
-(void)_willBeginInteraction;
-(void)_computeTranslationOrigin3DFromPoint:(CGPoint)arg1 ;
-(void)__willChangePointOfView;
-(double)_modeSensitivity;
-(void)_translateToViewPoint:(CGPoint)arg1 ;
-(double)panSensitivity;
-(double)truckSensitivity;
-(double)rotationSensitivity;
-(double)flyModeVelocity;
-(void)setFlyModeVelocity:(double)arg1 ;
-(void)setPanSensitivity:(double)arg1 ;
-(void)setTruckSensitivity:(double)arg1 ;
-(void)setRotationSensitivity:(double)arg1 ;
-(unsigned long long)_effectiveStickyAxis;
-(BOOL)_computeBoundingSphereOmittingFloorsForNode:(C3DNodeRef)arg1 sphere:(C3DSphereRef)arg2 ;
-(void)_computeStickyAxisIfNeeded:(CGPoint)arg1 ;
@end

