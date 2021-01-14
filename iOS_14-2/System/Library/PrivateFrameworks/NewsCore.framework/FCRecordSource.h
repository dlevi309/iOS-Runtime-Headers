/*
* Generated on Thursday, January 14, 2021 at 2:21:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)defaultCachePolicy;
+(id)changeTagFromCKRecord:(id)arg1 ;
+(id)canaryRecordName;
+(id)identifierFromCKRecord:(id)arg1 ;
+(id)modificationDateFromCKRecord:(id)arg1 ;
+(BOOL)supportsDeletions;
-(FCKeyValueStore *)localStore;
-(unsigned long long)storeVersion;
-(NSArray *)experimentalizableKeys;
-(id)recordFromCKRecord:(id)arg1 base:(id)arg2 ;
-(id)init;
-(void)enableFlushingWithFlushingThreshold:(unsigned long long)arg1 ;
-(unsigned long long)lowThresholdDataSizeLimit;
-(id)recordType;
-(FCCKContentDatabase *)contentDatabase;
-(id)storeFilename;
-(id)jsonEncodableObject;
-(NSArray *)alwaysLocalizedKeys;
-(id)fetchOperationForRecordsWithIDs:(id)arg1 ;
-(id)saveRecords:(id)arg1 ;
-(NSArray *)localizableExperimentalizableKeys;
-(FCThreadSafeMutableDictionary *)fetchErrorsByKey;
-(void)_deriveDesiredKeysIfNeeded;
-(id)_localizedKeysByOriginalKeyForContentStoreFrontID:(id)arg1 ;
-(id)_experimentalizedKeysByOriginalKeyForExperimentPostfix:(id)arg1 ;
-(id)_localizedExperimentalizedKeysByOriginalKeyForContentStoreFrontID:(id)arg1 experimentPostfix:(id)arg2 ;
-(id)_recordBaseFromCKRecord:(id)arg1 ;
-(id)_localizedLanguageSpecificKeysByOriginalKeyForContentStoreFrontID:(id)arg1 languageCode:(id)arg2 ;
-(id)_deleteRecordsWithWriteLockWithIDs:(id)arg1 ;
-(id)_saveCKRecordsWithWriteLock:(id)arg1 updateFetchDateForRecordIdentifiers:(id)arg2 fetchContext:(id)arg3 ;
-(id)_faultableRecordsWithIdentifiers:(id)arg1 ;
-(id)_ckRecordIDFromIdentifier:(id)arg1 ;
-(id)_identifierFromCKRecordID:(id)arg1 ;
-(void)_initializeStore;
-(void)_deriveDesiredKeys;
-(NSString *)experimentalizableFieldsPostfix;
-(id)_desiredKeysForContentStoreFrontID:(id)arg1 experimentPostfix:(id)arg2 languageCode:(id)arg3 ;
-(id)initWithContentDatabase:(id)arg1 contentDirectory:(id)arg2 ;
-(id)keyValueRepresentationOfRecord:(id)arg1 ;
-(NSDictionary *)experimentalizedKeysByOriginalKey;
-(NSDictionary *)localizedExperimentalizedKeysByOriginalKey;
-(id)convertRecords:(id)arg1 ;
-(NSDictionary *)localizedLanguageSpecificKeysByOriginalKey;
-(id)fetchOperationForRecordsWithIDs:(id)arg1 ignoreCacheForRecordIDs:(id)arg2 ;
-(id)deleteRecordsWithIDs:(id)arg1 ;
-(os_unfair_lock_s)derivedKeysLock;
-(void)updateFetchDateForRecordIDs:(id)arg1 ;
-(BOOL)isRecordStale:(id)arg1 withCachePolicy:(id)arg2 ;
-(BOOL)recognizesRecordID:(id)arg1 ;
-(id)_fetchErrorForKey:(id)arg1 ;
-(void)setInitializationLock:(NFUnfairLock *)arg1 ;
-(void)t_startOverridingExperimentalizableFieldsPostfix:(id)arg1 treatmentID:(id)arg2 ;
-(void)t_stopOverridingExperimentalizableFieldsPostfixAndTreatmentID;
-(NSString *)activeTreatmentID;
-(NFUnfairLock *)initializationLock;
-(unsigned long long)cacheCoordinatorCurrentSizeWithReadLock:(id)arg1 ;
-(id)recordIDPrefix;
-(void)_prepareForUse;
-(int)pbRecordType;
-(id)fetchCoordinator:(id)arg1 fetchOperationForKeys:(id)arg2 context:(id)arg3 qualityOfService:(long long)arg4 relativePriority:(long long)arg5 ;
-(NSArray *)desiredKeys;
-(void)cacheCoordinator:(id)arg1 flushKeysWithWriteLock:(id)arg2 ;
-(NSString *)contentDirectory;
-(FCCacheCoordinator *)cacheCoordinator;
-(void)fetchCoordinator:(id)arg1 addFetchOperation:(id)arg2 context:(id)arg3 ;
-(FCFetchCoordinator *)fetchCoordinator;
-(NSArray *)localizableKeys;
-(NSDictionary *)localizedKeysByOriginalKey;
-(id)initWithContentDatabase:(id)arg1 contentDirectory:(id)arg2 experimentalizableFieldsPostfix:(id)arg3 activeTreatmentID:(id)arg4 ;
-(void)fetchCoordinator:(id)arg1 filterKeysToFetch:(id)arg2 isFirstAttempt:(BOOL)arg3 context:(id)arg4 ;
-(NSArray *)localizableLanguageSpecificKeys;
-(id)cachedRecordsWithIDs:(id)arg1 ;
-(unsigned long long)highThresholdDataSizeLimit;
-(NSArray *)nonLocalizableKeys;
@end

