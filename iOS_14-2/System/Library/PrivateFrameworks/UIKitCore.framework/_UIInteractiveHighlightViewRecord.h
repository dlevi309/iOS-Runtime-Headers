/*
* Generated on Thursday, January 14, 2021 at 2:20:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(UIVisualEffectView *)effectView;
-(UIView *)superview;
-(void)setView:(UIView *)arg1 ;
-(UIView *)view;
-(void)setEffectView:(UIVisualEffectView *)arg1 ;
-(void)setSuperview:(UIView *)arg1 ;
-(_UIPortalView *)portalView;
-(void)setPortalView:(_UIPortalView *)arg1 ;
-(NSHashTable *)interactiveHighlightEffects;
-(void)setInteractiveHighlightEffects:(NSHashTable *)arg1 ;
@end

