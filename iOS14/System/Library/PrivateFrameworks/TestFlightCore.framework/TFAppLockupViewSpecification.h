/*
* Generated on Thursday, January 14, 2021 at 2:28:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(UIColor *)subtitleTextColor;
-(CGSize)iconSize;
-(UIFont *)subtitleLabelFont;
-(UIFont *)titleLabelFont;
-(UIColor *)titleTextColor;
-(id)initWithTraitCollection:(id)arg1 ;
-(UIColor *)iconPlaceholderColor;
-(double)paddingBetweenIconAndText;
-(double)titleLabelBaselineToFirstSubtitleLabelBaseline;
-(double)firstSubtitleLabelBaselineToSecondSubtitleLabelBaseline;
-(id)_createTitleLabelFontWithTraitCollection:(id)arg1 ;
-(id)_createSubtitleLabelFontWithTraitCollection:(id)arg1 ;
-(id)_titleFontStyle;
-(id)_subtitleFontStyle;
@end

