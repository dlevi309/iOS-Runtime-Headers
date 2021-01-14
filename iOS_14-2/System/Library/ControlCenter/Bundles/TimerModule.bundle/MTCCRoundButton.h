/*
* Generated on Thursday, January 14, 2021 at 2:29:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(UILabel *)titleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setContainerView:(UIView *)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)setHighlightView:(UIView *)arg1 ;
-(id)init;
-(UIView *)highlightView;
-(void)setBackgroundView:(UIVisualEffectView *)arg1 ;
-(void)_updateCornerRadius;
-(UIVisualEffectView *)backgroundView;
-(UIView *)selectedStateBackgroundView;
-(void)setTitle:(NSString *)arg1 ;
-(void)setSelectedStateBackgroundView:(UIView *)arg1 ;
-(UIView *)normalStateBackgroundView;
-(void)_touchUpOutside:(id)arg1 ;
-(void)_dragExit:(id)arg1 ;
-(void)_touchDown:(id)arg1 ;
-(void)layoutSubviews;
-(UIView *)containerView;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setNormalStateBackgroundView:(UIView *)arg1 ;
-(void)_updateForStateChange;
-(void)handleContentSizeChange:(id)arg1 ;
-(void)_touchUpInside:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(void)_dragEnter:(id)arg1 ;
-(NSString *)title;
-(void)dealloc;
@end

