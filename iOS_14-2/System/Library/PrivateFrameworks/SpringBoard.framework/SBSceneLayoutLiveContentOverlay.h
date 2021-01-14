/*
* Generated on Thursday, January 14, 2021 at 2:25:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/SBSwitcherLiveContentOverlay.h>

@class UIView, SBMainDisplaySceneLayoutViewController, SBWindowSelfHostWrapper, SBOrientationTransformWrapperView, SBFHomeGrabberSettings, NSMutableDictionary, NSString;

@interface SBSceneLayoutLiveContentOverlay : NSObject <SBSwitcherLiveContentOverlay> {

	BOOL _wantsMinificationFilter;
	BOOL _asynchronousRenderingTemporarilyDisabled;
	long long _containerOrientation;
	long long _rasterizationStyle;
	SBMainDisplaySceneLayoutViewController* _sceneLayoutViewController;
	SBWindowSelfHostWrapper* _sceneLayoutWindowHostWrapper;
	SBOrientationTransformWrapperView* _sceneLayoutOrientationWrapperView;
	SBFHomeGrabberSettings* _grabberSettings;
	NSMutableDictionary* _statusBarAssertions;

}

@property (nonatomic,__weak,readonly) SBMainDisplaySceneLayoutViewController * sceneLayoutViewController;              //@synthesize sceneLayoutViewController=_sceneLayoutViewController - In the implementation block
@property (nonatomic,readonly) SBWindowSelfHostWrapper * sceneLayoutWindowHostWrapper;                                 //@synthesize sceneLayoutWindowHostWrapper=_sceneLayoutWindowHostWrapper - In the implementation block
@property (nonatomic,readonly) SBOrientationTransformWrapperView * sceneLayoutOrientationWrapperView;                  //@synthesize sceneLayoutOrientationWrapperView=_sceneLayoutOrientationWrapperView - In the implementation block
@property (nonatomic,readonly) SBFHomeGrabberSettings * grabberSettings;                                               //@synthesize grabberSettings=_grabberSettings - In the implementation block
@property (assign,nonatomic) long long containerOrientation;                                                           //@synthesize containerOrientation=_containerOrientation - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * statusBarAssertions;                                                //@synthesize statusBarAssertions=_statusBarAssertions - In the implementation block
@property (nonatomic,readonly) long long rasterizationStyle;                                                           //@synthesize rasterizationStyle=_rasterizationStyle - In the implementation block
@property (nonatomic,readonly) BOOL wantsMinificationFilter;                                                           //@synthesize wantsMinificationFilter=_wantsMinificationFilter - In the implementation block
@property (nonatomic,readonly) BOOL asynchronousRenderingTemporarilyDisabled;                                          //@synthesize asynchronousRenderingTemporarilyDisabled=_asynchronousRenderingTemporarilyDisabled - In the implementation block
@property (nonatomic,readonly) UIView * contentOverlayView; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)handleHomeButtonLongPress;
-(void)_evaluateAsynchronousRenderingEnablement;
-(BOOL)handleHeadsetButtonPress:(BOOL)arg1 ;
-(BOOL)handleLockButtonPress;
-(long long)containerOrientation;
-(BOOL)handleVolumeDownButtonPress;
-(BOOL)handleHomeButtonDoublePress;
-(void)setContainerOrientation:(long long)arg1 ;
-(SBMainDisplaySceneLayoutViewController *)sceneLayoutViewController;
-(BOOL)handleVolumeUpButtonPress;
-(void)disableAsynchronousRenderingForNextCommit;
-(void)setUsesBrightSceneViewBackgroundMaterial:(BOOL)arg1 ;
-(void)setRasterizationStyle:(long long)arg1 withMinificationFilterEnabled:(BOOL)arg2 ;
-(BOOL)handleHomeButtonPress;
-(void)noteKeyboardFocusDidChangeToSceneID:(id)arg1 ;
-(SBOrientationTransformWrapperView *)sceneLayoutOrientationWrapperView;
-(void)setHomeGrabberHidden:(BOOL)arg1 animated:(BOOL)arg2 ;
-(SBWindowSelfHostWrapper *)sceneLayoutWindowHostWrapper;
-(long long)rasterizationStyle;
-(BOOL)wantsMinificationFilter;
-(UIView *)contentOverlayView;
-(void)setStatusBarAssertions:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)statusBarAssertions;
-(id)initWithSceneLayoutViewController:(id)arg1 ;
-(SBFHomeGrabberSettings *)grabberSettings;
-(id)_sceneHandleForHardwareButtonEvents;
-(void)setStatusBarHidden:(BOOL)arg1 nubViewHidden:(BOOL)arg2 animator:(/*^block*/id)arg3 ;
-(void)dealloc;
-(BOOL)asynchronousRenderingTemporarilyDisabled;
@end

