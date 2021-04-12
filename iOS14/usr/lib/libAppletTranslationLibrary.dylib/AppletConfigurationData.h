/*
* Generated on Thursday, January 14, 2021 at 2:25:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libAppletTranslationLibrary.dylib
*/


@protocol OS_dispatch_queue;
@class NSObject, NSUserDefaults, NSDictionary, NSMutableDictionary;

@interface AppletConfigurationData : NSObject {

	NSObject*<OS_dispatch_queue> queue;
	NSUserDefaults* userDefaults;
	NSDictionary* config;
	NSMutableDictionary* pluginCache;
	unsigned long long maErrorCount;
	BOOL retryInProgress;
	double maMetadataQueryInterval;

}
+(void)init;
+(id)getWuluSettings;
+(id)getStaticConfig;
+(id)getExpressModeSettings;
+(id)extraDebugScriptForModule:(id)arg1 ;
+(id)dataHash;
+(id)pluginDecoderForMid:(id)arg1 ;
+(id)scriptForModule:(id)arg1 ;
+(id)plasticCardScriptForModule:(id)arg1 ;
+(id)getHerculesSettings;
+(id)getNFCSettings;
-(id)init;
-(void)tsmScriptPerformed:(id)arg1 ;
@end

