/*
* Generated on Thursday, January 14, 2021 at 2:25:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <libobjc.A.dylib/BSInvalidatable.h>
#import <libobjc.A.dylib/SBDeviceApplicationSceneHandleObserver.h>
#import <libobjc.A.dylib/SBSceneViewPresentationConfiguring.h>
#import <libobjc.A.dylib/SBSwitcherLiveContentOverlay.h>

@class SBOrientationTransformWrapperView, SBDeviceApplicationSceneHandle, UIApplicationSceneSettingsDiffInspector, SBDeviceApplicationSceneView, NSString, UIView;

@interface SBDeviceApplicationSceneViewLiveContentOverlay : NSObject <BSInvalidatable, SBDeviceApplicationSceneHandleObserver, SBSceneViewPresentationConfiguring, SBSwitcherLiveContentOverlay> {

	SBOrientationTransformWrapperView* _transformWrapperView;
	SBDeviceApplicationSceneHandle* _sceneHandle;
	UIApplicationSceneSettingsDiffInspector* _sceneSettingsInspector;
	SBDeviceApplicationSceneView* _sceneView;
	long long _containerOrientation;

}

@property (assign,nonatomic) long long containerOrientation;              //@synthesize containerOrientation=_containerOrientation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIView * contentOverlayView; 
-(long long)containerOrientation;
-(void)sceneHandle:(id)arg1 didUpdateSettingsWithDiff:(id)arg2 previousSettings:(id)arg3 ;
-(long long)sceneViewPresentationPriority:(id)arg1 ;
-(void)setContainerOrientation:(long long)arg1 ;
-(id)sceneViewPresentationIdentifier:(id)arg1 ;
-(void)disableAsynchronousRenderingForNextCommit;
-(void)setUsesBrightSceneViewBackgroundMaterial:(BOOL)arg1 ;
-(void)setRasterizationStyle:(long long)arg1 withMinificationFilterEnabled:(BOOL)arg2 ;
-(void)noteKeyboardFocusDidChangeToSceneID:(id)arg1 ;
-(void)setHomeGrabberHidden:(BOOL)arg1 animated:(BOOL)arg2 ;
-(long long)rasterizationStyle;
-(UIView *)contentOverlayView;
-(void)invalidate;
-(void)setStatusBarHidden:(BOOL)arg1 nubViewHidden:(BOOL)arg2 animator:(/*^block*/id)arg3 ;
-(id)initWithSceneHandle:(id)arg1 referenceSize:(CGSize)arg2 containerOrientation:(long long)arg3 ;
@end

