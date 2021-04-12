/*
* Generated on Monday, March 1, 2021 at 2:31:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
*/


@protocol REMDAAccountProviding;
@class REMChangeSet, REMChangeToken, REMStore, REMChangeTracking, REMObjectID, NSMutableDictionary;

@interface REMDAChangeTrackingHelper : NSObject {

	id<REMDAAccountProviding> _account;
	REMChangeSet* _changeSet;
	REMChangeToken* _sinceToken;
	REMChangeToken* _upToToken;
	REMStore* _remStore;
	REMChangeTracking* _changeTracking;
	REMObjectID* _cached_remAccountObjectID;
	NSMutableDictionary* _cached_insertedModelObjectResultsByModelClassName;
	NSMutableDictionary* _cached_updatedModelObjectResultsByModelClassName;

}

@property (nonatomic,retain) REMChangeSet * changeSet;                                                             //@synthesize changeSet=_changeSet - In the implementation block
@property (nonatomic,retain) REMChangeToken * sinceToken;                                                          //@synthesize sinceToken=_sinceToken - In the implementation block
@property (nonatomic,retain) REMChangeToken * upToToken;                                                           //@synthesize upToToken=_upToToken - In the implementation block
@property (nonatomic,retain) REMStore * remStore;                                                                  //@synthesize remStore=_remStore - In the implementation block
@property (nonatomic,retain) REMChangeTracking * changeTracking;                                                   //@synthesize changeTracking=_changeTracking - In the implementation block
@property (nonatomic,retain) REMObjectID * cached_remAccountObjectID;                                              //@synthesize cached_remAccountObjectID=_cached_remAccountObjectID - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * cached_insertedModelObjectResultsByModelClassName;              //@synthesize cached_insertedModelObjectResultsByModelClassName=_cached_insertedModelObjectResultsByModelClassName - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * cached_updatedModelObjectResultsByModelClassName;               //@synthesize cached_updatedModelObjectResultsByModelClassName=_cached_updatedModelObjectResultsByModelClassName - In the implementation block
@property (nonatomic,readonly) id<REMDAAccountProviding> account;                                                  //@synthesize account=_account - In the implementation block
+(BOOL)shouldIgnoreChangeOfModelClassProperties:(Class)arg1 withChangeObject:(id)arg2 ;
-(id<REMDAAccountProviding>)account;
-(REMChangeSet *)changeSet;
-(void)setChangeSet:(REMChangeSet *)arg1 ;
-(REMChangeTracking *)changeTracking;
-(id)_rem_changeTracking;
-(id)fetchAndInitializeChangeTrackingStateIfNeeded;
-(void)setSinceToken:(REMChangeToken *)arg1 ;
-(void)setCached_insertedModelObjectResultsByModelClassName:(NSMutableDictionary *)arg1 ;
-(void)setCached_updatedModelObjectResultsByModelClassName:(NSMutableDictionary *)arg1 ;
-(void)setUpToToken:(REMChangeToken *)arg1 ;
-(REMChangeToken *)upToToken;
-(id)_rem_changeTrackingClientName;
-(REMChangeToken *)sinceToken;
-(id)_cachedModeObjectResultsForModelClass:(Class)arg1 changeType:(long long)arg2 ;
-(long long)_changeTypeMaskFromChangeType:(long long)arg1 ;
-(id)_changedModelObjectsOfClass:(Class)arg1 ofChangeTypes:(long long)arg2 ;
-(void)_setCachedModeObjectResults:(id)arg1 forModelClass:(Class)arg2 changeType:(long long)arg3 ;
-(id)_rem_accountObjectID;
-(void)_handleLazyDeletionChange:(id)arg1 ofModelClass:(Class)arg2 forClientID:(id)arg3 deleteHandler:(/*^block*/id)arg4 undeleteHandler:(/*^block*/id)arg5 ;
-(id)_fetchModelObjectsOfClass:(Class)arg1 withObjectIDs:(id)arg2 ;
-(id)_fetchModelObjectOfClass:(Class)arg1 withObjectID:(id)arg2 includeMarkedForDelete:(BOOL)arg3 ;
-(REMStore *)remStore;
-(NSMutableDictionary *)cached_insertedModelObjectResultsByModelClassName;
-(NSMutableDictionary *)cached_updatedModelObjectResultsByModelClassName;
-(REMObjectID *)cached_remAccountObjectID;
-(void)setCached_remAccountObjectID:(REMObjectID *)arg1 ;
-(id)initWithREMDAAccount:(id)arg1 withREMStore:(id)arg2 ;
-(id)fetchChangesSinceLastConsumed;
-(void)markChangesConsumed;
-(id)changedModelObjectsOfModelClass:(Class)arg1 ofChangeType:(long long)arg2 ;
-(id)changedIdentifiersOfModelClass:(Class)arg1 ofChangeType:(long long)arg2 ;
-(void)clearCachedModelObjectResultsForModelClass:(Class)arg1 ;
-(void)setRemStore:(REMStore *)arg1 ;
-(void)setChangeTracking:(REMChangeTracking *)arg1 ;
@end

