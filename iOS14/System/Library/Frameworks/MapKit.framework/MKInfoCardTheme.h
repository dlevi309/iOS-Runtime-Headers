/*
* Generated on Thursday, January 14, 2021 at 2:22:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

@class NSString, UIColor;


@protocol MKInfoCardTheme <NSObject>
@property (nonatomic,readonly) unsigned long long themeType; 
@property (nonatomic,readonly) NSString * javaScriptName; 
@property (nonatomic,readonly) BOOL isDarkTheme; 
@property (nonatomic,readonly) UIColor * textColor; 
@property (nonatomic,readonly) UIColor * lightTextColor; 
@property (nonatomic,readonly) UIColor * tertiaryTextColor; 
@property (nonatomic,readonly) UIColor * tintColor; 
@property (nonatomic,readonly) UIColor * highlightedTintColor; 
@property (nonatomic,readonly) UIColor * separatorLineColor; 
@property (nonatomic,readonly) UIColor * rowColor; 
@property (nonatomic,readonly) UIColor * selectedRowColor; 
@property (nonatomic,readonly) UIColor * disabledActionRowTextColor; 
@property (nonatomic,readonly) UIColor * disabledActionRowBackgroundColor; 
@property (nonatomic,readonly) UIColor * normalActionRowBackgroundColor; 
@property (nonatomic,readonly) UIColor * normalActionRowBackgroundPressedColor; 
@property (nonatomic,readonly) UIColor * headerPrimaryButtonNormalColor; 
@property (nonatomic,readonly) UIColor * headerPrimaryButtonHighlightedColor; 
@property (nonatomic,readonly) UIColor * transitOntimeTextColor; 
@property (nonatomic,readonly) UIColor * transitDelayedTextColor; 
@property (nonatomic,readonly) UIColor * transitChevronBackgroundColor; 
@property (nonatomic,readonly) UIColor * normalBackgroundColor; 
@property (nonatomic,readonly) UIColor * buttonNormalColor; 
@property (nonatomic,readonly) UIColor * buttonHighlightedColor; 
@property (nonatomic,readonly) UIColor * ratingBarStartColor; 
@property (nonatomic,readonly) UIColor * ratingBarEndColor; 
@property (nonatomic,readonly) UIColor * ratingBarBackgroundColor; 
@property (nonatomic,readonly) UIColor * transitIncidentBackgroundColor; 
@required
-(UIColor *)textColor;
-(UIColor *)normalActionRowBackgroundColor;
-(UIColor *)separatorLineColor;
-(UIColor *)transitChevronBackgroundColor;
-(UIColor *)ratingBarStartColor;
-(UIColor *)ratingBarEndColor;
-(UIColor *)ratingBarBackgroundColor;
-(UIColor *)tertiaryTextColor;
-(UIColor *)transitOntimeTextColor;
-(UIColor *)transitDelayedTextColor;
-(UIColor *)headerPrimaryButtonHighlightedColor;
-(UIColor *)lightTextColor;
-(UIColor *)highlightedTintColor;
-(UIColor *)rowColor;
-(UIColor *)normalActionRowBackgroundPressedColor;
-(UIColor *)headerPrimaryButtonNormalColor;
-(BOOL)isDarkTheme;
-(UIColor *)disabledActionRowTextColor;
-(UIColor *)normalBackgroundColor;
-(UIColor *)selectedRowColor;
-(UIColor *)buttonHighlightedColor;
-(UIColor *)buttonNormalColor;
-(NSString *)javaScriptName;
-(unsigned long long)themeType;
-(UIColor *)disabledActionRowBackgroundColor;
-(UIColor *)tintColor;
-(UIColor *)transitIncidentBackgroundColor;

@end

