/*
* Generated on Thursday, January 14, 2021 at 2:24:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(UIButton *)button;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(id<VUIRoundButtonDelegate>)delegate;
-(void)setButtonImage:(UIImage *)arg1 ;
-(void)setButton:(UIButton *)arg1 ;
-(void)buttonPressed:(id)arg1 ;
-(void)setDelegate:(id<VUIRoundButtonDelegate>)arg1 ;
-(void)buttonSelected:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIImage *)buttonImage;
-(void)_setUpViews;
-(NSArray *)textLabels;
-(void)setTextLabels:(NSArray *)arg1 ;
-(void)configureTextStackView;
-(void)buttonReleased:(id)arg1 ;
-(UIStackView *)textLabelStackView;
-(void)setTextLabelStackView:(UIStackView *)arg1 ;
@end

