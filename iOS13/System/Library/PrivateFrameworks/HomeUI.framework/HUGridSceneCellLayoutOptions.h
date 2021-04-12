/*
* Generated on Monday, March 1, 2021 at 2:34:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <HomeUI/HUGridCellLayoutOptions.h>

@class UIFont;

@interface HUGridSceneCellLayoutOptions : HUGridCellLayoutOptions {

	double _iconInnerHorizontalMargin;
	double _titleInterLineSpacing;
	double _titleDescriptionLineSpacing;
	UIFont* _descriptionFont;
	double _cellHeight;
	unsigned long long _numberOfTitleLines;

}

@property (assign,nonatomic) double iconInnerHorizontalMargin;                   //@synthesize iconInnerHorizontalMargin=_iconInnerHorizontalMargin - In the implementation block
@property (assign,nonatomic) double titleInterLineSpacing;                       //@synthesize titleInterLineSpacing=_titleInterLineSpacing - In the implementation block
@property (assign,nonatomic) double titleDescriptionLineSpacing;                 //@synthesize titleDescriptionLineSpacing=_titleDescriptionLineSpacing - In the implementation block
@property (nonatomic,retain) UIFont * descriptionFont;                           //@synthesize descriptionFont=_descriptionFont - In the implementation block
@property (assign,nonatomic) double cellHeight;                                  //@synthesize cellHeight=_cellHeight - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfTitleLines;              //@synthesize numberOfTitleLines=_numberOfTitleLines - In the implementation block
+(id)defaultOptionsForCellSizeSubclass:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)numberOfTitleLines;
-(void)setNumberOfTitleLines:(unsigned long long)arg1 ;
-(UIFont *)descriptionFont;
-(double)cellHeight;
-(void)setCellHeight:(double)arg1 ;
-(void)setDescriptionFont:(UIFont *)arg1 ;
-(void)setTitleInterLineSpacing:(double)arg1 ;
-(void)setTitleDescriptionLineSpacing:(double)arg1 ;
-(double)titleInterLineSpacing;
-(double)titleDescriptionLineSpacing;
-(double)iconInnerHorizontalMargin;
-(void)setIconInnerHorizontalMargin:(double)arg1 ;
@end

