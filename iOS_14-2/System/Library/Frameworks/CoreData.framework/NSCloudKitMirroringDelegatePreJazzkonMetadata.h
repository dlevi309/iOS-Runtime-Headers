/*
* Generated on Thursday, January 14, 2021 at 2:21:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/


@class NSPersistentStore, NSString, NSDictionary, NSPersistentHistoryToken;

@interface NSCloudKitMirroringDelegatePreJazzkonMetadata : NSObject {

	NSPersistentStore* _store;
	BOOL _loaded;
	BOOL _hasChanges;
	BOOL _hasInitializedZone;
	BOOL _hasInitializedZoneSubscription;
	BOOL _hasInitializedDatabaseSubscription;
	NSString* _ckIdentityRecordName;
	BOOL _hasCheckedCKIdentity;
	NSDictionary* _keyToPreviousServerChangeToken;
	NSPersistentHistoryToken* _lastHistoryToken;

}

@property (nonatomic,readonly) BOOL loaded;                                                                //@synthesize loaded=_loaded - In the implementation block
@property (nonatomic,readonly) BOOL hasChanges;                                                            //@synthesize hasChanges=_hasChanges - In the implementation block
@property (assign,nonatomic) BOOL hasInitializedZone; 
@property (assign,nonatomic) BOOL hasInitializedZoneSubscription; 
@property (assign,nonatomic) BOOL hasInitializedDatabaseSubscription; 
@property (setter=setCKIdentityRecordName:,nonatomic,retain) NSString * ckIdentityRecordName; 
@property (assign,nonatomic) BOOL hasCheckedCKIdentity; 
@property (nonatomic,retain) NSPersistentHistoryToken * lastHistoryToken; 
+(id)allDefaultsKeys;
-(BOOL)load:(id*)arg1 ;
-(BOOL)save:(id*)arg1 ;
-(NSPersistentHistoryToken *)lastHistoryToken;
-(BOOL)loaded;
-(id)initWithStore:(id)arg1 ;
-(id)description;
-(BOOL)hasChanges;
-(void)setLastHistoryToken:(NSPersistentHistoryToken *)arg1 ;
-(NSString *)ckIdentityRecordName;
-(id)changeTokenForDatabaseScope:(long long)arg1 ;
-(BOOL)hasInitializedDatabaseSubscription;
-(BOOL)hasInitializedZoneSubscription;
-(id)changeTokenForZoneWithID:(id)arg1 inDatabaseWithScope:(long long)arg2 ;
-(BOOL)hasCheckedCKIdentity;
-(id)cliDescription;
-(BOOL)updateStoreMetadata:(id*)arg1 ;
-(BOOL)hasInitializedZone;
-(void)setHasInitializedZone:(BOOL)arg1 ;
-(void)setHasInitializedZoneSubscription:(BOOL)arg1 ;
-(void)setCKIdentityRecordName:(id)arg1 ;
-(void)setHasInitializedDatabaseSubscription:(BOOL)arg1 ;
-(void)setHasCheckedCKIdentity:(BOOL)arg1 ;
-(id)changeTokenForDatabase:(id)arg1 ;
-(id)changeTokenForZoneWithID:(id)arg1 inDatabase:(id)arg2 ;
-(void)setChangeToken:(id)arg1 forZoneWithID:(id)arg2 inDatabase:(id)arg3 ;
-(unsigned long long)countChangeTokens;
-(void)setChangeToken:(id)arg1 forDatabase:(id)arg2 ;
-(void)purgeCachedChangeTokens;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

