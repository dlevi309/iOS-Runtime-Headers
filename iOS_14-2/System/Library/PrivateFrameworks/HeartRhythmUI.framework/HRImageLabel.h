/*
* Generated on Thursday, January 14, 2021 at 2:27:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HeartRhythmUI.framework/HeartRhythmUI
*/

#import <HeartRhythmUI/HeartRhythmUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImageView, UILabel, UIImage, NSString, NSLayoutConstraint, NSArray;

@interface HRImageLabel : UIView {

	BOOL _boldText;
	UIImageView* _imageView;
	UILabel* _textLabel;
	long long _imageAlignment;
	double _imageLeadingSpacing;
	double _imageTrailingSpacing;
	UIImage* _image;
	NSString* _text;
	NSLayoutConstraint* _imageLeadingConstraint;
	NSLayoutConstraint* _imageTrailingConstraint;
	NSArray* _imageTextAlignmentConstraints;
	long long _currentUserInterfaceStyle;
	/*^block*/id _userInterfaceStyleChanged;
	CGSize _imageSize;

}

@property (nonatomic,retain) UIImage * image;                                           //@synthesize image=_image - In the implementation block
@property (assign,nonatomic) CGSize imageSize;                                          //@synthesize imageSize=_imageSize - In the implementation block
@property (nonatomic,copy) NSString * text;                                             //@synthesize text=_text - In the implementation block
@property (nonatomic,retain) UIImageView * imageView;                                   //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) UILabel * textLabel;                                       //@synthesize textLabel=_textLabel - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * imageLeadingConstraint;               //@synthesize imageLeadingConstraint=_imageLeadingConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * imageTrailingConstraint;              //@synthesize imageTrailingConstraint=_imageTrailingConstraint - In the implementation block
@property (nonatomic,retain) NSArray * imageTextAlignmentConstraints;                   //@synthesize imageTextAlignmentConstraints=_imageTextAlignmentConstraints - In the implementation block
@property (assign,nonatomic) long long currentUserInterfaceStyle;                       //@synthesize currentUserInterfaceStyle=_currentUserInterfaceStyle - In the implementation block
@property (nonatomic,copy) id userInterfaceStyleChanged;                                //@synthesize userInterfaceStyleChanged=_userInterfaceStyleChanged - In the implementation block
@property (assign,nonatomic) long long imageAlignment;                                  //@synthesize imageAlignment=_imageAlignment - In the implementation block
@property (assign,nonatomic) BOOL boldText;                                             //@synthesize boldText=_boldText - In the implementation block
@property (assign,nonatomic) double imageLeadingSpacing;                                //@synthesize imageLeadingSpacing=_imageLeadingSpacing - In the implementation block
@property (assign,nonatomic) double imageTrailingSpacing;                               //@synthesize imageTrailingSpacing=_imageTrailingSpacing - In the implementation block
-(void)setImageView:(UIImageView *)arg1 ;
-(CGSize)imageSize;
-(id)viewForLastBaselineLayout;
-(void)setImage:(UIImage *)arg1 ;
-(id)viewForFirstBaselineLayout;
-(UIImageView *)imageView;
-(void)_setUpConstraints;
-(void)setCurrentUserInterfaceStyle:(long long)arg1 ;
-(void)setText:(NSString *)arg1 ;
-(UIImage *)image;
-(void)setTextLabel:(UILabel *)arg1 ;
-(id)_textLabelFont;
-(void)layoutSubviews;
-(long long)currentUserInterfaceStyle;
-(NSString *)text;
-(void)setImageAlignment:(long long)arg1 ;
-(long long)imageAlignment;
-(void)setImageLeadingConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)imageLeadingConstraint;
-(UILabel *)textLabel;
-(void)_setUpUI;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setImageSize:(CGSize)arg1 ;
-(BOOL)boldText;
-(void)setBoldText:(BOOL)arg1 ;
-(void)_updateTextLabelFont;
-(id)_textLabelBoldFont;
-(id)_textLabelFontStyle;
-(void)_updateCurrentUserInterfaceStyleIfNeeded;
-(id)initWithImage:(id)arg1 size:(CGSize)arg2 text:(id)arg3 userInterfaceStyleChanged:(/*^block*/id)arg4 ;
-(id)initWithImage:(id)arg1 size:(CGSize)arg2 text:(id)arg3 ;
-(void)_updateImageTextAlignmentConstraints;
-(NSLayoutConstraint *)imageTrailingConstraint;
-(id)userInterfaceStyleChanged;
-(void)setImageLeadingSpacing:(double)arg1 ;
-(void)setImageTrailingSpacing:(double)arg1 ;
-(double)imageLeadingSpacing;
-(double)imageTrailingSpacing;
-(void)setImageTrailingConstraint:(NSLayoutConstraint *)arg1 ;
-(NSArray *)imageTextAlignmentConstraints;
-(void)setImageTextAlignmentConstraints:(NSArray *)arg1 ;
-(BOOL)_isTextTallerThanImage;
-(id)initWIthImage:(id)arg1 text:(id)arg2 ;
-(void)setUserInterfaceStyleChanged:(id)arg1 ;
@end

