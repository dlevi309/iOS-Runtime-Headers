/*
* Generated on Monday, March 1, 2021 at 2:35:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <UIKitCore/UIControl.h>

@class TVButtonContent, UIColor, IKViewElement, _UIFloatingContentView, UIView, _TVImageView, UILabel;

@interface TVButton : UIControl {

	TVButtonContent* _buttonContent;
	UIColor* _highlightColor;
	IKViewElement* _viewElement;
	/*^block*/id _selectActionHandler;
	/*^block*/id _playActionHandler;

}

@property (nonatomic,readonly) _UIFloatingContentView * floatingView; 
@property (nonatomic,readonly) UIView * overlayView; 
@property (nonatomic,readonly) long long backdropStyle; 
@property (nonatomic,readonly) BOOL blurEnabled; 
@property (nonatomic,readonly) TVButtonContent * buttonContent;                    //@synthesize buttonContent=_buttonContent - In the implementation block
@property (assign,getter=isDisabled,nonatomic) BOOL disabled; 
@property (assign,nonatomic) double focusSizeIncrease; 
@property (nonatomic,retain) _TVImageView * imageView; 
@property (nonatomic,retain) UILabel * textContentView; 
@property (nonatomic,retain) _TVImageView * accessoryView; 
@property (nonatomic,copy) UIColor * highlightColor;                               //@synthesize highlightColor=_highlightColor - In the implementation block
@property (nonatomic,retain) IKViewElement * viewElement;                          //@synthesize viewElement=_viewElement - In the implementation block
@property (nonatomic,copy) id selectActionHandler;                                 //@synthesize selectActionHandler=_selectActionHandler - In the implementation block
@property (nonatomic,copy) id playActionHandler;                                   //@synthesize playActionHandler=_playActionHandler - In the implementation block
+(id)_buttonContentWithFrame:(CGRect)arg1 blurEffectStyle:(long long)arg2 blurEnabled:(BOOL)arg3 ;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setGroupName:(id)arg1 ;
-(BOOL)isDisabled;
-(id)backgroundColor;
-(void)setBackgroundColor:(id)arg1 ;
-(void)setCornerRadius:(double)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(BOOL)canBecomeFocused;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(_TVImageView *)imageView;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setDisabled:(BOOL)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(void)setContentMotionRotation:(CGPoint)arg1 translation:(CGPoint)arg2 ;
-(void)setAccessoryView:(_TVImageView *)arg1 ;
-(_TVImageView *)accessoryView;
-(long long)backdropStyle;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(UIColor *)highlightColor;
-(void)setHighlightColor:(UIColor *)arg1 ;
-(void)setImageView:(_TVImageView *)arg1 ;
-(UIView *)overlayView;
-(IKViewElement *)viewElement;
-(void)setViewElement:(IKViewElement *)arg1 ;
-(_UIFloatingContentView *)floatingView;
-(UILabel *)textContentView;
-(id)initWithFrame:(CGRect)arg1 blurEffectStyle:(long long)arg2 blurEnabled:(BOOL)arg3 ;
-(void)_selectButtonAction:(id)arg1 ;
-(void)tv_setLayout:(id)arg1 ;
-(double)focusSizeIncrease;
-(void)setFocusSizeIncrease:(double)arg1 ;
-(void)_updateBackgroundColorForState:(unsigned long long)arg1 ;
-(void)setTextContentView:(UILabel *)arg1 ;
-(void)setImageTrailsTextContent:(BOOL)arg1 ;
-(BOOL)blurEnabled;
-(void)_setFocused:(BOOL)arg1 animationCoordinator:(id)arg2 ;
-(id)selectActionHandler;
-(id)playActionHandler;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 withAnimationCoordinator:(id)arg3 ;
-(void)_updateFocusStateWithCoordinator:(id)arg1 ;
-(void)updatePreferredFocusedViewStateForFocus:(BOOL)arg1 ;
-(void)_playButtonAction:(id)arg1 ;
-(TVButtonContent *)buttonContent;
-(void)setSelectActionHandler:(id)arg1 ;
-(void)setPlayActionHandler:(id)arg1 ;
@end

