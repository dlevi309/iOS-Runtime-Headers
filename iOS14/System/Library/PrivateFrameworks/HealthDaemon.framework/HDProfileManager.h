/*
* Generated on Thursday, January 14, 2021 at 2:25:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@protocol HDProfileManagerObserver, OS_dispatch_queue;
@class HDDaemon, NSMutableDictionary, HKObserverSet, NSObject;

@interface HDProfileManager : NSObject {

	HDDaemon* _daemon;
	NSMutableDictionary* _profiles;
	HKObserverSet*<HDProfileManagerObserver> _observers;
	NSObject*<OS_dispatch_queue> _resourceQueue;

}
-(void)addObserver:(id)arg1 ;
-(id)_resourceQueue_createProfileOfType:(long long)arg1 UUID:(id)arg2 name:(id)arg3 error:(id*)arg4 ;
-(void)dispatchProfileListDidChange;
-(void)reloadSecondaryProfiles;
-(BOOL)_resourceQueue_deleteProfile:(id)arg1 error:(id*)arg2 ;
-(id)profileIdentifierForUUID:(id)arg1 ;
-(id)initWithDaemon:(id)arg1 ;
-(id)newProfileWithIdentifier:(id)arg1 daemon:(id)arg2 directoryPath:(id)arg3 ;
-(id)profileAssociatedWithNRDeviceUUID:(id)arg1 ;
-(id)createProfileOfType:(long long)arg1 displayName:(id)arg2 error:(id*)arg3 ;
-(void)removeObserver:(id)arg1 ;
-(void)invalidateAndWait;
-(id)_directoryNameForProfileIdentifier:(id)arg1 ;
-(id)_resourceQueue_profileForIdentifier:(id)arg1 ;
-(id)profileForIdentifier:(id)arg1 ;
-(id)_directoryURLForProfileIdentifier:(id)arg1 ;
-(void)addProfile:(id)arg1 ;
-(BOOL)createProfileForIdentifier:(id)arg1 displayName:(id)arg2 error:(id*)arg3 ;
-(BOOL)deleteProfile:(id)arg1 error:(id*)arg2 ;
-(void)_resourceQueue_addProfile:(id)arg1 dispatchChangeNotification:(BOOL)arg2 ;
-(void)_resourceQueue_loadSecondaryProfiles;
-(id)_profileIdentifierForDirectoryName:(id)arg1 error:(id*)arg2 ;
-(id)allProfileIdentifiers;
@end

