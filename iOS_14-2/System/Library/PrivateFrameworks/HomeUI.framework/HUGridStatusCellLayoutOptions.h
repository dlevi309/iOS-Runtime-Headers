/*
* Generated on Thursday, January 14, 2021 at 2:24:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <HomeUI/HUGridCellLayoutOptions.h>

@class UIFont;

@interface HUGridStatusCellLayoutOptions : HUGridCellLayoutOptions {

	UIFont* _descriptionFont;
	UIFont* _largeDescriptionFont;
	double _descriptionInnerMargin;
	unsigned long long _numberOfTitleLines;
	double _backgroundSize;
	double _badgeSize;

}

@property (nonatomic,retain) UIFont * descriptionFont;                                //@synthesize descriptionFont=_descriptionFont - In the implementation block
@property (nonatomic,retain) UIFont * largeDescriptionFont;                           //@synthesize largeDescriptionFont=_largeDescriptionFont - In the implementation block
@property (assign,nonatomic) double descriptionInnerMargin;                           //@synthesize descriptionInnerMargin=_descriptionInnerMargin - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfTitleLines;                   //@synthesize numberOfTitleLines=_numberOfTitleLines - In the implementation block
@property (assign,nonatomic) double backgroundSize;                                   //@synthesize backgroundSize=_backgroundSize - In the implementation block
@property (assign,nonatomic) double badgeSize;                                        //@synthesize badgeSize=_badgeSize - In the implementation block
@property (nonatomic,readonly) double cellHeight; 
@property (nonatomic,readonly) double cellSpacing; 
@property (nonatomic,readonly) double cellToBackgroundHorizontalSpacing; 
@property (nonatomic,readonly) double backgroundToTitleSpacing; 
@property (nonatomic,readonly) BOOL usesHorizontalLayout; 
+(id)defaultOptionsForCellSizeSubclass:(long long)arg1 ;
-(double)badgeSize;
-(void)setNumberOfTitleLines:(unsigned long long)arg1 ;
-(double)cellSpacing;
-(unsigned long long)numberOfTitleLines;
-(void)setBackgroundSize:(double)arg1 ;
-(double)cellHeight;
-(double)backgroundSize;
-(id)copyWithZone:(NSZone*)arg1 ;
-(UIFont *)descriptionFont;
-(void)setDescriptionFont:(UIFont *)arg1 ;
-(UIFont *)largeDescriptionFont;
-(BOOL)usesHorizontalLayout;
-(double)backgroundToTitleSpacing;
-(double)descriptionInnerMargin;
-(CGPoint)badgeOffsetForUserInterfaceLayoutDirection:(long long)arg1 ;
-(double)cellToBackgroundHorizontalSpacing;
-(double)cellWidthForAttributedTitle:(id)arg1 shortTitle:(id)arg2 ;
-(double)cellWidthForTitle:(id)arg1 shortTitle:(id)arg2 ;
-(void)setLargeDescriptionFont:(UIFont *)arg1 ;
-(void)setDescriptionInnerMargin:(double)arg1 ;
-(void)setBadgeSize:(double)arg1 ;
-(long long)titleAlignmentForUserInterfaceLayoutDirection:(long long)arg1 ;
@end

