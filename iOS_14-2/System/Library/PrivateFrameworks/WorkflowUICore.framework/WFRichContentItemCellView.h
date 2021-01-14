/*
* Generated on Thursday, January 14, 2021 at 2:28:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUICore.framework/WorkflowUICore
*/

#import <WorkflowUICore/WorkflowUICore-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel, NSString, WFContentItem, UIImageView, NSLayoutConstraint, NSArray, UIImage;

@interface WFRichContentItemCellView : UIView {

	BOOL _alwaysLeftAlign;
	BOOL _hasImage;
	UILabel* _titleLabel;
	NSString* _accessibilityLabel;
	WFContentItem* _item;
	UILabel* _subtitleLabel;
	UILabel* _altLabel;
	UIImageView* _imageView;
	unsigned long long _imageRoundingStyle;
	NSLayoutConstraint* _imageHeightConstraint;
	NSLayoutConstraint* _imageWidthConstraint;
	NSLayoutConstraint* _imageLeadingConstraint;
	NSArray* _firstRowConstraintsWithAltText;
	NSArray* _firstRowConstraintsWithoutAltText;
	NSArray* _verticalConstraintsWithSubtitle;
	NSArray* _verticalConstraintsWithoutSubtitle;

}

@property (nonatomic,retain) WFContentItem * item;                                     //@synthesize item=_item - In the implementation block
@property (assign,nonatomic,__weak) UILabel * subtitleLabel;                           //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (assign,nonatomic,__weak) UILabel * altLabel;                                //@synthesize altLabel=_altLabel - In the implementation block
@property (assign,nonatomic,__weak) UIImageView * imageView;                           //@synthesize imageView=_imageView - In the implementation block
@property (assign,nonatomic) BOOL hasImage;                                            //@synthesize hasImage=_hasImage - In the implementation block
@property (nonatomic,retain) UIImage * image; 
@property (assign,nonatomic) unsigned long long imageRoundingStyle;                    //@synthesize imageRoundingStyle=_imageRoundingStyle - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * imageHeightConstraint;               //@synthesize imageHeightConstraint=_imageHeightConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * imageWidthConstraint;                //@synthesize imageWidthConstraint=_imageWidthConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * imageLeadingConstraint;              //@synthesize imageLeadingConstraint=_imageLeadingConstraint - In the implementation block
@property (nonatomic,copy) NSArray * firstRowConstraintsWithAltText;                   //@synthesize firstRowConstraintsWithAltText=_firstRowConstraintsWithAltText - In the implementation block
@property (nonatomic,copy) NSArray * firstRowConstraintsWithoutAltText;                //@synthesize firstRowConstraintsWithoutAltText=_firstRowConstraintsWithoutAltText - In the implementation block
@property (nonatomic,copy) NSArray * verticalConstraintsWithSubtitle;                  //@synthesize verticalConstraintsWithSubtitle=_verticalConstraintsWithSubtitle - In the implementation block
@property (nonatomic,copy) NSArray * verticalConstraintsWithoutSubtitle;               //@synthesize verticalConstraintsWithoutSubtitle=_verticalConstraintsWithoutSubtitle - In the implementation block
@property (nonatomic,readonly) UILabel * titleLabel;                                   //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,readonly) NSString * accessibilityLabel;                          //@synthesize accessibilityLabel=_accessibilityLabel - In the implementation block
@property (assign,nonatomic) BOOL alwaysLeftAlign;                                     //@synthesize alwaysLeftAlign=_alwaysLeftAlign - In the implementation block
-(UILabel *)titleLabel;
-(void)setSubtitleLabel:(UILabel *)arg1 ;
-(void)setImageView:(UIImageView *)arg1 ;
-(NSString *)accessibilityLabel;
-(void)tintColorDidChange;
-(void)setImage:(UIImage *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIImageView *)imageView;
-(BOOL)hasImage;
-(WFContentItem *)item;
-(UIImage *)image;
-(void)setItem:(WFContentItem *)arg1 ;
-(UILabel *)subtitleLabel;
-(void)layoutSubviews;
-(void)updateConstraints;
-(NSLayoutConstraint *)imageHeightConstraint;
-(void)setImageHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setHasImage:(BOOL)arg1 ;
-(void)setImageLeadingConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)imageLeadingConstraint;
-(void)setSubtitle:(id)arg1 ;
-(UILabel *)altLabel;
-(NSLayoutConstraint *)imageWidthConstraint;
-(void)setImageWidthConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setAltLabel:(UILabel *)arg1 ;
-(double)imageDimension;
-(void)setImage:(id)arg1 options:(id)arg2 ;
-(void)updateImageCornerRadius;
-(void)setSelectableAlertButton:(id)arg1 ;
-(void)setAttributedAlertButton:(id)arg1 ;
-(void)setContentAlertButton:(id)arg1 ;
-(BOOL)alwaysLeftAlign;
-(void)setAlwaysLeftAlign:(BOOL)arg1 ;
-(unsigned long long)imageRoundingStyle;
-(void)setImageRoundingStyle:(unsigned long long)arg1 ;
-(NSArray *)firstRowConstraintsWithAltText;
-(void)setFirstRowConstraintsWithAltText:(NSArray *)arg1 ;
-(NSArray *)firstRowConstraintsWithoutAltText;
-(void)setFirstRowConstraintsWithoutAltText:(NSArray *)arg1 ;
-(NSArray *)verticalConstraintsWithSubtitle;
-(void)setVerticalConstraintsWithSubtitle:(NSArray *)arg1 ;
-(NSArray *)verticalConstraintsWithoutSubtitle;
-(void)setVerticalConstraintsWithoutSubtitle:(NSArray *)arg1 ;
@end

