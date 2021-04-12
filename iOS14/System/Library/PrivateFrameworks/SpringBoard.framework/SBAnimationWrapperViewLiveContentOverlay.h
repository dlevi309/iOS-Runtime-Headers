/*
* Generated on Thursday, January 14, 2021 at 2:25:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/SBSwitcherLiveContentOverlay.h>

@class SBSceneLayoutAnimationWrapperView, UIView, NSString;

@interface SBAnimationWrapperViewLiveContentOverlay : NSObject <SBSwitcherLiveContentOverlay> {

	long long _containerOrientation;
	SBSceneLayoutAnimationWrapperView* _animationWrapperView;

}

@property (nonatomic,readonly) SBSceneLayoutAnimationWrapperView * animationWrapperView;              //@synthesize animationWrapperView=_animationWrapperView - In the implementation block
@property (assign,nonatomic) long long containerOrientation;                                          //@synthesize containerOrientation=_containerOrientation - In the implementation block
@property (nonatomic,readonly) UIView * contentOverlayView; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)containerOrientation;
-(void)setContainerOrientation:(long long)arg1 ;
-(void)disableAsynchronousRenderingForNextCommit;
-(void)setUsesBrightSceneViewBackgroundMaterial:(BOOL)arg1 ;
-(void)setRasterizationStyle:(long long)arg1 withMinificationFilterEnabled:(BOOL)arg2 ;
-(void)noteKeyboardFocusDidChangeToSceneID:(id)arg1 ;
-(id)initWithAnimationWrapperView:(id)arg1 ;
-(void)setHomeGrabberHidden:(BOOL)arg1 animated:(BOOL)arg2 ;
-(long long)rasterizationStyle;
-(UIView *)contentOverlayView;
-(SBSceneLayoutAnimationWrapperView *)animationWrapperView;
-(void)setStatusBarHidden:(BOOL)arg1 nubViewHidden:(BOOL)arg2 animator:(/*^block*/id)arg3 ;
@end

