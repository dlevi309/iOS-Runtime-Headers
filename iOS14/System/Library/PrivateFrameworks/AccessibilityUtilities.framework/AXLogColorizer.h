/*
* Generated on Thursday, January 14, 2021 at 2:22:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
*/


#import <AccessibilityUtilities/AccessibilityUtilities-Structs.h>
@interface AXLogColorizer : NSObject {

	BOOL _active;
	BOOL _managedBySettings;
	BOOL _preferDarkColors;
	AXLogColorTheme _colorTheme;

}

@property (assign,getter=isManagedBySettings,nonatomic) BOOL managedBySettings;              //@synthesize managedBySettings=_managedBySettings - In the implementation block
@property (assign,nonatomic) AXLogColorTheme colorTheme;                                     //@synthesize colorTheme=_colorTheme - In the implementation block
@property (assign,getter=isActive,nonatomic) BOOL active;                                    //@synthesize active=_active - In the implementation block
@property (assign,nonatomic) BOOL preferDarkColors;                                          //@synthesize preferDarkColors=_preferDarkColors - In the implementation block
+(id)defaultColorizer;
+(id)colorizeStringIfEnabled:(id)arg1 withColor:(long long)arg2 ;
+(AXLogColorTheme)defaultDarkColorsTheme;
+(id)coloredString:(id)arg1 withColor:(long long)arg2 ;
+(AXLogColorTheme)defaultLightColorsTheme;
+(char*)ansiColorSeqForAXLogColor:(long long)arg1 ;
-(id)debugString:(id)arg1 ;
-(void)setActive:(BOOL)arg1 ;
-(id)init;
-(id)greenString:(id)arg1 ;
-(id)errorString:(id)arg1 ;
-(BOOL)isActive;
-(id)cyanString:(id)arg1 ;
-(id)greyString:(id)arg1 ;
-(BOOL)isManagedBySettings;
-(void)setColorTheme:(AXLogColorTheme)arg1 ;
-(id)description;
-(void)_updateSettingsFromUserPrefs;
-(id)redString:(id)arg1 ;
-(id)infoString:(id)arg1 ;
-(id)_initAndManageWithSettings:(BOOL)arg1 ;
-(AXLogColorTheme)colorTheme;
-(BOOL)preferDarkColors;
-(id)magentaString:(id)arg1 ;
-(id)warningString:(id)arg1 ;
-(void)setPreferDarkColors:(BOOL)arg1 ;
-(void)setManagedBySettings:(BOOL)arg1 ;
-(id)whiteOrBlackString:(id)arg1 ;
-(id)blueString:(id)arg1 ;
-(id)yellowString:(id)arg1 ;
@end

