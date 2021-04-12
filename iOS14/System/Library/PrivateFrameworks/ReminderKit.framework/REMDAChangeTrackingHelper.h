/*
* Generated on Thursday, January 14, 2021 at 2:23:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
*/


@protocol REMDAAccountProviding;
@class NSString, REMChangeSet, REMChangeToken, REMStore, REMChangeTracking, REMObjectID, NSMutableDictionary, REMChangeTrackingState;

@interface REMDAChangeTrackingHelper : NSObject {

	NSString* _entityName;
	NSString* _clientName;
	id<REMDAAccountProviding> _account;
	REMChangeSet* _changeSet;
	REMChangeToken* _sinceToken;
	REMChangeToken* _upToToken;
	REMStore* _remStore;
	REMChangeTracking* _changeTracking;
	REMObjectID* _cached_remAccountObjectID;
	NSMutableDictionary* _cached_insertedModelObjectResultsByModelClassName;
	NSMutableDictionary* _cached_updatedModelObjectResultsByModelClassName;
	REMChangeToken* _cached_currentChangeToken;
	REMChangeTrackingState* _cached_currentTrackingState;

}

@property (nonatomic,retain) REMChangeSet * changeSet;                                                             //@synthesize changeSet=_changeSet - In the implementation block
@property (nonatomic,retain) REMChangeToken * sinceToken;                                                          //@synthesize sinceToken=_sinceToken - In the implementation block
@property (nonatomic,retain) REMChangeToken * upToToken;                                                           //@synthesize upToToken=_upToToken - In the implementation block
@property (nonatomic,retain) REMStore * remStore;                                                                  //@synthesize remStore=_remStore - In the implementation block
@property (nonatomic,retain) REMChangeTracking * changeTracking;                                                   //@synthesize changeTracking=_changeTracking - In the implementation block
@property (nonatomic,retain) REMObjectID * cached_remAccountObjectID;                                              //@synthesize cached_remAccountObjectID=_cached_remAccountObjectID - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * cached_insertedModelObjectResultsByModelClassName;              //@synthesize cached_insertedModelObjectResultsByModelClassName=_cached_insertedModelObjectResultsByModelClassName - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * cached_updatedModelObjectResultsByModelClassName;               //@synthesize cached_updatedModelObjectResultsByModelClassName=_cached_updatedModelObjectResultsByModelClassName - In the implementation block
@property (nonatomic,retain) REMChangeToken * cached_currentChangeToken;                                           //@synthesize cached_currentChangeToken=_cached_currentChangeToken - In the implementation block
@property (nonatomic,retain) REMChangeTrackingState * cached_currentTrackingState;                                 //@synthesize cached_currentTrackingState=_cached_currentTrackingState - In the implementation block
@property (nonatomic,retain) NSString * entityName;                                                                //@synthesize entityName=_entityName - In the implementation block
@property (nonatomic,retain) NSString * clientName;                                                                //@synthesize clientName=_clientName - In the implementation block
@property (nonatomic,readonly) id<REMDAAccountProviding> account;                                                  //@synthesize account=_account - In the implementation block
+(BOOL)shouldIgnoreChangeOfModelClassProperties:(Class)arg1 withChangeObject:(id)arg2 ;
-(void)setClientName:(NSString *)arg1 ;
-(id<REMDAAccountProviding>)account;
-(REMChangeSet *)changeSet;
-(NSString *)entityName;
-(NSString *)clientName;
-(id)currentChangeTokenWithError:(id*)arg1 ;
-(REMChangeTracking *)changeTracking;
-(void)setEntityName:(NSString *)arg1 ;
-(void)setChangeSet:(REMChangeSet *)arg1 ;
-(id)initWithREMDAAccount:(id)arg1 clientName:(id)arg2 withREMStore:(id)arg3 entityName:(id)arg4 ;
-(id)_rem_changeTracking:(id)arg1 ;
-(REMChangeToken *)sinceToken;
-(REMChangeToken *)cached_currentChangeToken;
-(void)setCached_currentChangeToken:(REMChangeToken *)arg1 ;
-(REMChangeTrackingState *)cached_currentTrackingState;
-(void)setCached_currentTrackingState:(REMChangeTrackingState *)arg1 ;
-(id)fetchAndInitializeChangeTrackingStateIfNeeded;
-(void)setSinceToken:(REMChangeToken *)arg1 ;
-(void)setCached_insertedModelObjectResultsByModelClassName:(NSMutableDictionary *)arg1 ;
-(void)setUpToToken:(REMChangeToken *)arg1 ;
-(void)setCached_updatedModelObjectResultsByModelClassName:(NSMutableDictionary *)arg1 ;
-(void)markChangesConsumed:(BOOL)arg1 ;
-(id)_cachedModeObjectResultsForModelClass:(Class)arg1 changeType:(long long)arg2 ;
-(long long)_changeTypeMaskFromChangeType:(long long)arg1 ;
-(id)_changedModelObjectsOfClass:(Class)arg1 ofChangeTypes:(long long)arg2 ;
-(id)_rem_accountObjectID;
-(void)_setCachedModeObjectResults:(id)arg1 forModelClass:(Class)arg2 changeType:(long long)arg3 ;
-(void)_handleLazyDeletionChange:(id)arg1 ofModelClass:(Class)arg2 forClientID:(id)arg3 deleteHandler:(/*^block*/id)arg4 undeleteHandler:(/*^block*/id)arg5 ;
-(id)_fetchModelObjectsOfClass:(Class)arg1 withObjectIDs:(id)arg2 ;
-(id)_fetchModelObjectOfClass:(Class)arg1 withObjectID:(id)arg2 includeLazyDeleteObjects:(BOOL)arg3 ;
-(NSMutableDictionary *)cached_insertedModelObjectResultsByModelClassName;
-(NSMutableDictionary *)cached_updatedModelObjectResultsByModelClassName;
-(REMObjectID *)cached_remAccountObjectID;
-(void)setCached_remAccountObjectID:(REMObjectID *)arg1 ;
-(void)markChangesConsumed;
-(id)initWithREMDAAccount:(id)arg1 clientName:(id)arg2 withREMStore:(id)arg3 ;
-(BOOL)compareCurrentChangeTokenToLastConsumedWithResult:(long long*)arg1 error:(id*)arg2 ;
-(id)fetchChangesSinceLastConsumed;
-(id)changedModelObjectsOfModelClass:(Class)arg1 ofChangeType:(long long)arg2 ;
-(id)changedIdentifiersOfModelClass:(Class)arg1 ofChangeType:(long long)arg2 ;
-(void)setRemStore:(REMStore *)arg1 ;
-(void)clearCachedModelObjectResultsForModelClass:(Class)arg1 ;
-(void)setChangeTracking:(REMChangeTracking *)arg1 ;
-(void)_debug_resetCaches;
-(REMStore *)remStore;
-(REMChangeToken *)upToToken;
@end

