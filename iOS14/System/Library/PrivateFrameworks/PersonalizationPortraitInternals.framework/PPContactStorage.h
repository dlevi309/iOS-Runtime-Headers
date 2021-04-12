/*
* Generated on Thursday, January 14, 2021 at 2:25:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/


@protocol OS_dispatch_semaphore, OS_dispatch_queue, SGSuggestionsServiceContactsProtocol;
@class CNContactStore, NSObject, PPContactDiskCacheManager, PPMeCardCacheManager, SGSqlEntityStore, NSString, PPSQLDatabase;

@interface PPContactStorage : NSObject {

	CNContactStore* _contactsStore;
	NSObject*<OS_dispatch_semaphore> _concurrentContactQueryThrottleSem;
	NSObject*<OS_dispatch_queue> _concurrentContactQueryQueue;
	PPContactDiskCacheManager* _contactCacheManager;
	PPMeCardCacheManager* _meCardCacheManager;
	id<SGSuggestionsServiceContactsProtocol> _foundInAppsService;
	SGSqlEntityStore* _foundInAppsHarvestStore;
	NSString* _path;
	PPSQLDatabase* _db;
	BOOL _chineseBirthdayFound;

}
+(id)normalizeHandle:(id)arg1 ;
-(id)contactNameRecordsWithHistoryResult:(id)arg1 truncated:(BOOL*)arg2 error:(id*)arg3 ;
-(void)asyncFillResultsFromContactsWithQuery:(id)arg1 explanationSet:(id)arg2 group:(id)arg3 results:(id)arg4 ;
-(id)_contactsPhoneSearchWithQuery:(id)arg1 explanationSet:(id)arg2 error:(id*)arg3 ;
-(id)_namesRecordsForAllFoundInAppsContactsWithKeepGoingBlock:(/*^block*/id)arg1 ;
-(id)init;
-(id)_contactsEmailSearchWithQuery:(id)arg1 explanationSet:(id)arg2 error:(id*)arg3 ;
-(void)setChineseBirthdayFound:(BOOL)arg1 ;
-(BOOL)_addToCache:(id)arg1 records:(id)arg2 ;
-(id)contactsContactsWithQuery:(id)arg1 explanationSet:(id)arg2 error:(id*)arg3 ;
-(id)_contactsNameSearchWithQuery:(id)arg1 explanationSet:(id)arg2 error:(id*)arg3 ;
-(void)storeHandleSourceMapWithHandles:(id)arg1 sourceId:(long long)arg2 txnWitness:(id)arg3 ;
-(id)contactsChangeHistoryForClient:(id)arg1 error:(id*)arg2 ;
-(id)_contactsPostalAddressSearchWithQuery:(id)arg1 explanationSet:(id)arg2 error:(id*)arg3 ;
-(void)asyncFillResultsFromFoundInAppsWithQuery:(id)arg1 explanationSet:(id)arg2 group:(id)arg3 results:(id)arg4 ;
-(id)meCard;
-(unsigned long long)pruneOrphanedHandlesWithTxnWitness:(id)arg1 ;
-(id)_foundInAppsContactsQueryWithIdentifier:(id)arg1 explanationSet:(id)arg2 error:(id*)arg3 ;
-(id)_foundInAppsContactsQueryWithTerm:(id)arg1 explanationSet:(id)arg2 error:(id*)arg3 filter:(/*^block*/id)arg4 ;
-(id)_historyTokenForClientIdentifier:(id)arg1 ;
-(/*^block*/id)emailFilterWithQuery:(id)arg1 ;
-(/*^block*/id)postalAddressFilterWithQuery:(id)arg1 ;
-(void)loadChineseBirthdayFoundKVData;
-(BOOL)iterAllNameRecordsFromAllSourcesWithError:(id*)arg1 block:(/*^block*/id)arg2 ;
-(void)setChineseBirthdayFoundKVData;
-(BOOL)chineseBirthdayFound;
-(id)sourcesForContactHandle:(id)arg1 ;
-(long long)insertIfNeededAndFetchIdentifierWithHandle:(id)arg1 txnWitness:(id)arg2 ;
-(id)contactHandleSourceCountsWithMinimumSourceCount:(unsigned long long)arg1 ;
-(id)_nameRecordKeysToFetch;
-(id)_disksCacheHistoryRecordsWithError:(id*)arg1 ;
-(id)contactHandlesForTopics:(id)arg1 ;
-(id)_foundInAppsContactsWithQuery:(id)arg1 explanationSet:(id)arg2 error:(id*)arg3 ;
-(id)contactsWithQuery:(id)arg1 explanationSet:(id)arg2 timeoutSeconds:(id)arg3 error:(id*)arg4 ;
-(BOOL)_iterContactsNameRecordsForAllContactsFromSouceAndReplaceDiskCacheWithError:(id*)arg1 diskCache:(id)arg2 block:(/*^block*/id)arg3 ;
-(void)clearChangeHistoryForClient:(id)arg1 historyResult:(id)arg2 ;
-(id)_contactsContactsWithPredicate:(id)arg1 explanationSet:(id)arg2 error:(id*)arg3 ;
-(id)_waitForGroup:(id)arg1 results:(id)arg2 timeoutSeconds:(double)arg3 explanationSet:(id)arg4 ;
-(BOOL)_iterNameRecordsFromDiskCache:(id)arg1 error:(id*)arg2 block:(/*^block*/id)arg3 ;
-(void)_setHistoryToken:(id)arg1 clientIdentifier:(id)arg2 ;
-(id)initWithDatabase:(id)arg1 ;
-(id)_joinResults:(id)arg1 ;
-(BOOL)_iterContactsNameRecordsForAllContactsWithError:(id*)arg1 block:(/*^block*/id)arg2 ;
-(id)_waitForGroup:(id)arg1 results:(id)arg2 ;
-(/*^block*/id)phoneFilterWithQuery:(id)arg1 ;
-(/*^block*/id)nameFilterWithQuery:(id)arg1 ;
-(id)contactHandlesForSource:(id)arg1 ;
-(id)_contactsFullTextSearchWithQuery:(id)arg1 explanationSet:(id)arg2 error:(id*)arg3 filter:(/*^block*/id)arg4 ;
@end
