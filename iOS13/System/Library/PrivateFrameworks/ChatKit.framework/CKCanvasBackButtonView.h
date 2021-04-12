/*
* Generated on Monday, March 1, 2021 at 2:31:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UIControl.h>
#import <libobjc.A.dylib/_UICursorInteractionDelegate.h>

@class UIImageView, UILabel, UIView, UIColor, NSString;

@interface CKCanvasBackButtonView : UIControl <_UICursorInteractionDelegate> {

	BOOL _shouldShowTitlePaddingView;
	UIImageView* _backButtonView;
	UILabel* _titleLabel;
	UIView* _titlePaddingView;
	UIColor* _titleLabelColor;

}

@property (nonatomic,retain) UIImageView * backButtonView;                 //@synthesize backButtonView=_backButtonView - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                         //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UIView * titlePaddingView;                    //@synthesize titlePaddingView=_titlePaddingView - In the implementation block
@property (assign,nonatomic) BOOL shouldShowTitlePaddingView;              //@synthesize shouldShowTitlePaddingView=_shouldShowTitlePaddingView - In the implementation block
@property (nonatomic,retain) UIColor * titleLabelColor;                    //@synthesize titleLabelColor=_titleLabelColor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UILabel *)titleLabel;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)sizeToFit;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)tintColorDidChange;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(UIColor *)titleLabelColor;
-(id)cursorInteraction:(id)arg1 regionForLocation:(CGPoint)arg2 defaultRegion:(id)arg3 ;
-(id)cursorInteraction:(id)arg1 styleForRegion:(id)arg2 modifiers:(long long)arg3 ;
-(UIImageView *)backButtonView;
-(void)setBackButtonTitle:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 showPaddingTitleView:(BOOL)arg2 ;
-(void)setTitleLabelColor:(UIColor *)arg1 ;
-(void)setBackButtonView:(UIImageView *)arg1 ;
-(void)setShouldShowTitlePaddingView:(BOOL)arg1 ;
-(void)_setVisuallyHighlighted:(BOOL)arg1 ;
-(UIView *)titlePaddingView;
-(void)setTitlePaddingView:(UIView *)arg1 ;
-(BOOL)shouldShowTitlePaddingView;
-(CGSize)_titlePaddingViewSizeForTitle;
@end

