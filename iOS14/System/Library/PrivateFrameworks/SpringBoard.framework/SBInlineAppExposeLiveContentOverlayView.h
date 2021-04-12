/*
* Generated on Thursday, January 14, 2021 at 2:25:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/SBSwitcherLiveContentOverlay.h>

@class SBDeviceApplicationSceneViewController, SBSceneViewStatusBarAssertion, UIView, NSString;

@interface SBInlineAppExposeLiveContentOverlayView : NSObject <SBSwitcherLiveContentOverlay> {

	BOOL _transitioning;
	SBDeviceApplicationSceneViewController* _deviceApplicationSceneViewController;
	SBSceneViewStatusBarAssertion* _statusBarAssertion;

}

@property (nonatomic,readonly) SBDeviceApplicationSceneViewController * deviceApplicationSceneViewController;              //@synthesize deviceApplicationSceneViewController=_deviceApplicationSceneViewController - In the implementation block
@property (nonatomic,readonly) SBSceneViewStatusBarAssertion * statusBarAssertion;                                         //@synthesize statusBarAssertion=_statusBarAssertion - In the implementation block
@property (assign,getter=isTransitioning,nonatomic) BOOL transitioning;                                                    //@synthesize transitioning=_transitioning - In the implementation block
@property (nonatomic,readonly) UIView * contentOverlayView; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(SBSceneViewStatusBarAssertion *)statusBarAssertion;
-(void)disableAsynchronousRenderingForNextCommit;
-(void)setUsesBrightSceneViewBackgroundMaterial:(BOOL)arg1 ;
-(void)setRasterizationStyle:(long long)arg1 withMinificationFilterEnabled:(BOOL)arg2 ;
-(void)noteKeyboardFocusDidChangeToSceneID:(id)arg1 ;
-(void)setHomeGrabberHidden:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setTransitioning:(BOOL)arg1 ;
-(long long)rasterizationStyle;
-(UIView *)contentOverlayView;
-(BOOL)isTransitioning;
-(void)setStatusBarHidden:(BOOL)arg1 nubViewHidden:(BOOL)arg2 animator:(/*^block*/id)arg3 ;
-(void)dealloc;
-(SBDeviceApplicationSceneViewController *)deviceApplicationSceneViewController;
-(id)initWithDeviceApplicationSceneViewController:(id)arg1 ;
@end

