/*
* Generated on Thursday, January 14, 2021 at 2:26:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)addObserver:(id)arg1 ;
-(id)init;
-(void)_start;
-(void)removeObserver:(id)arg1 ;
-(void)dumpToContext:(id)arg1 ;
-(id)allApplicationIdentifiers;
-(BOOL)hasFetchedInitialApps;
-(void)forceRefetchAppList;
-(BOOL)isApplicationInstalledForContainerID:(id)arg1 ;
-(id)containerIDsForApplicationIdentifier:(id)arg1 ;
-(id)applicationIdentifiersForContainerID:(id)arg1 ;
-(void)_refetchApps;
@end

