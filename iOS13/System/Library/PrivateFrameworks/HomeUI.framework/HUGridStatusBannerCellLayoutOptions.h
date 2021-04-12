/*
* Generated on Monday, March 1, 2021 at 2:34:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <HomeUI/HUGridCellLayoutOptions.h>

@class UIFont;

@interface HUGridStatusBannerCellLayoutOptions : HUGridCellLayoutOptions {

	double _titleInterLineSpacing;
	double _trailingInset;
	double _horizontalItemSpacing;
	double _leadingInset;
	double _iconTopInset;
	double _iconTrailingInset;
	double _iconHeight;
	double _iconWidth;
	double _titleTopInset;
	UIFont* _descriptionFont;
	double _cellHeight;
	unsigned long long _maxNumberOfTitleLines;
	unsigned long long _maxNumberOfDescriptionLines;
	double _verticalLabelSpacing;
	double _verticalSpacingForLineView;
	double _verticalSpacingForLipElements;
	UIFont* _continueLabelFont;

}

@property (assign,nonatomic) double titleInterLineSpacing;                                //@synthesize titleInterLineSpacing=_titleInterLineSpacing - In the implementation block
@property (assign,nonatomic) double trailingInset;                                        //@synthesize trailingInset=_trailingInset - In the implementation block
@property (assign,nonatomic) double horizontalItemSpacing;                                //@synthesize horizontalItemSpacing=_horizontalItemSpacing - In the implementation block
@property (assign,nonatomic) double leadingInset;                                         //@synthesize leadingInset=_leadingInset - In the implementation block
@property (assign,nonatomic) double iconTopInset;                                         //@synthesize iconTopInset=_iconTopInset - In the implementation block
@property (assign,nonatomic) double iconTrailingInset;                                    //@synthesize iconTrailingInset=_iconTrailingInset - In the implementation block
@property (assign,nonatomic) double iconHeight;                                           //@synthesize iconHeight=_iconHeight - In the implementation block
@property (assign,nonatomic) double iconWidth;                                            //@synthesize iconWidth=_iconWidth - In the implementation block
@property (assign,nonatomic) double titleTopInset;                                        //@synthesize titleTopInset=_titleTopInset - In the implementation block
@property (nonatomic,retain) UIFont * descriptionFont;                                    //@synthesize descriptionFont=_descriptionFont - In the implementation block
@property (assign,nonatomic) double cellHeight;                                           //@synthesize cellHeight=_cellHeight - In the implementation block
@property (assign,nonatomic) unsigned long long maxNumberOfTitleLines;                    //@synthesize maxNumberOfTitleLines=_maxNumberOfTitleLines - In the implementation block
@property (assign,nonatomic) unsigned long long maxNumberOfDescriptionLines;              //@synthesize maxNumberOfDescriptionLines=_maxNumberOfDescriptionLines - In the implementation block
@property (assign,nonatomic) double verticalLabelSpacing;                                 //@synthesize verticalLabelSpacing=_verticalLabelSpacing - In the implementation block
@property (assign,nonatomic) double verticalSpacingForLineView;                           //@synthesize verticalSpacingForLineView=_verticalSpacingForLineView - In the implementation block
@property (assign,nonatomic) double verticalSpacingForLipElements;                        //@synthesize verticalSpacingForLipElements=_verticalSpacingForLipElements - In the implementation block
@property (nonatomic,retain) UIFont * continueLabelFont;                                  //@synthesize continueLabelFont=_continueLabelFont - In the implementation block
+(id)defaultOptionsForCellSizeSubclass:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)iconHeight;
-(double)iconWidth;
-(void)setIconWidth:(double)arg1 ;
-(void)setIconHeight:(double)arg1 ;
-(UIFont *)descriptionFont;
-(double)cellHeight;
-(double)leadingInset;
-(double)trailingInset;
-(void)setLeadingInset:(double)arg1 ;
-(void)setTrailingInset:(double)arg1 ;
-(void)setCellHeight:(double)arg1 ;
-(void)setDescriptionFont:(UIFont *)arg1 ;
-(void)setTitleInterLineSpacing:(double)arg1 ;
-(double)titleInterLineSpacing;
-(void)setMaxNumberOfTitleLines:(unsigned long long)arg1 ;
-(void)setMaxNumberOfDescriptionLines:(unsigned long long)arg1 ;
-(double)statusBannerCellHeightForWidth:(double)arg1 havingTitleAndDescription:(id)arg2 forContentSizeCategory:(id)arg3 ;
-(double)horizontalItemSpacing;
-(double)verticalLabelSpacing;
-(double)verticalSpacingForLineView;
-(double)verticalSpacingForLipElements;
-(UIFont *)continueLabelFont;
-(void)setIconTopInset:(double)arg1 ;
-(void)setIconTrailingInset:(double)arg1 ;
-(void)setTitleTopInset:(double)arg1 ;
-(void)setHorizontalItemSpacing:(double)arg1 ;
-(void)setVerticalLabelSpacing:(double)arg1 ;
-(void)setVerticalSpacingForLineView:(double)arg1 ;
-(void)setVerticalSpacingForLipElements:(double)arg1 ;
-(void)setContinueLabelFont:(UIFont *)arg1 ;
-(double)titleTopInset;
-(double)iconTopInset;
-(double)iconTrailingInset;
-(unsigned long long)maxNumberOfDescriptionLines;
-(unsigned long long)maxNumberOfTitleLines;
@end

