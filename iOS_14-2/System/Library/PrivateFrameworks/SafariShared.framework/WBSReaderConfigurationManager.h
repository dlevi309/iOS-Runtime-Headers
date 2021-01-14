/*
* Generated on Thursday, January 14, 2021 at 2:23:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/


@class NSMutableDictionary, WBSReaderFontManager, NSDictionary;

@interface WBSReaderConfigurationManager : NSObject {

	long long _textZoomIndex;
	long long _theme;
	long long _darkModeTheme;
	NSMutableDictionary* _fontFamilyNameForLanguageTag;
	WBSReaderFontManager* _fontManager;
	BOOL _prefersLargerDefaultFontSize;
	BOOL _javaScriptEnabled;
	BOOL _darkModeEnabled;
	BOOL _isOLEDDisplay;

}

@property (nonatomic,readonly) NSDictionary * configurationToSave; 
@property (nonatomic,readonly) NSDictionary * configurationToSendToWebPage; 
@property (assign,nonatomic) BOOL javaScriptEnabled;                                     //@synthesize javaScriptEnabled=_javaScriptEnabled - In the implementation block
@property (assign,nonatomic) BOOL darkModeEnabled;                                       //@synthesize darkModeEnabled=_darkModeEnabled - In the implementation block
@property (assign,nonatomic) BOOL isOLEDDisplay;                                         //@synthesize isOLEDDisplay=_isOLEDDisplay - In the implementation block
@property (nonatomic,readonly) BOOL canMakeTextBigger; 
@property (nonatomic,readonly) BOOL canMakeTextSmaller; 
@property (nonatomic,readonly) BOOL resettingTextSizeWouldHaveEffect; 
-(void)makeTextBigger;
-(long long)_effectiveTextZoomIndex;
-(BOOL)darkModeEnabled;
-(NSDictionary *)configurationToSendToWebPage;
-(long long)_defaultTextZoomIndex;
-(void)resetTextSize;
-(id)fontForLanguageTag:(id)arg1 ;
-(void)_migrateToVersion5IfNecessary;
-(void)setTheme:(long long)arg1 forAppearance:(long long)arg2 ;
-(NSDictionary *)configurationToSave;
-(BOOL)isOLEDDisplay;
-(void)makeTextSmaller;
-(void)setFont:(id)arg1 forLanguageTag:(id)arg2 ;
-(void)setIsOLEDDisplay:(BOOL)arg1 ;
-(void)setJavaScriptEnabled:(BOOL)arg1 ;
-(BOOL)canMakeTextSmaller;
-(void)setDarkModeEnabled:(BOOL)arg1 ;
-(BOOL)resettingTextSizeWouldHaveEffect;
-(BOOL)javaScriptEnabled;
-(id)initWithPersistedSettingsAsDictionaryRepresentation:(id)arg1 fontManager:(id)arg2 ;
-(BOOL)canMakeTextBigger;
-(long long)_defaultThemeForAppearance:(long long)arg1 ;
-(id)initWithPersistedSettingsAsDictionaryRepresentation:(id)arg1 fontManager:(id)arg2 prefersLargerDefaultFontSize:(BOOL)arg3 ;
-(long long)themeForAppearance:(long long)arg1 ;
@end

