/*
* Generated on Thursday, January 14, 2021 at 2:23:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/

#import <UIKitCore/UIView.h>

@protocol AVTToolBarDelegate;
@class NSArray, UIView, UIVisualEffectView;

@interface AVTToolBar : UIView {

	BOOL _isAnimating;
	id<AVTToolBarDelegate> _delegate;
	NSArray* _buttons;
	UIView* _border;
	UIVisualEffectView* _visualEffectView;

}

@property (nonatomic,retain) NSArray * buttons;                                   //@synthesize buttons=_buttons - In the implementation block
@property (nonatomic,retain) UIView * border;                                     //@synthesize border=_border - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * visualEffectView;               //@synthesize visualEffectView=_visualEffectView - In the implementation block
@property (assign,nonatomic,__weak) id<AVTToolBarDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL isAnimating;                                    //@synthesize isAnimating=_isAnimating - In the implementation block
+(double)defaultToolBarHeight;
-(UIView *)border;
-(id<AVTToolBarDelegate>)delegate;
-(NSArray *)buttons;
-(UIVisualEffectView *)visualEffectView;
-(void)setIsAnimating:(BOOL)arg1 ;
-(void)buttonPressed:(id)arg1 ;
-(void)setupView;
-(void)setDelegate:(id<AVTToolBarDelegate>)arg1 ;
-(void)layoutSubviews;
-(id)buttonWithTitle:(id)arg1 isDefault:(BOOL)arg2 ;
-(double)borderWidth;
-(void)setupBorder;
-(id)initWithButtons:(id)arg1 ;
-(void)setEnabled:(BOOL)arg1 forButtonAtIndex:(unsigned long long)arg2 ;
-(void)setBorder:(UIView *)arg1 ;
-(void)setVisualEffectView:(UIVisualEffectView *)arg1 ;
-(BOOL)isAnimating;
-(void)setButtons:(NSArray *)arg1 ;
@end

