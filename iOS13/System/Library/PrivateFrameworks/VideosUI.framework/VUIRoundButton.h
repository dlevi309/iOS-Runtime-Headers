/*
* Generated on Monday, March 1, 2021 at 2:35:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UIView.h>

@protocol VUIRoundButtonDelegate;
@class UIImage, NSArray, UIButton, UIStackView;

@interface VUIRoundButton : UIView {

	UIImage* _buttonImage;
	NSArray* _textLabels;
	id<VUIRoundButtonDelegate> _delegate;
	UIButton* _button;
	UIStackView* _textLabelStackView;

}

@property (nonatomic,retain) UIButton * button;                                       //@synthesize button=_button - In the implementation block
@property (nonatomic,retain) UIStackView * textLabelStackView;                        //@synthesize textLabelStackView=_textLabelStackView - In the implementation block
@property (nonatomic,retain) UIImage * buttonImage;                                   //@synthesize buttonImage=_buttonImage - In the implementation block
@property (nonatomic,retain) NSArray * textLabels;                                    //@synthesize textLabels=_textLabels - In the implementation block
@property (assign,nonatomic,__weak) id<VUIRoundButtonDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<VUIRoundButtonDelegate>)delegate;
-(void)setDelegate:(id<VUIRoundButtonDelegate>)arg1 ;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIButton *)button;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)buttonPressed:(id)arg1 ;
-(void)setButton:(UIButton *)arg1 ;
-(void)buttonSelected:(id)arg1 ;
-(UIImage *)buttonImage;
-(NSArray *)textLabels;
-(void)setTextLabels:(NSArray *)arg1 ;
-(void)_setUpViews;
-(void)configureTextStackView;
-(void)buttonReleased:(id)arg1 ;
-(UIStackView *)textLabelStackView;
-(void)setButtonImage:(UIImage *)arg1 ;
-(void)setTextLabelStackView:(UIStackView *)arg1 ;
@end

