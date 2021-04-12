/*
* Generated on Monday, March 1, 2021 at 2:35:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TestFlightCore.framework/TestFlightCore
*/


#import <TestFlightCore/TestFlightCore-Structs.h>
@class UIFont, UIColor;

@interface TFAppLockupViewSpecification : NSObject {

	double _titleLabelBaselineToFirstSubtitleLabelBaseline;
	double _firstSubtitleLabelBaselineToSecondSubtitleLabelBaseline;
	UIFont* _titleLabelFont;
	UIFont* _subtitleLabelFont;

}

@property (nonatomic,readonly) UIColor * titleTextColor; 
@property (nonatomic,readonly) UIColor * subtitleTextColor; 
@property (nonatomic,readonly) UIColor * iconPlaceholderColor; 
@property (nonatomic,readonly) CGSize iconSize; 
@property (nonatomic,readonly) double paddingBetweenIconAndText; 
@property (nonatomic,readonly) double titleLabelBaselineToFirstSubtitleLabelBaseline;                       //@synthesize titleLabelBaselineToFirstSubtitleLabelBaseline=_titleLabelBaselineToFirstSubtitleLabelBaseline - In the implementation block
@property (nonatomic,readonly) double firstSubtitleLabelBaselineToSecondSubtitleLabelBaseline;              //@synthesize firstSubtitleLabelBaselineToSecondSubtitleLabelBaseline=_firstSubtitleLabelBaselineToSecondSubtitleLabelBaseline - In the implementation block
@property (nonatomic,readonly) UIFont * titleLabelFont;                                                     //@synthesize titleLabelFont=_titleLabelFont - In the implementation block
@property (nonatomic,readonly) UIFont * subtitleLabelFont;                                                  //@synthesize subtitleLabelFont=_subtitleLabelFont - In the implementation block
-(UIFont *)titleLabelFont;
-(CGSize)iconSize;
-(UIColor *)titleTextColor;
-(UIColor *)subtitleTextColor;
-(id)initWithTraitCollection:(id)arg1 ;
-(UIFont *)subtitleLabelFont;
-(UIColor *)iconPlaceholderColor;
-(double)paddingBetweenIconAndText;
-(double)titleLabelBaselineToFirstSubtitleLabelBaseline;
-(double)firstSubtitleLabelBaselineToSecondSubtitleLabelBaseline;
-(id)_createTitleLabelFontWithTraitCollection:(id)arg1 ;
-(id)_createSubtitleLabelFontWithTraitCollection:(id)arg1 ;
-(id)_titleFontStyle;
-(id)_subtitleFontStyle;
@end

