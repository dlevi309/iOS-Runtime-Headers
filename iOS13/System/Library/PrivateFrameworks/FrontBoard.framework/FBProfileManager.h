/*
* Generated on Monday, March 1, 2021 at 2:31:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
*/


@protocol OS_dispatch_queue;
@class NSObject, NSSet, NSMutableDictionary;

@interface FBProfileManager : NSObject {

	BOOL _started;
	NSObject*<OS_dispatch_queue> _workQueue;
	NSSet* _workQueue_managedApplicationBundleIDs;
	NSMutableDictionary* _workQueue_profilesBySignerIdentity;

}

@property (getter=isStarted,nonatomic,readonly) BOOL started; 
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(BOOL)isStarted;
-(void)_workQueue_reloadProfiles;
-(void)_workQueue_reloadManagedApplicationBundleIDs;
-(void)_managedAppsChangedNotification:(id)arg1 ;
-(void)startService;
-(BOOL)isManaged:(id)arg1 ;
-(id)profilesForSignerIdentity:(id)arg1 ;
-(void)_reloadProfiles;
@end

