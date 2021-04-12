/*
* Generated on Monday, March 1, 2021 at 2:33:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/


@protocol OS_dispatch_semaphore, OS_dispatch_queue, SGSuggestionsServiceContactsProtocol;
@class NSObject, CNContactStore, _PASLock;

@interface PPContactStorage : NSObject {

	NSObject*<OS_dispatch_semaphore> _concurrentContactQueryThrottleSem;
	NSObject*<OS_dispatch_queue> _concurrentContactQueryQueue;
	CNContactStore* _contactsStore;
	_PASLock* _diskCacheLock;
	id<SGSuggestionsServiceContactsProtocol> _foundInAppsService;

}
+(id)defaultStorage;
-(id)init;
-(id)_init;
-(id)contactsWithQuery:(id)arg1 explanationSet:(id)arg2 timeoutSeconds:(double)arg3 error:(id*)arg4 ;
-(id)_changeHistoryIdentifierForClient:(id)arg1 ;
-(id)contactsChangeHistoryForClient:(id)arg1 error:(id*)arg2 ;
-(BOOL)clearChangeHistoryForClient:(id)arg1 history:(id)arg2 ;
-(void)registerContactsChangeHistoryForClient:(id)arg1 ;
-(id)allNameRecordsFromAllSources;
-(id)contactNameRecordsWithHistory:(id)arg1 error:(id*)arg2 ;
-(void)_namesRecordsForAllFoundInAppsContactsWithCompletion:(/*^block*/id)arg1 ;
-(id)_nameRecordKeysToFetch;
-(id)_nameRecordFromCNContactChange:(id)arg1 ;
-(id)_cnNameRecordsForAllContacts;
-(id)_allCNNameRecordsFromDiskCache:(id)arg1 ;
-(id)_cnNameRecordsForAllContactsFromSource;
-(BOOL)_writeCNNameRecords:(id)arg1 history:(id)arg2 diskCache:(id)arg3 fullLoadFromSource:(BOOL)arg4 ;
-(id)contactsContactsWithQuery:(id)arg1 explanationSet:(id)arg2 error:(id*)arg3 ;
-(id)_contactsContactsWithPredicate:(id)arg1 explanationSet:(id)arg2 error:(id*)arg3 ;
-(id)_contactsFullTextSearchWithQuery:(id)arg1 explanationSet:(id)arg2 error:(id*)arg3 filter:(/*^block*/id)arg4 ;
-(id)_contactsNameSearchWithQuery:(id)arg1 explanationSet:(id)arg2 error:(id*)arg3 ;
-(id)_contactsEmailSearchWithQuery:(id)arg1 explanationSet:(id)arg2 error:(id*)arg3 ;
-(id)_contactsPhoneSearchWithQuery:(id)arg1 explanationSet:(id)arg2 error:(id*)arg3 ;
-(id)_contactsPostalAddressSearchWithQuery:(id)arg1 explanationSet:(id)arg2 error:(id*)arg3 ;
-(void)asyncFillResultsFromContactsWithQuery:(id)arg1 explanationSet:(id)arg2 group:(id)arg3 results:(id)arg4 ;
-(id)_foundInAppsContactsWithQuery:(id)arg1 explanationSet:(id)arg2 error:(id*)arg3 ;
-(id)_foundInAppsContactsQueryWithIdentifier:(id)arg1 explanationSet:(id)arg2 error:(id*)arg3 ;
-(id)_foundInAppsContactsQueryWithTerm:(id)arg1 explanationSet:(id)arg2 error:(id*)arg3 filter:(/*^block*/id)arg4 ;
-(void)asyncFillResultsFromFoundInAppsWithQuery:(id)arg1 explanationSet:(id)arg2 group:(id)arg3 results:(id)arg4 ;
-(id)_joinResults:(id)arg1 ;
-(id)_waitForGroup:(id)arg1 results:(id)arg2 ;
-(id)_waitForGroup:(id)arg1 results:(id)arg2 timeoutSeconds:(double)arg3 ;
-(/*^block*/id)emailFilterWithQuery:(id)arg1 ;
-(/*^block*/id)nameFilterWithQuery:(id)arg1 ;
-(/*^block*/id)phoneFilterWithQuery:(id)arg1 ;
-(/*^block*/id)postalAddressFilterWithQuery:(id)arg1 ;
@end

