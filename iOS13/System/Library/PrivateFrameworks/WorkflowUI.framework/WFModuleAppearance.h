/*
* Generated on Monday, March 1, 2021 at 2:34:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/


#import <WorkflowUI/WorkflowUI-Structs.h>
@class UIColor, UIFont;

@interface WFModuleAppearance : NSObject {

	double _cornerRadius;
	UIColor* _shadowColor;
	UIColor* _progressShadowColor;
	double _shadowOpacity;
	double _shadowRadius;
	UIColor* _borderColor;
	double _borderWidth;
	UIFont* _summaryFont;
	UIFont* _unpopulatedSummaryFont;
	UIColor* _backgroundColor;
	UIColor* _parentBackgroundColor;
	UIColor* _progressBackgroundColor;
	UIColor* _separatorColor;
	UIColor* _warningSeparatorColor;
	UIColor* _parametersBackgroundColor;
	UIColor* _parametersHighlightedColor;
	UIColor* _headingButtonColor;
	CGSize _shadowOffset;

}

@property (nonatomic,readonly) double cornerRadius;                               //@synthesize cornerRadius=_cornerRadius - In the implementation block
@property (nonatomic,readonly) UIColor * shadowColor;                             //@synthesize shadowColor=_shadowColor - In the implementation block
@property (nonatomic,readonly) UIColor * progressShadowColor;                     //@synthesize progressShadowColor=_progressShadowColor - In the implementation block
@property (nonatomic,readonly) CGSize shadowOffset;                               //@synthesize shadowOffset=_shadowOffset - In the implementation block
@property (nonatomic,readonly) double shadowOpacity;                              //@synthesize shadowOpacity=_shadowOpacity - In the implementation block
@property (nonatomic,readonly) double shadowRadius;                               //@synthesize shadowRadius=_shadowRadius - In the implementation block
@property (nonatomic,readonly) UIColor * borderColor;                             //@synthesize borderColor=_borderColor - In the implementation block
@property (nonatomic,readonly) double borderWidth;                                //@synthesize borderWidth=_borderWidth - In the implementation block
@property (nonatomic,readonly) UIFont * summaryFont;                              //@synthesize summaryFont=_summaryFont - In the implementation block
@property (nonatomic,readonly) UIFont * unpopulatedSummaryFont;                   //@synthesize unpopulatedSummaryFont=_unpopulatedSummaryFont - In the implementation block
@property (nonatomic,readonly) UIColor * backgroundColor;                         //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,readonly) UIColor * parentBackgroundColor;                   //@synthesize parentBackgroundColor=_parentBackgroundColor - In the implementation block
@property (nonatomic,readonly) UIColor * progressBackgroundColor;                 //@synthesize progressBackgroundColor=_progressBackgroundColor - In the implementation block
@property (nonatomic,readonly) UIColor * separatorColor;                          //@synthesize separatorColor=_separatorColor - In the implementation block
@property (nonatomic,readonly) UIColor * warningSeparatorColor;                   //@synthesize warningSeparatorColor=_warningSeparatorColor - In the implementation block
@property (nonatomic,readonly) UIColor * parametersBackgroundColor;               //@synthesize parametersBackgroundColor=_parametersBackgroundColor - In the implementation block
@property (nonatomic,readonly) UIColor * parametersHighlightedColor;              //@synthesize parametersHighlightedColor=_parametersHighlightedColor - In the implementation block
@property (nonatomic,readonly) UIColor * headingButtonColor;                      //@synthesize headingButtonColor=_headingButtonColor - In the implementation block
+(id)defaultAppearance;
+(id)lightAppearance;
+(id)commentAppearance;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(double)shadowRadius;
-(CGSize)shadowOffset;
-(UIColor *)shadowColor;
-(UIColor *)backgroundColor;
-(double)cornerRadius;
-(double)borderWidth;
-(double)shadowOpacity;
-(UIColor *)separatorColor;
-(UIColor *)borderColor;
-(UIColor *)progressBackgroundColor;
-(UIFont *)summaryFont;
-(UIColor *)parentBackgroundColor;
-(UIColor *)progressShadowColor;
-(UIFont *)unpopulatedSummaryFont;
-(UIColor *)warningSeparatorColor;
-(UIColor *)parametersBackgroundColor;
-(UIColor *)parametersHighlightedColor;
-(UIColor *)headingButtonColor;
@end

