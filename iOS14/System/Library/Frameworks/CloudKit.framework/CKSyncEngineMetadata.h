/*
* Generated on Thursday, January 14, 2021 at 2:21:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol OS_dispatch_queue;
@class CKServerChangeToken, NSObject, NSMutableSet, NSMutableDictionary, NSMutableOrderedSet, NSArray;

@interface CKSyncEngineMetadata : NSObject <NSSecureCoding> {

	BOOL _needsToFetchDatabaseChanges;
	BOOL _needsToSaveDatabaseSubscription;
	CKServerChangeToken* _serverChangeTokenForDatabase;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableSet* _zoneIDsNeedingToFetchChangesSet;
	NSMutableDictionary* _serverChangeTokensByZoneID;
	NSMutableDictionary* _zonesToSaveDictionary;
	NSMutableOrderedSet* _zoneIDsToDeleteSet;
	NSMutableOrderedSet* _pendingModificationsSet;
	NSMutableOrderedSet* _inFlightModificationsSet;
	unsigned long long _internalChangeCount;
	NSMutableOrderedSet* _fakeRecordIDsToSaveForSerializationTests;
	NSMutableOrderedSet* _fakeRecordIDsToDeleteForSerializationTests;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                                            //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSMutableSet * zoneIDsNeedingToFetchChangesSet;                                //@synthesize zoneIDsNeedingToFetchChangesSet=_zoneIDsNeedingToFetchChangesSet - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * serverChangeTokensByZoneID;                              //@synthesize serverChangeTokensByZoneID=_serverChangeTokensByZoneID - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * zonesToSaveDictionary;                                   //@synthesize zonesToSaveDictionary=_zonesToSaveDictionary - In the implementation block
@property (nonatomic,retain) NSMutableOrderedSet * zoneIDsToDeleteSet;                                      //@synthesize zoneIDsToDeleteSet=_zoneIDsToDeleteSet - In the implementation block
@property (nonatomic,retain) NSMutableOrderedSet * pendingModificationsSet;                                 //@synthesize pendingModificationsSet=_pendingModificationsSet - In the implementation block
@property (nonatomic,retain) NSMutableOrderedSet * inFlightModificationsSet;                                //@synthesize inFlightModificationsSet=_inFlightModificationsSet - In the implementation block
@property (assign,nonatomic) unsigned long long internalChangeCount;                                        //@synthesize internalChangeCount=_internalChangeCount - In the implementation block
@property (nonatomic,retain) NSMutableOrderedSet * fakeRecordIDsToSaveForSerializationTests;                //@synthesize fakeRecordIDsToSaveForSerializationTests=_fakeRecordIDsToSaveForSerializationTests - In the implementation block
@property (nonatomic,retain) NSMutableOrderedSet * fakeRecordIDsToDeleteForSerializationTests;              //@synthesize fakeRecordIDsToDeleteForSerializationTests=_fakeRecordIDsToDeleteForSerializationTests - In the implementation block
@property (nonatomic,readonly) unsigned long long changeCount; 
@property (assign,nonatomic) BOOL needsToFetchDatabaseChanges;                                              //@synthesize needsToFetchDatabaseChanges=_needsToFetchDatabaseChanges - In the implementation block
@property (nonatomic,retain) CKServerChangeToken * serverChangeTokenForDatabase;                            //@synthesize serverChangeTokenForDatabase=_serverChangeTokenForDatabase - In the implementation block
@property (assign,nonatomic) BOOL needsToSaveDatabaseSubscription;                                          //@synthesize needsToSaveDatabaseSubscription=_needsToSaveDatabaseSubscription - In the implementation block
@property (nonatomic,readonly) NSArray * zoneIDsNeedingToFetchChanges; 
@property (nonatomic,readonly) NSArray * zonesToSave; 
@property (nonatomic,readonly) NSArray * zoneIDsToDelete; 
@property (nonatomic,readonly) NSArray * pendingRecordModifications; 
@property (nonatomic,readonly) NSArray * inFlightRecordModifications; 
+(BOOL)supportsSecureCoding;
-(unsigned long long)changeCount;
-(void)setNeedsToSave:(BOOL)arg1 zones:(id)arg2 ;
-(id)CKDescriptionPropertiesWithPublic:(BOOL)arg1 private:(BOOL)arg2 shouldExpand:(BOOL)arg3 ;
-(id)serverChangeTokenForRecordZoneID:(id)arg1 ;
-(NSMutableSet *)zoneIDsNeedingToFetchChangesSet;
-(void)setInFlightModificationsSet:(NSMutableOrderedSet *)arg1 ;
-(id)init;
-(NSArray *)zoneIDsNeedingToFetchChanges;
-(id)recordIDsToDelete;
-(void)setZonesToSaveDictionary:(NSMutableDictionary *)arg1 ;
-(void)setZoneIDsToDeleteSet:(NSMutableOrderedSet *)arg1 ;
-(BOOL)needsToSaveDatabaseSubscription;
-(void)encodeWithCoder:(id)arg1 ;
-(NSMutableDictionary *)zonesToSaveDictionary;
-(id)pendingRecordIDsWithModificationType:(long long)arg1 ;
-(BOOL)needsToSaveZone:(id)arg1 ;
-(NSMutableOrderedSet *)fakeRecordIDsToSaveForSerializationTests;
-(NSArray *)zonesToSave;
-(id)initWithData:(id)arg1 ;
-(void)setNeedsToFetchChanges:(BOOL)arg1 forRecordZoneID:(id)arg2 ;
-(void)setNeedsToFetchDatabaseChanges:(BOOL)arg1 ;
-(void)commonInit;
-(void)setFakeRecordIDsToSaveForSerializationTests:(NSMutableOrderedSet *)arg1 ;
-(NSMutableDictionary *)serverChangeTokensByZoneID;
-(BOOL)needsToDeleteZoneID:(id)arg1 ;
-(NSMutableOrderedSet *)fakeRecordIDsToDeleteForSerializationTests;
-(NSArray *)zoneIDsToDelete;
-(id)description;
-(BOOL)needsToFetchChangesForZoneID:(id)arg1 ;
-(void)setServerChangeTokensByZoneID:(NSMutableDictionary *)arg1 ;
-(void)setServerChangeTokenForDatabase:(CKServerChangeToken *)arg1 ;
-(void)setNeedsToSaveDatabaseSubscription:(BOOL)arg1 ;
-(void)setInternalChangeCount:(unsigned long long)arg1 ;
-(void)removePendingRecordModifications:(id)arg1 ;
-(NSArray *)inFlightRecordModifications;
-(NSArray *)pendingRecordModifications;
-(void)setZoneIDsNeedingToFetchChangesSet:(NSMutableSet *)arg1 ;
-(void)markRecordModifications:(id)arg1 inFlight:(BOOL)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setFakeRecordIDsToDeleteForSerializationTests:(NSMutableOrderedSet *)arg1 ;
-(unsigned long long)internalChangeCount;
-(NSMutableOrderedSet *)zoneIDsToDeleteSet;
-(BOOL)needsToFetchDatabaseChanges;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSMutableOrderedSet *)pendingModificationsSet;
-(void)setNeedsToDelete:(BOOL)arg1 zoneIDs:(id)arg2 ;
-(void)setServerChangeToken:(id)arg1 forRecordZoneID:(id)arg2 ;
-(id)recordIDsToSave;
-(void)setPendingModificationsSet:(NSMutableOrderedSet *)arg1 ;
-(NSMutableOrderedSet *)inFlightModificationsSet;
-(void)addPendingRecordModifications:(id)arg1 ;
-(CKServerChangeToken *)serverChangeTokenForDatabase;
-(void)removeInFlightRecordModifications:(id)arg1 ;
-(void)getDataRepresentation:(/*^block*/id)arg1 ;
@end

