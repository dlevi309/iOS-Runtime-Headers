/*
* Generated on Monday, March 1, 2021 at 2:32:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/NewsCore-Structs.h>
#import <libobjc.A.dylib/FCCacheCoordinatorDelegate.h>
#import <libobjc.A.dylib/FCFetchCoordinatorDelegate.h>
#import <libobjc.A.dylib/FCCacheFlushing.h>
#import <libobjc.A.dylib/FCJSONEncodableObjectProviding.h>

@class NSArray, NSDictionary, NFUnfairLock, FCCKContentDatabase, NSString, FCKeyValueStore, FCCacheCoordinator, FCFetchCoordinator, FCThreadSafeMutableDictionary;

@interface FCRecordSource : NSObject <FCCacheCoordinatorDelegate, FCFetchCoordinatorDelegate, FCCacheFlushing, FCJSONEncodableObjectProviding> {

	os_unfair_lock_s _derivedKeysLock;
	NSArray* _desiredKeys;
	NSDictionary* _localizedKeysByOriginalKey;
	NSDictionary* _experimentalizedKeysByOriginalKey;
	NSDictionary* _localizedExperimentalizedKeysByOriginalKey;
	NSDictionary* _localizedLanguageSpecificKeysByOriginalKey;
	NFUnfairLock* _initializationLock;
	FCCKContentDatabase* _contentDatabase;
	NSString* _contentDirectory;
	FCKeyValueStore* _localStore;
	FCCacheCoordinator* _cacheCoordinator;
	FCFetchCoordinator* _fetchCoordinator;
	FCThreadSafeMutableDictionary* _fetchErrorsByKey;
	NSString* _experimentalizableFieldsPostfix;
	NSString* _activeTreatmentID;

}

@property (nonatomic,retain) NFUnfairLock * initializationLock;                                        //@synthesize initializationLock=_initializationLock - In the implementation block
@property (nonatomic,readonly) FCCKContentDatabase * contentDatabase;                                  //@synthesize contentDatabase=_contentDatabase - In the implementation block
@property (nonatomic,readonly) NSString * contentDirectory;                                            //@synthesize contentDirectory=_contentDirectory - In the implementation block
@property (nonatomic,readonly) FCKeyValueStore * localStore;                                           //@synthesize localStore=_localStore - In the implementation block
@property (nonatomic,readonly) FCCacheCoordinator * cacheCoordinator;                                  //@synthesize cacheCoordinator=_cacheCoordinator - In the implementation block
@property (nonatomic,readonly) FCFetchCoordinator * fetchCoordinator;                                  //@synthesize fetchCoordinator=_fetchCoordinator - In the implementation block
@property (nonatomic,readonly) os_unfair_lock_s derivedKeysLock;                                       //@synthesize derivedKeysLock=_derivedKeysLock - In the implementation block
@property (nonatomic,readonly) FCThreadSafeMutableDictionary * fetchErrorsByKey;                       //@synthesize fetchErrorsByKey=_fetchErrorsByKey - In the implementation block
@property (nonatomic,readonly) NSString * experimentalizableFieldsPostfix;                             //@synthesize experimentalizableFieldsPostfix=_experimentalizableFieldsPostfix - In the implementation block
@property (nonatomic,readonly) NSString * activeTreatmentID;                                           //@synthesize activeTreatmentID=_activeTreatmentID - In the implementation block
@property (nonatomic,readonly) NSArray * nonLocalizableKeys; 
@property (nonatomic,readonly) NSArray * localizableKeys; 
@property (nonatomic,readonly) NSArray * alwaysLocalizedKeys; 
@property (nonatomic,readonly) NSArray * experimentalizableKeys; 
@property (nonatomic,readonly) NSArray * localizableExperimentalizableKeys; 
@property (nonatomic,readonly) NSArray * localizableLanguageSpecificKeys; 
@property (nonatomic,readonly) NSDictionary * localizedKeysByOriginalKey;                              //@synthesize localizedKeysByOriginalKey=_localizedKeysByOriginalKey - In the implementation block
@property (nonatomic,readonly) NSDictionary * experimentalizedKeysByOriginalKey;                       //@synthesize experimentalizedKeysByOriginalKey=_experimentalizedKeysByOriginalKey - In the implementation block
@property (nonatomic,readonly) NSDictionary * localizedExperimentalizedKeysByOriginalKey;              //@synthesize localizedExperimentalizedKeysByOriginalKey=_localizedExperimentalizedKeysByOriginalKey - In the implementation block
@property (nonatomic,readonly) NSDictionary * localizedLanguageSpecificKeysByOriginalKey;              //@synthesize localizedLanguageSpecificKeysByOriginalKey=_localizedLanguageSpecificKeysByOriginalKey - In the implementation block
@property (nonatomic,readonly) NSArray * desiredKeys;                                                  //@synthesize desiredKeys=_desiredKeys - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)identifierFromCKRecord:(id)arg1 ;
+(BOOL)supportsDeletions;
+(id)defaultCachePolicy;
+(id)canaryRecordName;
+(id)changeTagFromCKRecord:(id)arg1 ;
+(id)modificationDateFromCKRecord:(id)arg1 ;
-(id)init;
-(id)recordType;
-(id)storeFilename;
-(NSArray *)desiredKeys;
-(FCKeyValueStore *)localStore;
-(NSDictionary *)localizedKeysByOriginalKey;
-(int)pbRecordType;
-(NSArray *)nonLocalizableKeys;
-(NSArray *)localizableKeys;
-(NSArray *)alwaysLocalizedKeys;
-(unsigned long long)storeVersion;
-(unsigned long long)lowThresholdDataSizeLimit;
-(unsigned long long)highThresholdDataSizeLimit;
-(id)recordIDPrefix;
-(id)recordFromCKRecord:(id)arg1 base:(id)arg2 ;
-(id)cachedRecordsWithIDs:(id)arg1 ;
-(id)jsonEncodableObject;
-(FCCKContentDatabase *)contentDatabase;
-(id)fetchOperationForRecordsWithIDs:(id)arg1 ;
-(id)initWithContentDatabase:(id)arg1 contentDirectory:(id)arg2 experimentalizableFieldsPostfix:(id)arg3 activeTreatmentID:(id)arg4 ;
-(void)_deriveDesiredKeysIfNeeded;
-(id)_localizedKeysByOriginalKeyForContentStoreFrontID:(id)arg1 ;
-(NSArray *)experimentalizableKeys;
-(id)_experimentalizedKeysByOriginalKeyForExperimentPostfix:(id)arg1 ;
-(NSArray *)localizableExperimentalizableKeys;
-(id)_localizedExperimentalizedKeysByOriginalKeyForContentStoreFrontID:(id)arg1 experimentPostfix:(id)arg2 ;
-(NSArray *)localizableLanguageSpecificKeys;
-(id)_localizedLanguageSpecificKeysByOriginalKeyForContentStoreFrontID:(id)arg1 languageCode:(id)arg2 ;
-(void)_prepareForUse;
-(FCCacheCoordinator *)cacheCoordinator;
-(id)_saveCKRecordsWithWriteLock:(id)arg1 updateFetchDateForRecordIdentifiers:(id)arg2 fetchContext:(id)arg3 ;
-(id)_recordBaseFromCKRecord:(id)arg1 ;
-(id)_deleteRecordsWithWriteLockWithIDs:(id)arg1 ;
-(FCThreadSafeMutableDictionary *)fetchErrorsByKey;
-(id)_faultableRecordsWithIdentifiers:(id)arg1 ;
-(id)_ckRecordIDFromIdentifier:(id)arg1 ;
-(id)_identifierFromCKRecordID:(id)arg1 ;
-(id)saveRecords:(id)arg1 ;
-(NFUnfairLock *)initializationLock;
-(void)_initializeStore;
-(NSString *)contentDirectory;
-(void)_deriveDesiredKeys;
-(NSString *)experimentalizableFieldsPostfix;
-(id)_desiredKeysForContentStoreFrontID:(id)arg1 experimentPostfix:(id)arg2 languageCode:(id)arg3 ;
-(unsigned long long)cacheCoordinatorCurrentSizeWithReadLock:(id)arg1 ;
-(void)cacheCoordinator:(id)arg1 flushKeysWithWriteLock:(id)arg2 ;
-(void)fetchCoordinator:(id)arg1 filterKeysToFetch:(id)arg2 isFirstAttempt:(BOOL)arg3 context:(id)arg4 ;
-(id)fetchCoordinator:(id)arg1 fetchOperationForKeys:(id)arg2 context:(id)arg3 qualityOfService:(long long)arg4 relativePriority:(long long)arg5 ;
-(void)fetchCoordinator:(id)arg1 addFetchOperation:(id)arg2 context:(id)arg3 ;
-(void)enableFlushingWithFlushingThreshold:(unsigned long long)arg1 ;
-(id)initWithContentDatabase:(id)arg1 contentDirectory:(id)arg2 ;
-(id)keyValueRepresentationOfRecord:(id)arg1 ;
-(NSDictionary *)experimentalizedKeysByOriginalKey;
-(NSDictionary *)localizedExperimentalizedKeysByOriginalKey;
-(NSDictionary *)localizedLanguageSpecificKeysByOriginalKey;
-(id)fetchOperationForRecordsWithIDs:(id)arg1 ignoreCacheForRecordIDs:(id)arg2 ;
-(id)convertRecords:(id)arg1 ;
-(id)deleteRecordsWithIDs:(id)arg1 ;
-(void)updateFetchDateForRecordIDs:(id)arg1 ;
-(BOOL)isRecordStale:(id)arg1 withCachePolicy:(id)arg2 ;
-(BOOL)recognizesRecordID:(id)arg1 ;
-(id)_fetchErrorForKey:(id)arg1 ;
-(void)t_startOverridingExperimentalizableFieldsPostfix:(id)arg1 treatmentID:(id)arg2 ;
-(void)t_stopOverridingExperimentalizableFieldsPostfixAndTreatmentID;
-(void)setInitializationLock:(NFUnfairLock *)arg1 ;
-(FCFetchCoordinator *)fetchCoordinator;
-(os_unfair_lock_s)derivedKeysLock;
-(NSString *)activeTreatmentID;
@end

