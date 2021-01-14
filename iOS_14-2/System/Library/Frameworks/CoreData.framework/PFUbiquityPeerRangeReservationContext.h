/*
* Generated on Thursday, January 14, 2021 at 2:21:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/


@class NSMutableDictionary, NSMutableArray, NSManagedObjectContext, NSPersistentStore, NSPersistentStoreCoordinator, NSArray, NSDictionary;

@interface PFUbiquityPeerRangeReservationContext : NSObject {

	NSMutableDictionary* _peerEntityNameRangeStartSet;
	NSMutableDictionary* _globalIDToLocalURI;
	NSMutableArray* _unresolvedGlobalObjectIDs;
	NSManagedObjectContext* _moc;
	NSPersistentStore* _store;
	NSPersistentStoreCoordinator* _psc;
	NSMutableDictionary* _storeNameToFetchedMetadata;
	NSArray* _globalObjectIDs;
	long long _numRangesToReserve;

}

@property (nonatomic,readonly) NSPersistentStoreCoordinator * psc;                      //@synthesize psc=_psc - In the implementation block
@property (nonatomic,readonly) NSPersistentStore * store;                               //@synthesize store=_store - In the implementation block
@property (nonatomic,readonly) NSManagedObjectContext * moc;                            //@synthesize moc=_moc - In the implementation block
@property (nonatomic,readonly) NSArray * globalObjectIDs;                               //@synthesize globalObjectIDs=_globalObjectIDs - In the implementation block
@property (nonatomic,readonly) long long numRangesToReserve;                            //@synthesize numRangesToReserve=_numRangesToReserve - In the implementation block
@property (nonatomic,readonly) NSDictionary * peerEntityNameRangeStartSet;              //@synthesize peerEntityNameRangeStartSet=_peerEntityNameRangeStartSet - In the implementation block
-(NSManagedObjectContext *)moc;
-(id)init;
-(NSPersistentStore *)store;
-(NSPersistentStoreCoordinator *)psc;
-(NSArray *)globalObjectIDs;
-(long long)numRangesToReserve;
-(BOOL)createNewPeerRangesWithCache:(id)arg1 Error:(id*)arg2 ;
-(id)initWithPersistentStore:(id)arg1 andGlobalObjectIDs:(id)arg2 ;
-(void)prepareForRangeReservationWithRangeStart:(id)arg1 andGlobalID:(id)arg2 andEntityName:(id)arg3 ;
-(id)createLocalIDStringForStoreUUID:(id)arg1 entityName:(id)arg2 andPrimaryKeyString:(id)arg3 ;
-(NSDictionary *)peerEntityNameRangeStartSet;
-(void)dealloc;
@end

