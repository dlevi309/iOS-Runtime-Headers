/*
* Generated on Monday, March 1, 2021 at 2:32:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/


#import <NetworkExtension/NetworkExtension-Structs.h>
@class NSString;

@interface NEPluginPreferences : NSObject {

	SCPreferencesRef _prefs;
	NSString* _pluginType;

}

@property (assign) SCPreferencesRef prefs;               //@synthesize prefs=_prefs - In the implementation block
@property (readonly) NSString * pluginType;              //@synthesize pluginType=_pluginType - In the implementation block
+(void)removePreferencesForPluginType:(id)arg1 ;
+(id)copyIdentifiersOfInstalledVPNApps;
-(void)dealloc;
-(SCPreferencesRef)prefs;
-(NSString *)pluginType;
-(id)initWithPluginType:(id)arg1 ;
-(id)copyAppURL;
-(BOOL)setPreferences:(CFDictionaryRef)arg1 ofType:(long long)arg2 configurationIdentifier:(id)arg3 ;
-(CFDictionaryRef)copyPersistentDataOfType:(long long)arg1 configurationIdentifier:(id)arg2 ;
-(void)setPrefs:(SCPreferencesRef)arg1 ;
@end

