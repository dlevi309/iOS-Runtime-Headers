/*
* Generated on Monday, March 1, 2021 at 2:30:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)dealloc;
-(id)description;
-(id)retainedEntryForStoreName:(id)arg1 andLocalPeerID:(id)arg2 ;
-(void)unregisterCoordinator:(id)arg1 ;
-(void)unregisterPersistentStore:(id)arg1 inCoordinator:(id)arg2 ;
-(id)createSetOfCoordinatorsForPersistentStoreName:(id)arg1 andLocalPeerID:(id)arg2 atUbiquityRootLocation:(id)arg3 ;
-(void)coordinatorWillRemoveStore:(id)arg1 ;
-(id)filePresenterForUbiquityRootLocation:(id)arg1 andLocalPeerID:(id)arg2 ;
-(void)_removeFilePresenter:(id)arg1 ;
-(void)addEntryToPreviousEntries:(id)arg1 ;
-(id)entryForStore:(id)arg1 ;
-(BOOL)cacheFilePresenterForUbiquityRootLocation:(id)arg1 andLocalPeerID:(id)arg2 ;
-(void)removeFilePresenterCachedForUbiquityRootLocation:(id)arg1 andLocalPeerID:(id)arg2 ;
-(void)_addFilePresenter:(id)arg1 ;
-(BOOL)registerUbiquitizedPersistentStore:(id)arg1 withURL:(id)arg2 forLocalPeerID:(id)arg3 withLocalRootLocation:(id)arg4 andUbiquityRootLocation:(id)arg5 error:(id*)arg6 ;
-(void)_quietlyMoveEntryToPreviousEntries:(id)arg1 ;
-(void)removeEntryFromPreviousEntries:(id)arg1 ;
-(void)releaseAllEntriesForStoreName:(id)arg1 andPeerID:(id)arg2 ;
@end

