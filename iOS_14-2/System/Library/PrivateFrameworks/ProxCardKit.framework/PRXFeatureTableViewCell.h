/*
* Generated on Thursday, January 14, 2021 at 2:28:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProxCardKit.framework/ProxCardKit
*/

#import <ProxCardKit/ProxCardKit-Structs.h>
#import <UIKitCore/UITableViewCell.h>

@class NSString, UIImage, UISwitch, UILabel, UIImageView, NSLayoutConstraint;

@interface PRXFeatureTableViewCell : UITableViewCell {

	NSString* _title;
	NSString* _subtitle;
	UIImage* _image;
	UISwitch* _switchControl;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	UIImageView* _featureImageView;
	NSLayoutConstraint* _titleLabelLeadingAnchor;
	NSLayoutConstraint* _titleLabelTrailingAnchor;
	NSLayoutConstraint* _imageViewLeadingAnchor;
	NSLayoutConstraint* _imageViewVerticalAnchor;

}

@property (nonatomic,readonly) UILabel * titleLabel;                                     //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,readonly) UILabel * subtitleLabel;                                  //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (nonatomic,retain) UIImageView * featureImageView;                             //@synthesize featureImageView=_featureImageView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * titleLabelLeadingAnchor;               //@synthesize titleLabelLeadingAnchor=_titleLabelLeadingAnchor - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * titleLabelTrailingAnchor;              //@synthesize titleLabelTrailingAnchor=_titleLabelTrailingAnchor - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * imageViewLeadingAnchor;                //@synthesize imageViewLeadingAnchor=_imageViewLeadingAnchor - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * imageViewVerticalAnchor;               //@synthesize imageViewVerticalAnchor=_imageViewVerticalAnchor - In the implementation block
@property (nonatomic,copy) NSString * title;                                             //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * subtitle;                                          //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,retain) UIImage * image;                                            //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) UISwitch * switchControl;                                   //@synthesize switchControl=_switchControl - In the implementation block
-(UILabel *)titleLabel;
-(CGSize)systemLayoutSizeFittingSize:(CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3 ;
-(void)setImage:(UIImage *)arg1 ;
-(NSString *)subtitle;
-(void)setTitle:(NSString *)arg1 ;
-(void)setSwitchControl:(UISwitch *)arg1 ;
-(UISwitch *)switchControl;
-(UIImage *)image;
-(UILabel *)subtitleLabel;
-(void)setSubtitle:(NSString *)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(NSString *)title;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)_updateLabelHyphenationFactor;
-(void)_updateImageViewAnchors;
-(void)_updateTitleIndent;
-(void)setImageViewLeadingAnchor:(NSLayoutConstraint *)arg1 ;
-(void)_updateTitleLeadingAnchor;
-(NSLayoutConstraint *)imageViewLeadingAnchor;
-(NSLayoutConstraint *)titleLabelTrailingAnchor;
-(UIImageView *)featureImageView;
-(NSLayoutConstraint *)imageViewVerticalAnchor;
-(void)setImageViewVerticalAnchor:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)titleLabelLeadingAnchor;
-(void)setTitleLabelLeadingAnchor:(NSLayoutConstraint *)arg1 ;
-(void)setFeatureImageView:(UIImageView *)arg1 ;
-(void)setTitleLabelTrailingAnchor:(NSLayoutConstraint *)arg1 ;
@end

