/*
* Generated on Monday, March 1, 2021 at 2:33:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/Silex-Structs.h>
#import <UIKitCore/UIView.h>

@protocol SXFullscreenNavigationBarViewDelegate;
@class UIVisualEffectView, UIButton;

@interface SXFullscreenNavigationBarView : UIView {

	BOOL _expanded;
	id<SXFullscreenNavigationBarViewDelegate> _delegate;
	UIVisualEffectView* _backgroundView;
	UIButton* _button;

}

@property (nonatomic,readonly) UIVisualEffectView * backgroundView;                                  //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,readonly) UIButton * button;                                                    //@synthesize button=_button - In the implementation block
@property (assign,nonatomic,__weak) id<SXFullscreenNavigationBarViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL expanded;                                                        //@synthesize expanded=_expanded - In the implementation block
-(id)init;
-(id<SXFullscreenNavigationBarViewDelegate>)delegate;
-(void)setDelegate:(id<SXFullscreenNavigationBarViewDelegate>)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(UIButton *)button;
-(UIVisualEffectView *)backgroundView;
-(void)layoutSubviews;
-(void)didMoveToSuperview;
-(BOOL)expanded;
-(void)doneButtonPressed:(id)arg1 ;
-(void)createBackgroundView;
-(void)updateFrameAnimated:(BOOL)arg1 ;
-(void)createDoneButton;
-(void)setExpanded:(BOOL)arg1 animated:(BOOL)arg2 ;
@end

