/*
* Generated on Monday, March 1, 2021 at 2:31:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <libobjc.A.dylib/MKInfoCardTheme.h>

@class NSString, UIColor, NSDictionary;

@interface MKInfoCardThemeManager : NSObject <MKInfoCardTheme> {

	BOOL _themeWasExplicitySet;
	NSDictionary* _colors;
	/*^block*/id _tintColorProvider;
	UIColor* _currentTintColor;
	BOOL _useSmallFont;
	unsigned long long _themeType;

}

@property (assign,nonatomic) BOOL useSmallFont;                                              //@synthesize useSmallFont=_useSmallFont - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
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
@property (nonatomic,readonly) UIColor * highlightedActionRowTextColor; 
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
+(void)setTheme:(unsigned long long)arg1 ;
+(id)currentTheme;
+(unsigned long long)themeType;
+(id)themeWithThemeType:(unsigned long long)arg1 ;
+(void)setTintColorProvider:(/*^block*/id)arg1 ;
-(id)init;
-(UIColor *)tintColor;
-(UIColor *)textColor;
-(UIColor *)lightTextColor;
-(UIColor *)normalBackgroundColor;
-(void)_tintColorDidChange;
-(BOOL)isDarkTheme;
-(UIColor *)selectedRowColor;
-(UIColor *)rowColor;
-(UIColor *)separatorLineColor;
-(UIColor *)disabledActionRowTextColor;
-(UIColor *)buttonNormalColor;
-(UIColor *)highlightedActionRowTextColor;
-(UIColor *)buttonHighlightedColor;
-(NSString *)javaScriptName;
-(UIColor *)normalActionRowBackgroundColor;
-(UIColor *)transitOntimeTextColor;
-(UIColor *)transitDelayedTextColor;
-(void)setUseSmallFont:(BOOL)arg1 ;
-(BOOL)useSmallFont;
-(UIColor *)transitChevronBackgroundColor;
-(UIColor *)highlightedTintColor;
-(UIColor *)tertiaryTextColor;
-(unsigned long long)themeType;
-(UIColor *)disabledActionRowBackgroundColor;
-(UIColor *)headerPrimaryButtonHighlightedColor;
-(id)_initWithThemeType:(unsigned long long)arg1 ;
-(void)_setTheme:(unsigned long long)arg1 ;
-(unsigned long long)_currentSystemTheme;
-(void)_setTintColorProvider:(/*^block*/id)arg1 ;
-(UIColor *)normalActionRowBackgroundPressedColor;
-(UIColor *)headerPrimaryButtonNormalColor;
-(BOOL)_isInSpotlightContext;
@end

