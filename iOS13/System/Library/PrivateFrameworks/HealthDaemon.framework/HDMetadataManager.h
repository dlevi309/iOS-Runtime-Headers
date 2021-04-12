/*
* Generated on Monday, March 1, 2021 at 2:34:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@class HDProfile, HDDatabaseValueCache;

@interface HDMetadataManager : NSObject {

	HDProfile* _profile;
	HDDatabaseValueCache* _keyEntityCache;
	HDDatabaseValueCache* _keyCache;

}
+(Class)_metadataPredicateClassForKey:(id)arg1 ;
-(id)initWithProfile:(id)arg1 ;
-(BOOL)insertMetadata:(id)arg1 forObjectID:(id)arg2 sourceID:(id)arg3 externalSyncObjectCode:(long long)arg4 objectDeleted:(BOOL)arg5 error:(id*)arg6 ;
-(id)metadataForObjectID:(long long)arg1 baseMetadata:(id)arg2 keyFilter:(/*^block*/id)arg3 statement:(id)arg4 error:(id*)arg5 ;
-(BOOL)insertMetadata:(id)arg1 forObjectID:(id)arg2 sourceID:(id)arg3 externalSyncObjectCode:(long long)arg4 objectDeleted:(BOOL)arg5 database:(id)arg6 error:(id*)arg7 ;
-(id)predicateWithMetadataKey:(id)arg1 allowedValues:(id)arg2 ;
-(id)predicateWithMetadataKey:(id)arg1 value:(id)arg2 operatorType:(unsigned long long)arg3 ;
-(id)predicateWithMetadataKey:(id)arg1 exists:(BOOL)arg2 ;
-(id)_metadataForObjectID:(long long)arg1 baseMetadata:(id)arg2 keyFilter:(/*^block*/id)arg3 statement:(id)arg4 error:(id*)arg5 ;
-(id)_externalSyncMetadataForObjectID:(long long)arg1 baseMetadata:(id)arg2 keyFilter:(/*^block*/id)arg3 database:(id)arg4 error:(id*)arg5 ;
-(id)_keyForKeyID:(id)arg1 database:(id)arg2 error:(id*)arg3 ;
-(void)_insertDerivedMetadataforKey:(id)arg1 value:(id)arg2 filteredAddBlock:(/*^block*/id)arg3 ;
-(BOOL)_insertMetadata:(id)arg1 forObjectID:(id)arg2 database:(id)arg3 error:(id*)arg4 ;
-(BOOL)_insertExternalSyncMetadata:(id)arg1 forObjectID:(id)arg2 sourceID:(id)arg3 externalSyncObjectCode:(long long)arg4 objectDeleted:(BOOL)arg5 database:(id)arg6 error:(id*)arg7 ;
-(BOOL)_skipInsertOfKey:(id)arg1 metadata:(id)arg2 ;
-(id)_keyEntityForKey:(id)arg1 createIfNecessary:(BOOL)arg2 database:(id)arg3 error:(id*)arg4 ;
-(id)_ignoredInsertedMetadataKeys;
-(id)metadataForObjectID:(long long)arg1 keyFilter:(/*^block*/id)arg2 error:(id*)arg3 ;
-(id)rawMetadataForObject:(id)arg1 error:(id*)arg2 ;
@end

