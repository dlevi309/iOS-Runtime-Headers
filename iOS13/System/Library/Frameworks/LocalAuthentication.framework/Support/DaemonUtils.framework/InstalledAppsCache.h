/*
* Generated on Monday, March 1, 2021 at 2:34:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/LocalAuthentication.framework/Support/DaemonUtils.framework/DaemonUtils
*/


@class NSMutableDictionary;

@interface InstalledAppsCache : NSObject {

	NSMutableDictionary* _appCache;
	NSMutableDictionary* _nameCache;
	NSMutableDictionary* _pluginCache;
	NSMutableDictionary* _siriExtensions;

}
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)_rebuildCache;
-(void)_addApplicationToCache:(id)arg1 ;
-(void)_logStatus;
-(id)_nameForUUID:(id)arg1 fromDict:(id)arg2 bundleId:(id*)arg3 ;
-(id)_bundleIDFromUUID:(id)arg1 ;
-(BOOL)_isPlaceholder:(id)arg1 ;
-(void)_removeApplicationFromCache:(id)arg1 ;
-(void)_appRegistrationChanged;
-(id)appNameForUUID:(id)arg1 bundleId:(id*)arg2 ;
-(id)lsBundleIDForUUID:(id)arg1 ;
-(void)_appRegistrationAdded:(id)arg1 ;
-(void)_appRegistrationRemoved:(id)arg1 ;
-(id)pluginNameForUUID:(id)arg1 bundleId:(id*)arg2 ;
-(BOOL)application:(id)arg1 hasSiriExtension:(id)arg2 ;
-(void)_currentLocaleChanged;
@end

