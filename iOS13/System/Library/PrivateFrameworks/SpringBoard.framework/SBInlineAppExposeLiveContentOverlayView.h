/*
* Generated on Monday, March 1, 2021 at 2:35:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/SBSwitcherLiveContentOverlay.h>

@class SBDeviceApplicationSceneViewController, SBSceneViewStatusBarAssertion, NSString, UIView;

@interface SBInlineAppExposeLiveContentOverlayView : NSObject <SBSwitcherLiveContentOverlay> {

	BOOL _transitioning;
	SBDeviceApplicationSceneViewController* _deviceApplicationSceneViewController;
	SBSceneViewStatusBarAssertion* _statusBarAssertion;

}

@property (nonatomic,readonly) SBDeviceApplicationSceneViewController * deviceApplicationSceneViewController;              //@synthesize deviceApplicationSceneViewController=_deviceApplicationSceneViewController - In the implementation block
@property (nonatomic,readonly) SBSceneViewStatusBarAssertion * statusBarAssertion;                                         //@synthesize statusBarAssertion=_statusBarAssertion - In the implementation block
@property (assign,getter=isTransitioning,nonatomic) BOOL transitioning;                                                    //@synthesize transitioning=_transitioning - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIView * contentOverlayView; 
-(void)dealloc;
-(void)setTransitioning:(BOOL)arg1 ;
-(BOOL)isTransitioning;
-(UIView *)contentOverlayView;
-(SBSceneViewStatusBarAssertion *)statusBarAssertion;
-(void)noteKeyboardFocusDidChangeToSceneID:(id)arg1 ;
-(long long)rasterizationStyle;
-(void)disableAsynchronousRenderingForNextCommit;
-(void)setUsesBrightSceneViewBackgroundMaterial:(BOOL)arg1 ;
-(void)setStatusBarHidden:(BOOL)arg1 nubViewHidden:(BOOL)arg2 animator:(/*^block*/id)arg3 ;
-(void)setHomeGrabberHidden:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setRasterizationStyle:(long long)arg1 withMinificationFilterEnabled:(BOOL)arg2 ;
-(SBDeviceApplicationSceneViewController *)deviceApplicationSceneViewController;
-(id)initWithDeviceApplicationSceneViewController:(id)arg1 ;
@end

