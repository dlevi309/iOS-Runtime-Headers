/*
* Generated on Monday, March 1, 2021 at 2:33:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)setJavaScriptEnabled:(BOOL)arg1 ;
-(BOOL)javaScriptEnabled;
-(BOOL)canMakeTextSmaller;
-(id)initWithPersistedSettingsAsDictionaryRepresentation:(id)arg1 fontManager:(id)arg2 prefersLargerDefaultFontSize:(BOOL)arg3 ;
-(void)setIsOLEDDisplay:(BOOL)arg1 ;
-(void)setFont:(id)arg1 forLanguageTag:(id)arg2 ;
-(void)setTheme:(long long)arg1 forAppearance:(long long)arg2 ;
-(BOOL)canMakeTextBigger;
-(void)makeTextBigger;
-(void)makeTextSmaller;
-(void)resetTextSize;
-(NSDictionary *)configurationToSave;
-(NSDictionary *)configurationToSendToWebPage;
-(id)fontForLanguageTag:(id)arg1 ;
-(long long)themeForAppearance:(long long)arg1 ;
-(BOOL)darkModeEnabled;
-(void)setDarkModeEnabled:(BOOL)arg1 ;
-(long long)_defaultTextZoomIndex;
-(void)_migrateToVersion5IfNecessary;
-(long long)_effectiveTextZoomIndex;
-(long long)_defaultThemeForAppearance:(long long)arg1 ;
-(id)initWithPersistedSettingsAsDictionaryRepresentation:(id)arg1 fontManager:(id)arg2 ;
-(BOOL)resettingTextSizeWouldHaveEffect;
-(BOOL)isOLEDDisplay;
@end

