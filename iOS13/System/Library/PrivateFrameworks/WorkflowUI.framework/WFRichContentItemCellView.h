/*
* Generated on Monday, March 1, 2021 at 2:34:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WorkflowUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel, WFContentItem, UIImageView, NSLayoutConstraint, NSArray, UIImage, NSString;

@interface WFRichContentItemCellView : UIView {

	BOOL _alwaysLeftAlign;
	BOOL _hasImage;
	UILabel* _titleLabel;
	WFContentItem* _item;
	UILabel* _subtitleLabel;
	UILabel* _altLabel;
	UIImageView* _imageView;
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
@property (nonatomic,retain) NSLayoutConstraint * imageHeightConstraint;               //@synthesize imageHeightConstraint=_imageHeightConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * imageWidthConstraint;                //@synthesize imageWidthConstraint=_imageWidthConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * imageLeadingConstraint;              //@synthesize imageLeadingConstraint=_imageLeadingConstraint - In the implementation block
@property (nonatomic,copy) NSArray * firstRowConstraintsWithAltText;                   //@synthesize firstRowConstraintsWithAltText=_firstRowConstraintsWithAltText - In the implementation block
@property (nonatomic,copy) NSArray * firstRowConstraintsWithoutAltText;                //@synthesize firstRowConstraintsWithoutAltText=_firstRowConstraintsWithoutAltText - In the implementation block
@property (nonatomic,copy) NSArray * verticalConstraintsWithSubtitle;                  //@synthesize verticalConstraintsWithSubtitle=_verticalConstraintsWithSubtitle - In the implementation block
@property (nonatomic,copy) NSArray * verticalConstraintsWithoutSubtitle;               //@synthesize verticalConstraintsWithoutSubtitle=_verticalConstraintsWithoutSubtitle - In the implementation block
@property (nonatomic,readonly) UILabel * titleLabel;                                   //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,readonly) NSString * accessibilityLabel; 
@property (assign,nonatomic) BOOL alwaysLeftAlign;                                     //@synthesize alwaysLeftAlign=_alwaysLeftAlign - In the implementation block
-(WFContentItem *)item;
-(void)setItem:(WFContentItem *)arg1 ;
-(UIImage *)image;
-(void)setImage:(UIImage *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UILabel *)titleLabel;
-(NSString *)accessibilityLabel;
-(UIImageView *)imageView;
-(void)setSubtitle:(id)arg1 ;
-(void)updateConstraints;
-(void)tintColorDidChange;
-(BOOL)hasImage;
-(void)setImageView:(UIImageView *)arg1 ;
-(void)setSubtitleLabel:(UILabel *)arg1 ;
-(UILabel *)subtitleLabel;
-(void)setHasImage:(BOOL)arg1 ;
-(NSLayoutConstraint *)imageHeightConstraint;
-(void)setImageHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(double)imageDimension;
-(void)setImage:(id)arg1 options:(id)arg2 ;
-(void)setSelectableAlertButton:(id)arg1 ;
-(void)setAttributedAlertButton:(id)arg1 ;
-(void)setContentAlertButton:(id)arg1 ;
-(BOOL)alwaysLeftAlign;
-(void)setAlwaysLeftAlign:(BOOL)arg1 ;
-(UILabel *)altLabel;
-(void)setAltLabel:(UILabel *)arg1 ;
-(NSLayoutConstraint *)imageWidthConstraint;
-(void)setImageWidthConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)imageLeadingConstraint;
-(void)setImageLeadingConstraint:(NSLayoutConstraint *)arg1 ;
-(NSArray *)firstRowConstraintsWithAltText;
-(void)setFirstRowConstraintsWithAltText:(NSArray *)arg1 ;
-(NSArray *)firstRowConstraintsWithoutAltText;
-(void)setFirstRowConstraintsWithoutAltText:(NSArray *)arg1 ;
-(NSArray *)verticalConstraintsWithSubtitle;
-(void)setVerticalConstraintsWithSubtitle:(NSArray *)arg1 ;
-(NSArray *)verticalConstraintsWithoutSubtitle;
-(void)setVerticalConstraintsWithoutSubtitle:(NSArray *)arg1 ;
@end

