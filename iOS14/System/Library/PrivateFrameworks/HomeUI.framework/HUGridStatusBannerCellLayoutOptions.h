/*
* Generated on Thursday, January 14, 2021 at 2:24:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <HomeUI/HUGridBannerCellLayoutOptions.h>

@class UIFont;

@interface HUGridStatusBannerCellLayoutOptions : HUGridBannerCellLayoutOptions {

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
	UIFont* _footerViewLabelFont;

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
@property (nonatomic,retain) UIFont * footerViewLabelFont;                                //@synthesize footerViewLabelFont=_footerViewLabelFont - In the implementation block
+(id)defaultOptionsForCellSizeSubclass:(long long)arg1 ;
-(double)iconHeight;
-(double)iconWidth;
-(double)statusBannerCellHeightForWidth:(double)arg1 title:(id)arg2 description:(id)arg3 forContentSizeCategory:(id)arg4 ;
-(double)cellHeight;
-(void)setIconWidth:(double)arg1 ;
-(void)setIconHeight:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setCellHeight:(double)arg1 ;
-(double)titleInterLineSpacing;
-(UIFont *)descriptionFont;
-(void)setDescriptionFont:(UIFont *)arg1 ;
-(void)setMaxNumberOfTitleLines:(unsigned long long)arg1 ;
-(void)setMaxNumberOfDescriptionLines:(unsigned long long)arg1 ;
-(unsigned long long)maxNumberOfTitleLines;
-(unsigned long long)maxNumberOfDescriptionLines;
-(double)leadingInset;
-(double)titleTopInset;
-(double)verticalSpacingForLipElements;
-(double)verticalLabelSpacing;
-(double)trailingInset;
-(double)verticalSpacingForLineView;
-(UIFont *)footerViewLabelFont;
-(void)setTitleInterLineSpacing:(double)arg1 ;
-(double)horizontalItemSpacing;
-(void)setLeadingInset:(double)arg1 ;
-(void)setIconTopInset:(double)arg1 ;
-(void)setIconTrailingInset:(double)arg1 ;
-(void)setTitleTopInset:(double)arg1 ;
-(void)setTrailingInset:(double)arg1 ;
-(void)setHorizontalItemSpacing:(double)arg1 ;
-(void)setVerticalLabelSpacing:(double)arg1 ;
-(void)setVerticalSpacingForLineView:(double)arg1 ;
-(void)setVerticalSpacingForLipElements:(double)arg1 ;
-(void)setFooterViewLabelFont:(UIFont *)arg1 ;
-(double)iconTopInset;
-(double)iconTrailingInset;
@end

