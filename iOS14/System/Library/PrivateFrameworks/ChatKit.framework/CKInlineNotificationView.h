/*
* Generated on Thursday, January 14, 2021 at 2:21:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UIView.h>

@protocol CKInlineNotificationViewDelegate;
@class UIView, UIVisualEffectView;

@interface CKInlineNotificationView : UIView {

	BOOL _visible;
	BOOL _animatingVisibility;
	id<CKInlineNotificationViewDelegate> _delegate;
	UIView* _clippingView;
	UIView* _containerView;
	UIVisualEffectView* _backdropView;
	UIView* _bottomLineView;

}

@property (nonatomic,readonly) BOOL _shouldSuppressLayout; 
@property (nonatomic,readonly) UIView * contentView; 
@property (nonatomic,retain) UIView * clippingView;                                             //@synthesize clippingView=_clippingView - In the implementation block
@property (nonatomic,retain) UIView * containerView;                                            //@synthesize containerView=_containerView - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * backdropView;                                 //@synthesize backdropView=_backdropView - In the implementation block
@property (nonatomic,retain) UIView * bottomLineView;                                           //@synthesize bottomLineView=_bottomLineView - In the implementation block
@property (assign,nonatomic) BOOL animatingVisibility;                                          //@synthesize animatingVisibility=_animatingVisibility - In the implementation block
@property (assign,nonatomic,__weak) id<CKInlineNotificationViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL visible; 
-(UIVisualEffectView *)backdropView;
-(void)setBackdropView:(UIVisualEffectView *)arg1 ;
-(void)setContainerView:(UIView *)arg1 ;
-(BOOL)animatingVisibility;
-(UIView *)bottomLineView;
-(void)setBottomLineView:(UIView *)arg1 ;
-(void)setVisible:(BOOL)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)setAnimatingVisibility:(BOOL)arg1 ;
-(BOOL)_shouldSuppressLayout;
-(void)_invalidateContentViewHeight;
-(id)initWithFrame:(CGRect)arg1 ;
-(id<CKInlineNotificationViewDelegate>)delegate;
-(void)setVisible:(BOOL)arg1 ;
-(BOOL)visible;
-(UIView *)clippingView;
-(void)setDelegate:(id<CKInlineNotificationViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(UIView *)containerView;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(CGSize)contentViewSizeThatFits:(CGSize)arg1 ;
-(UIView *)contentView;
-(void)setClippingView:(UIView *)arg1 ;
-(void)dealloc;
@end

