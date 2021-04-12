/*
* Generated on Monday, March 1, 2021 at 2:30:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id)wifiConfig;
-(void)findKeysAirPortState:(id*)arg1 andTetheringState:(id*)arg2 ;
-(id)_wifiNameWithState:(id)arg1 ;
-(id)_wifiPowerWithState:(id)arg1 ;
-(id)_wifiTetheringWithState:(id)arg1 ;
@end

