/*
* Generated on Thursday, January 14, 2021 at 2:27:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsUI.framework/CloudDocsUI
*/

#import <UIKitCore/UIViewController.h>

@class UIImageView, UILabel, UIButton, NSURL, NSLayoutConstraint;

@interface _UIDocumentPickerUnavailableViewController : UIViewController {

	UIImageView* _leadImageView;
	UILabel* _titleLabel;
	UILabel* _textLabel;
	UILabel* _textLabel2;
	UIButton* _button;
	NSURL* _buttonURL;
	NSLayoutConstraint* _topConstraint;
	NSLayoutConstraint* _imageToTitleConstraint;
	NSLayoutConstraint* _titleToTextConstraint;
	NSLayoutConstraint* _textToTextConstraint;
	NSLayoutConstraint* _textToButtonConstraint;

}

@property (nonatomic,retain) UIImageView * leadImageView;                              //@synthesize leadImageView=_leadImageView - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                     //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * textLabel;                                      //@synthesize textLabel=_textLabel - In the implementation block
@property (nonatomic,retain) UILabel * textLabel2;                                     //@synthesize textLabel2=_textLabel2 - In the implementation block
@property (nonatomic,retain) UIButton * button;                                        //@synthesize button=_button - In the implementation block
@property (nonatomic,retain) NSURL * buttonURL;                                        //@synthesize buttonURL=_buttonURL - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * topConstraint;                       //@synthesize topConstraint=_topConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * imageToTitleConstraint;              //@synthesize imageToTitleConstraint=_imageToTitleConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * titleToTextConstraint;               //@synthesize titleToTextConstraint=_titleToTextConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * textToTextConstraint;                //@synthesize textToTextConstraint=_textToTextConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * textToButtonConstraint;              //@synthesize textToButtonConstraint=_textToButtonConstraint - In the implementation block
-(UILabel *)titleLabel;
-(void)setTopConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(UIButton *)button;
-(NSLayoutConstraint *)topConstraint;
-(NSURL *)buttonURL;
-(void)setButton:(UIButton *)arg1 ;
-(void)setTextLabel:(UILabel *)arg1 ;
-(NSLayoutConstraint *)imageToTitleConstraint;
-(void)setImageToTitleConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setButtonURL:(NSURL *)arg1 ;
-(UILabel *)textLabel;
-(UILabel *)textLabel2;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)_buttonPressed:(id)arg1 ;
-(void)dealloc;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)_fontSizeDidChange:(id)arg1 ;
-(void)setLeadImageView:(UIImageView *)arg1 ;
-(UIImageView *)leadImageView;
-(void)setTitleToTextConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)titleToTextConstraint;
-(void)setTextLabel2:(UILabel *)arg1 ;
-(void)setTextToTextConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)textToTextConstraint;
-(void)setTextToButtonConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)textToButtonConstraint;
-(id)_buttonBackgroundImageForState:(unsigned long long)arg1 traits:(id)arg2 ;
@end

