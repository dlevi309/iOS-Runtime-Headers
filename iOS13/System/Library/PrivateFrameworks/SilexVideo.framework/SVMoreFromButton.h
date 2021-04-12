/*
* Generated on Monday, March 1, 2021 at 2:33:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
*/

#import <SilexVideo/SilexVideo-Structs.h>
#import <UIKitCore/UIControl.h>

@class UIImageView, UILabel, NSLayoutConstraint;

@interface SVMoreFromButton : UIControl {

	UIImageView* _imageView;
	UILabel* _titleLabel;
	NSLayoutConstraint* _titleLabelBottomConstraint;
	NSLayoutConstraint* _imageViewHeightConstraint;

}

@property (nonatomic,retain) NSLayoutConstraint * titleLabelBottomConstraint;              //@synthesize titleLabelBottomConstraint=_titleLabelBottomConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * imageViewHeightConstraint;               //@synthesize imageViewHeightConstraint=_imageViewHeightConstraint - In the implementation block
@property (nonatomic,readonly) UIImageView * imageView;                                    //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,readonly) UILabel * titleLabel;                                       //@synthesize titleLabel=_titleLabel - In the implementation block
-(void)setTitle:(id)arg1 ;
-(void)setImage:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UILabel *)titleLabel;
-(void)traitCollectionDidChange:(id)arg1 ;
-(UIImageView *)imageView;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)updateConstraints;
-(void)updateFonts;
-(void)preferredContentSizeCategoryDidChange;
-(void)setImageViewHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)imageViewHeightConstraint;
-(void)setTitleLabelBottomConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)titleLabelBottomConstraint;
-(void)determineNumberOfLines;
-(void)updateImageViewHeight;
@end

