/*
* Generated on Thursday, January 14, 2021 at 2:20:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/


@protocol CNCSSearchableIndex, CNSpotlightIndexingLogger;
@class CNContactStore, CNIndexClientState;

@interface CNIndexRequestHandler : NSObject {

	BOOL _isFullSyncNeeded;
	CNContactStore* _contactStore;
	id<CNCSSearchableIndex> _index;
	id<CNSpotlightIndexingLogger> _logger;
	unsigned long long _batchSize;
	CNIndexClientState* _clientState;

}
-(id)initWithContactStore:(id)arg1 searchableIndex:(id)arg2 logger:(id)arg3 batchSize:(unsigned long long)arg4 ;
-(void)performIndexing;
-(id)verifyIndexLoggingSummary:(BOOL)arg1 error:(id*)arg2 ;
-(void)reindexSearchableItemsWithIdentifiers:(id)arg1 ;
-(void)reindexAllSearchableItems;
-(id)initWithContactStore:(id)arg1 ;
@end

