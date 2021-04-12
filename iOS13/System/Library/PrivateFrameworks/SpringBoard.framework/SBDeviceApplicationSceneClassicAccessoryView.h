/*
* Generated on Monday, March 1, 2021 at 2:35:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/BSInvalidatable.h>

@protocol SBDeviceApplicationSceneClassicAccessoryViewDelegate;
@class SBDeviceApplicationSceneHandle, UIView, UIButton, SBOrientationTransformWrapperView, SBSceneHandleBlockObserver, UIApplicationSceneClientSettingsDiffInspector, UIApplicationSceneSettingsDiffInspector, NSLayoutConstraint, NSString;

@interface SBDeviceApplicationSceneClassicAccessoryView : UIView <BSInvalidatable> {

	SBDeviceApplicationSceneHandle* _sceneHandle;
	id<SBDeviceApplicationSceneClassicAccessoryViewDelegate> _delegate;
	UIView* _zoomButtonWrapperView;
	UIButton* _zoomButton;
	long long _buttonOrientation;
	SBOrientationTransformWrapperView* _transformWrapperView;
	SBSceneHandleBlockObserver* _sceneHandleObserver;
	UIApplicationSceneClientSettingsDiffInspector* _clientSettingsInspector;
	UIApplicationSceneSettingsDiffInspector* _sceneSettingsInspector;
	NSLayoutConstraint* _zoomButtonHorizontalConstraint;
	NSLayoutConstraint* _zoomButtonVerticalConstraint;
	NSLayoutConstraint* _zoomButtonWidthConstraint;
	NSLayoutConstraint* _zoomButtonHeightConstraint;

}

@property (nonatomic,retain,readonly) SBDeviceApplicationSceneHandle * sceneHandle;                                 //@synthesize sceneHandle=_sceneHandle - In the implementation block
@property (assign,nonatomic) long long buttonOrientation;                                                           //@synthesize buttonOrientation=_buttonOrientation - In the implementation block
@property (assign,nonatomic,__weak) id<SBDeviceApplicationSceneClassicAccessoryViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)invalidate;
-(id<SBDeviceApplicationSceneClassicAccessoryViewDelegate>)delegate;
-(void)setDelegate:(id<SBDeviceApplicationSceneClassicAccessoryViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(BOOL)_isZoomed;
-(SBDeviceApplicationSceneHandle *)sceneHandle;
-(void)_changeZoom:(id)arg1 ;
-(void)_updateZoomButton;
-(void)_setupPositioningAndRotationForInterfaceOrientation:(long long)arg1 offscreen:(BOOL)arg2 ;
-(void)_updateZoomButtonVisibilityAnimated:(BOOL)arg1 ;
-(void)_sceneHandleDidUpdateClientSettingsWithDiff:(id)arg1 transitionContext:(id)arg2 ;
-(void)_sceneHandleDidUpdateSettingsWithDiff:(id)arg1 previousSettings:(id)arg2 ;
-(BOOL)_zoomButtonShouldBeVisible;
-(void)_updateOrientationFrom:(long long)arg1 toOrientation:(long long)arg2 animationSettings:(id)arg3 ;
-(id)initWithFrame:(CGRect)arg1 sceneHandle:(id)arg2 ;
-(long long)buttonOrientation;
-(void)setButtonOrientation:(long long)arg1 ;
@end

