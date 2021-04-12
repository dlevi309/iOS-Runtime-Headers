/*
* Generated on Thursday, January 14, 2021 at 2:28:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
*/


#import <WorkflowEditor/WorkflowEditor-Structs.h>
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
	UIColor* _labelColor;
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
@property (nonatomic,readonly) UIColor * labelColor;                              //@synthesize labelColor=_labelColor - In the implementation block
+(id)defaultAppearance;
+(id)commentAppearance;
+(id)appearanceWithLabelColor:(id)arg1 ;
-(double)shadowRadius;
-(double)shadowOpacity;
-(UIColor *)shadowColor;
-(UIColor *)borderColor;
-(CGSize)shadowOffset;
-(UIColor *)backgroundColor;
-(UIColor *)labelColor;
-(double)cornerRadius;
-(double)borderWidth;
-(unsigned long long)hash;
-(UIColor *)separatorColor;
-(UIColor *)progressBackgroundColor;
-(UIFont *)summaryFont;
-(BOOL)isEqual:(id)arg1 ;
-(UIColor *)parentBackgroundColor;
-(UIColor *)parametersBackgroundColor;
-(UIColor *)parametersHighlightedColor;
-(UIColor *)progressShadowColor;
-(UIFont *)unpopulatedSummaryFont;
-(UIColor *)headingButtonColor;
-(UIColor *)warningSeparatorColor;
@end

