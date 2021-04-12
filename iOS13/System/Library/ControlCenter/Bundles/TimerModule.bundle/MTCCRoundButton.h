/*
* Generated on Monday, March 1, 2021 at 2:33:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/ControlCenter/Bundles/TimerModule.bundle/TimerModule
*/

#import <TimerModule/TimerModule-Structs.h>
#import <UIKitCore/UIControl.h>

@class UIView, UIVisualEffectView, UILabel, NSString;

@interface MTCCRoundButton : UIControl {

	UIView* _containerView;
	UIVisualEffectView* _backgroundView;
	UIView* _normalStateBackgroundView;
	UIView* _selectedStateBackgroundView;
	UIView* _highlightView;
	UILabel* _titleLabel;

}

@property (nonatomic,retain) UIVisualEffectView * backgroundView;               //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,retain) UIView * normalStateBackgroundView;                //@synthesize normalStateBackgroundView=_normalStateBackgroundView - In the implementation block
@property (nonatomic,retain) UIView * selectedStateBackgroundView;              //@synthesize selectedStateBackgroundView=_selectedStateBackgroundView - In the implementation block
@property (nonatomic,retain) UIView * highlightView;                            //@synthesize highlightView=_highlightView - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                              //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,retain) UIView * containerView;                            //@synthesize containerView=_containerView - In the implementation block
-(id)init;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(CGSize)intrinsicContentSize;
-(UILabel *)titleLabel;
-(UIView *)containerView;
-(void)setContainerView:(UIView *)arg1 ;
-(UIVisualEffectView *)backgroundView;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(UIView *)highlightView;
-(void)setBackgroundView:(UIVisualEffectView *)arg1 ;
-(void)setHighlightView:(UIView *)arg1 ;
-(void)_updateCornerRadius;
-(void)_updateForStateChange;
-(UIView *)normalStateBackgroundView;
-(void)setNormalStateBackgroundView:(UIView *)arg1 ;
-(UIView *)selectedStateBackgroundView;
-(void)setSelectedStateBackgroundView:(UIView *)arg1 ;
-(void)_touchDown:(id)arg1 ;
-(void)_touchUpInside:(id)arg1 ;
-(void)_touchUpOutside:(id)arg1 ;
-(void)_dragEnter:(id)arg1 ;
-(void)_dragExit:(id)arg1 ;
-(void)handleContentSizeChange:(id)arg1 ;
@end

