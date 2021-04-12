/*
* Generated on Monday, March 1, 2021 at 2:30:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

