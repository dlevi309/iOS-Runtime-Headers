/*
* Generated on Monday, March 1, 2021 at 2:30:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class UIView, UIVisualEffectView, _UIPortalView, NSHashTable;

@interface _UIInteractiveHighlightViewRecord : NSObject {

	UIView* _view;
	UIView* _superview;
	UIVisualEffectView* _effectView;
	_UIPortalView* _portalView;
	NSHashTable* _interactiveHighlightEffects;

}

@property (assign,nonatomic,__weak) UIView * view;                                   //@synthesize view=_view - In the implementation block
@property (assign,nonatomic,__weak) UIView * superview;                              //@synthesize superview=_superview - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * effectView;                        //@synthesize effectView=_effectView - In the implementation block
@property (nonatomic,retain) _UIPortalView * portalView;                             //@synthesize portalView=_portalView - In the implementation block
@property (nonatomic,retain) NSHashTable * interactiveHighlightEffects;              //@synthesize interactiveHighlightEffects=_interactiveHighlightEffects - In the implementation block
-(UIView *)superview;
-(UIView *)view;
-(void)setView:(UIView *)arg1 ;
-(UIVisualEffectView *)effectView;
-(_UIPortalView *)portalView;
-(void)setPortalView:(_UIPortalView *)arg1 ;
-(void)setSuperview:(UIView *)arg1 ;
-(void)setEffectView:(UIVisualEffectView *)arg1 ;
-(NSHashTable *)interactiveHighlightEffects;
-(void)setInteractiveHighlightEffects:(NSHashTable *)arg1 ;
@end

