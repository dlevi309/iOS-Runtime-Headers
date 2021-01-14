/*
* Generated on Thursday, January 14, 2021 at 2:20:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class UIView, UIVisualEffectView, _UIInteractiveHighlightEnvironment, _UIPortalView;

@interface _UIInteractiveHighlightEffect : NSObject {

	UIView* _view;
	UIVisualEffectView* _effectView;
	_UIInteractiveHighlightEnvironment* _environment;
	UIView* _superview;
	_UIPortalView* _portalView;
	UIEdgeInsets _preferredContentInsets;

}

@property (assign,nonatomic,__weak) UIView * view;                                          //@synthesize view=_view - In the implementation block
@property (assign,nonatomic,__weak) UIVisualEffectView * effectView;                        //@synthesize effectView=_effectView - In the implementation block
@property (nonatomic,retain) _UIInteractiveHighlightEnvironment * environment;              //@synthesize environment=_environment - In the implementation block
@property (assign,nonatomic,__weak) UIView * superview;                                     //@synthesize superview=_superview - In the implementation block
@property (assign,nonatomic,__weak) _UIPortalView * portalView;                             //@synthesize portalView=_portalView - In the implementation block
@property (assign,nonatomic) UIEdgeInsets preferredContentInsets;                           //@synthesize preferredContentInsets=_preferredContentInsets - In the implementation block
-(void)setPreferredContentInsets:(UIEdgeInsets)arg1 ;
-(UIVisualEffectView *)effectView;
-(UIEdgeInsets)preferredContentInsets;
-(UIView *)superview;
-(void)setView:(UIView *)arg1 ;
-(UIView *)view;
-(void)setEffectView:(UIVisualEffectView *)arg1 ;
-(void)setSuperview:(UIView *)arg1 ;
-(void)setEnvironment:(_UIInteractiveHighlightEnvironment *)arg1 ;
-(_UIPortalView *)portalView;
-(_UIInteractiveHighlightEnvironment *)environment;
-(void)setPortalView:(_UIPortalView *)arg1 ;
-(void)finalizeEffect;
-(void)applyBackgroundEffectWithMagnitude:(double)arg1 interactive:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)dealloc;
@end

