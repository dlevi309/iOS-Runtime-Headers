/*
* Generated on Monday, March 1, 2021 at 2:34:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
*/

#import <libobjc.A.dylib/BRCAppListMonitorDelegate.h>

@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSMutableSet, br_pacer, NSObject, NSString;

@interface BRCCloudDocsAppsMonitor : NSObject <BRCAppListMonitorDelegate> {

	NSMutableDictionary* _cloudDocsAppLibrariesByAppID;
	NSMutableDictionary* _appIDsByAppLibraryID;
	NSMutableSet* _observers;
	br_pacer* _refetchPacer;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _fetchInstalledAppsQueue;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	BOOL _hasFetchedInitialApps;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)cloudDocsAppsMonitor;
-(id)init;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)_start;
-(void)dumpToContext:(id)arg1 ;
-(id)allApplicationIdentifiers;
-(BOOL)hasFetchedInitialApps;
-(void)forceRefetchAppList;
-(BOOL)isApplicationInstalledForContainerID:(id)arg1 ;
-(id)containerIDsForApplicationIdentifier:(id)arg1 ;
-(id)applicationIdentifiersForContainerID:(id)arg1 ;
-(void)_refetchApps;
@end

