/*
* Generated on Thursday, January 14, 2021 at 2:20:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
*/


@class NSDictionary, NSArray, NSMutableArray;

@interface PSUsageBundleManager : NSObject {

	NSDictionary* _bundleMap;
	NSArray* _usageBundleApps;
	NSMutableArray* _storageReporters;

}
-(void)_loadUsageBundlesWithHandler:(/*^block*/id)arg1 ;
-(id)allUsageBundleApps;
-(void)vendUsageBundleAppsWithHandler:(/*^block*/id)arg1 ;
@end

