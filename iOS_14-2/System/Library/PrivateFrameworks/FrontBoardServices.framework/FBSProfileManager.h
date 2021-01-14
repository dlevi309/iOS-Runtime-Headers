/*
* Generated on Thursday, January 14, 2021 at 2:22:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
*/


@protocol OS_dispatch_queue;
@class NSObject, NSSet, NSMutableDictionary;

@interface FBSProfileManager : NSObject {

	BOOL _started;
	NSObject*<OS_dispatch_queue> _workQueue;
	NSSet* _workQueue_managedApplicationBundleIDs;
	NSMutableDictionary* _workQueue_profilesBySignerIdentity;

}

@property (getter=isStarted,nonatomic,readonly) BOOL started; 
+(id)sharedInstance;
-(id)init;
-(BOOL)isStarted;
-(void)startService;
-(BOOL)isManaged:(id)arg1 ;
-(void)_reloadProfiles;
-(void)_workQueue_reloadProfiles;
-(void)_workQueue_reloadManagedApplicationBundleIDs;
-(void)_managedAppsChangedNotification:(id)arg1 ;
-(id)profilesForSignerIdentity:(id)arg1 ;
-(void)dealloc;
@end

