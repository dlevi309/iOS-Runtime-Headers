/*
* Generated on Thursday, January 14, 2021 at 2:20:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
*/


#import <Preferences/Preferences-Structs.h>
@interface PSSystemConfigurationDynamicStoreWifiWatcher : NSObject {

	SCDynamicStoreRef _prefs;
	CFStringRef _wifiKey;
	CFStringRef _wifiInterface;
	CFStringRef _tetheringLink;

}
+(id)sharedInstance;
+(BOOL)wifiEnabled;
-(id)init;
-(id)_wifiNameWithState:(id)arg1 ;
-(id)wifiConfig;
-(id)_wifiPowerWithState:(id)arg1 ;
-(void)dealloc;
-(id)_wifiTetheringWithState:(id)arg1 ;
-(void)findKeysAirPortState:(id*)arg1 andTetheringState:(id*)arg2 ;
@end

