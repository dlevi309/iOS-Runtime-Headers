/*
* Generated on Thursday, January 14, 2021 at 2:24:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(UIButton *)button;
-(void)createBackgroundView;
-(id)init;
-(id<SXFullscreenNavigationBarViewDelegate>)delegate;
-(BOOL)expanded;
-(UIVisualEffectView *)backgroundView;
-(void)doneButtonPressed:(id)arg1 ;
-(void)didMoveToSuperview;
-(void)setDelegate:(id<SXFullscreenNavigationBarViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(void)setFrame:(CGRect)arg1 ;
-(void)setExpanded:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)updateFrameAnimated:(BOOL)arg1 ;
-(void)createDoneButton;
@end

