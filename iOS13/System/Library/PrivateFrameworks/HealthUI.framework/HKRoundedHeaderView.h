/*
* Generated on Monday, March 1, 2021 at 2:34:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HealthUI-Structs.h>
#import <UIKitCore/UIView.h>

@class HKGradient, UIColor, UIImage, NSString, HKGradientView, UIImageView, UILabel, NSLayoutConstraint, NSArray;

@interface HKRoundedHeaderView : UIView {

	HKGradient* _gradient;
	UIColor* _color;
	UIImage* _image;
	NSString* _text;
	UIColor* _textColor;
	UIColor* _chevronColor;
	UIColor* _detailTextColor;
	NSString* _detailTextCompositingFilter;
	HKGradientView* _gradientView;
	UIImageView* _imageView;
	UILabel* _textLabel;
	UILabel* _detailTextLabel;
	UIImageView* _chevronRightImageView;
	NSLayoutConstraint* _textLeadingConstraintToView;
	NSLayoutConstraint* _textLeadingConstraintToImageView;
	NSLayoutConstraint* _textLabelFirstBaselineConstraint;
	NSLayoutConstraint* _textLabelWidthConstraint;
	NSLayoutConstraint* _textLabelBottomConstraint;
	NSLayoutConstraint* _detailTextLabelFirstBaselineConstraint;
	NSLayoutConstraint* _detailTextLabelWidthConstraint;
	NSLayoutConstraint* _detailTextLabelBottomConstraint;
	NSLayoutConstraint* _largeTextChevronCenterYConstraint;
	NSArray* _regularConstraints;
	NSArray* _largeTextConstraints;

}

@property (nonatomic,retain) HKGradientView * gradientView;                                            //@synthesize gradientView=_gradientView - In the implementation block
@property (nonatomic,retain) UIImageView * imageView;                                                  //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) UILabel * textLabel;                                                      //@synthesize textLabel=_textLabel - In the implementation block
@property (nonatomic,retain) UILabel * detailTextLabel;                                                //@synthesize detailTextLabel=_detailTextLabel - In the implementation block
@property (nonatomic,retain) UIImageView * chevronRightImageView;                                      //@synthesize chevronRightImageView=_chevronRightImageView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * textLeadingConstraintToView;                         //@synthesize textLeadingConstraintToView=_textLeadingConstraintToView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * textLeadingConstraintToImageView;                    //@synthesize textLeadingConstraintToImageView=_textLeadingConstraintToImageView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * textLabelFirstBaselineConstraint;                    //@synthesize textLabelFirstBaselineConstraint=_textLabelFirstBaselineConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * textLabelWidthConstraint;                            //@synthesize textLabelWidthConstraint=_textLabelWidthConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * textLabelBottomConstraint;                           //@synthesize textLabelBottomConstraint=_textLabelBottomConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * detailTextLabelFirstBaselineConstraint;              //@synthesize detailTextLabelFirstBaselineConstraint=_detailTextLabelFirstBaselineConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * detailTextLabelWidthConstraint;                      //@synthesize detailTextLabelWidthConstraint=_detailTextLabelWidthConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * detailTextLabelBottomConstraint;                     //@synthesize detailTextLabelBottomConstraint=_detailTextLabelBottomConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * largeTextChevronCenterYConstraint;                   //@synthesize largeTextChevronCenterYConstraint=_largeTextChevronCenterYConstraint - In the implementation block
@property (nonatomic,retain) NSArray * regularConstraints;                                             //@synthesize regularConstraints=_regularConstraints - In the implementation block
@property (nonatomic,retain) NSArray * largeTextConstraints;                                           //@synthesize largeTextConstraints=_largeTextConstraints - In the implementation block
@property (nonatomic,retain) HKGradient * gradient;                                                    //@synthesize gradient=_gradient - In the implementation block
@property (nonatomic,retain) UIColor * color;                                                          //@synthesize color=_color - In the implementation block
@property (nonatomic,retain) UIImage * image;                                                          //@synthesize image=_image - In the implementation block
@property (nonatomic,copy) NSString * text;                                                            //@synthesize text=_text - In the implementation block
@property (nonatomic,retain) UIColor * textColor;                                                      //@synthesize textColor=_textColor - In the implementation block
@property (nonatomic,retain) UIColor * chevronColor;                                                   //@synthesize chevronColor=_chevronColor - In the implementation block
@property (nonatomic,copy) NSString * detailText; 
@property (nonatomic,retain) UIColor * detailTextColor;                                                //@synthesize detailTextColor=_detailTextColor - In the implementation block
@property (assign,nonatomic) NSString * detailTextCompositingFilter;                                   //@synthesize detailTextCompositingFilter=_detailTextCompositingFilter - In the implementation block
@property (nonatomic,readonly) double textHorizontalInset; 
+(id)_textFont;
+(double)estimatedHeight;
+(id)_accessibilityContentSizeCategory;
+(double)_topToTextFirstBaseline;
+(double)_textLastBaselineToBottom;
+(id)_detailTextFont;
+(double)_detailTextLastBaselineToBottom;
-(UIColor *)color;
-(UIImage *)image;
-(void)setImage:(UIImage *)arg1 ;
-(void)setColor:(UIColor *)arg1 ;
-(id)initWithColor:(id)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setTextColor:(UIColor *)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(UIImageView *)imageView;
-(UIColor *)textColor;
-(UILabel *)textLabel;
-(UILabel *)detailTextLabel;
-(void)setImageView:(UIImageView *)arg1 ;
-(void)setGradient:(HKGradient *)arg1 ;
-(HKGradient *)gradient;
-(void)setTextLabel:(UILabel *)arg1 ;
-(NSString *)detailText;
-(void)setDetailText:(NSString *)arg1 ;
-(void)_updateUI;
-(void)setDetailTextLabel:(UILabel *)arg1 ;
-(void)setLargeTextConstraints:(NSArray *)arg1 ;
-(void)setRegularConstraints:(NSArray *)arg1 ;
-(NSArray *)largeTextConstraints;
-(NSArray *)regularConstraints;
-(void)_updateForCurrentSizeCategory;
-(id)initWithGradient:(id)arg1 ;
-(void)_setupConstraints;
-(HKGradientView *)gradientView;
-(void)setGradientView:(HKGradientView *)arg1 ;
-(void)_setupUI;
-(void)setDetailTextColor:(UIColor *)arg1 ;
-(UIColor *)detailTextColor;
-(void)_updateTextLabel;
-(double)textHorizontalInset;
-(void)setDetailTextCompositingFilter:(NSString *)arg1 ;
-(void)setChevronColor:(UIColor *)arg1 ;
-(BOOL)_isLayingOutForAccessibility;
-(void)_updateTextConstraints;
-(UIImageView *)chevronRightImageView;
-(void)setChevronRightImageView:(UIImageView *)arg1 ;
-(void)setTextLeadingConstraintToView:(NSLayoutConstraint *)arg1 ;
-(void)setTextLeadingConstraintToImageView:(NSLayoutConstraint *)arg1 ;
-(void)setTextLabelWidthConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)textLabelWidthConstraint;
-(void)setDetailTextLabelWidthConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)detailTextLabelWidthConstraint;
-(void)setTextLabelFirstBaselineConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)textLabelFirstBaselineConstraint;
-(void)setTextLabelBottomConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)textLabelBottomConstraint;
-(void)setDetailTextLabelFirstBaselineConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)detailTextLabelFirstBaselineConstraint;
-(void)setDetailTextLabelBottomConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)detailTextLabelBottomConstraint;
-(void)setLargeTextChevronCenterYConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)largeTextChevronCenterYConstraint;
-(NSLayoutConstraint *)textLeadingConstraintToView;
-(NSLayoutConstraint *)textLeadingConstraintToImageView;
-(BOOL)_isTextLabelTruncated;
-(UIColor *)chevronColor;
-(NSString *)detailTextCompositingFilter;
@end

