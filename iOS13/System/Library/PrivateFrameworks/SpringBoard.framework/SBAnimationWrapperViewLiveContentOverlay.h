/*
* Generated on Monday, March 1, 2021 at 2:35:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/SBSwitcherLiveContentOverlay.h>

@class SBSceneLayoutAnimationWrapperView, NSString, UIView;

@interface SBAnimationWrapperViewLiveContentOverlay : NSObject <SBSwitcherLiveContentOverlay> {

	long long _containerOrientation;
	SBSceneLayoutAnimationWrapperView* _animationWrapperView;

}

@property (nonatomic,readonly) SBSceneLayoutAnimationWrapperView * animationWrapperView;              //@synthesize animationWrapperView=_animationWrapperView - In the implementation block
@property (assign,nonatomic) long long containerOrientation;                                          //@synthesize containerOrientation=_containerOrientation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIView * contentOverlayView; 
-(UIView *)contentOverlayView;
-(void)setContainerOrientation:(long long)arg1 ;
-(long long)containerOrientation;
-(void)noteKeyboardFocusDidChangeToSceneID:(id)arg1 ;
-(long long)rasterizationStyle;
-(void)disableAsynchronousRenderingForNextCommit;
-(void)setUsesBrightSceneViewBackgroundMaterial:(BOOL)arg1 ;
-(void)setStatusBarHidden:(BOOL)arg1 nubViewHidden:(BOOL)arg2 animator:(/*^block*/id)arg3 ;
-(void)setHomeGrabberHidden:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setRasterizationStyle:(long long)arg1 withMinificationFilterEnabled:(BOOL)arg2 ;
-(id)initWithAnimationWrapperView:(id)arg1 ;
-(SBSceneLayoutAnimationWrapperView *)animationWrapperView;
@end

