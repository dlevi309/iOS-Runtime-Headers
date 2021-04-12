/*
* Generated on Monday, March 1, 2021 at 2:34:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WorkflowUI-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class UIImageView, UILabel, WFActionDrawerCategoriesMetrics, NSArray;

@interface WFActionDrawerCategoryCell : UICollectionViewCell {

	BOOL _shouldStackVertically;
	UIImageView* _iconImageView;
	UILabel* _titleLabel;
	WFActionDrawerCategoriesMetrics* _metrics;
	NSArray* _verticalStackConstraints;
	NSArray* _horizontalStackConstraints;

}

@property (assign,nonatomic,__weak) UIImageView * iconImageView;                     //@synthesize iconImageView=_iconImageView - In the implementation block
@property (assign,nonatomic,__weak) UILabel * titleLabel;                            //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) WFActionDrawerCategoriesMetrics * metrics;              //@synthesize metrics=_metrics - In the implementation block
@property (nonatomic,retain) NSArray * verticalStackConstraints;                     //@synthesize verticalStackConstraints=_verticalStackConstraints - In the implementation block
@property (nonatomic,retain) NSArray * horizontalStackConstraints;                   //@synthesize horizontalStackConstraints=_horizontalStackConstraints - In the implementation block
@property (assign,nonatomic) BOOL shouldStackVertically;                             //@synthesize shouldStackVertically=_shouldStackVertically - In the implementation block
-(void)prepareForReuse;
-(WFActionDrawerCategoriesMetrics *)metrics;
-(void)setMetrics:(WFActionDrawerCategoriesMetrics *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UILabel *)titleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(UIImageView *)iconImageView;
-(void)setIconImageView:(UIImageView *)arg1 ;
-(void)setShouldStackVertically:(BOOL)arg1 ;
-(BOOL)shouldStackVertically;
-(void)adjustStackingStyle;
-(NSArray *)verticalStackConstraints;
-(void)setVerticalStackConstraints:(NSArray *)arg1 ;
-(NSArray *)horizontalStackConstraints;
-(void)setHorizontalStackConstraints:(NSArray *)arg1 ;
-(void)configureWithWorkflowCategoryTitle:(id)arg1 icon:(id)arg2 shouldStackVertically:(BOOL)arg3 ;
@end

