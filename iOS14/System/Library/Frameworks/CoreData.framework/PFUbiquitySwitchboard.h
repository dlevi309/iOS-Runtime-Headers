/*
* Generated on Thursday, January 14, 2021 at 2:21:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/


@class NSMutableDictionary, NSRecursiveLock;

@interface PFUbiquitySwitchboard : NSObject {

	NSMutableDictionary* _storeNameToLocalPeerIDToEntry;
	NSMutableDictionary* _rootLocationToLocalPeerIDToFilePresenters;
	NSMutableDictionary* _rootLocationToLocalPeerIDToPreviousEntries;
	NSRecursiveLock* _registrationLock;

}
+(void)initialize;
+(id)ubiquitousExternalReferenceLocationForUUID:(id)arg1 inStore:(id)arg2 ;
+(id)sharedSwitchboard;
-(BOOL)registerUbiquitizedPersistentStore:(id)arg1 withURL:(id)arg2 forLocalPeerID:(id)arg3 withLocalRootLocation:(id)arg4 andUbiquityRootLocation:(id)arg5 error:(id*)arg6 ;
-(void)coordinatorWillRemoveStore:(id)arg1 ;
-(id)init;
-(void)unregisterPersistentStore:(id)arg1 inCoordinator:(id)arg2 ;
-(id)createSetOfCoordinatorsForPersistentStoreName:(id)arg1 andLocalPeerID:(id)arg2 atUbiquityRootLocation:(id)arg3 ;
-(id)description;
-(id)filePresenterForUbiquityRootLocation:(id)arg1 andLocalPeerID:(id)arg2 ;
-(void)_removeFilePresenter:(id)arg1 ;
-(id)entryForStore:(id)arg1 ;
-(void)_addFilePresenter:(id)arg1 ;
-(void)addEntryToPreviousEntries:(id)arg1 ;
-(BOOL)cacheFilePresenterForUbiquityRootLocation:(id)arg1 andLocalPeerID:(id)arg2 ;
-(void)removeFilePresenterCachedForUbiquityRootLocation:(id)arg1 andLocalPeerID:(id)arg2 ;
-(void)_quietlyMoveEntryToPreviousEntries:(id)arg1 ;
-(void)removeEntryFromPreviousEntries:(id)arg1 ;
-(void)releaseAllEntriesForStoreName:(id)arg1 andPeerID:(id)arg2 ;
-(id)retainedEntryForStoreName:(id)arg1 andLocalPeerID:(id)arg2 ;
-(void)unregisterCoordinator:(id)arg1 ;
-(void)dealloc;
@end

