/*
* Generated on Thursday, January 14, 2021 at 2:22:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <libobjc.A.dylib/MKInfoCardTheme.h>

@class NSString, UIColor, NSDictionary;

@interface MKInfoCardThemeManager : NSObject <MKInfoCardTheme> {

	BOOL _themeWasExplicitySet;
	NSDictionary* _colors;
	/*^block*/id _tintColorProvider;
	BOOL _useSmallFont;
	unsigned long long _themeType;

}

@property (assign,nonatomic) BOOL useSmallFont;                                              //@synthesize useSmallFont=_useSmallFont - In the implementation block
@property (nonatomic,readonly) unsigned long long themeType;                                 //@synthesize themeType=_themeType - In the implementation block
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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)setTheme:(unsigned long long)arg1 ;
+(id)currentTheme;
+(id)themeWithThemeType:(unsigned long long)arg1 ;
+(void)setTintColorProvider:(/*^block*/id)arg1 ;
+(unsigned long long)themeType;
-(UIColor *)textColor;
-(id)init;
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
-(void)_setTheme:(unsigned long long)arg1 ;
-(UIColor *)lightTextColor;
-(UIColor *)highlightedTintColor;
-(UIColor *)rowColor;
-(id)_initWithThemeType:(unsigned long long)arg1 ;
-(unsigned long long)_currentSystemTheme;
-(void)_setTintColorProvider:(/*^block*/id)arg1 ;
-(BOOL)_isInSpotlightContext;
-(UIColor *)normalActionRowBackgroundPressedColor;
-(UIColor *)headerPrimaryButtonNormalColor;
-(BOOL)isDarkTheme;
-(void)setUseSmallFont:(BOOL)arg1 ;
-(BOOL)useSmallFont;
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

