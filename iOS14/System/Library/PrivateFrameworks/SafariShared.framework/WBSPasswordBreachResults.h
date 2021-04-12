/*
* Generated on Thursday, January 14, 2021 at 2:23:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/


#import <SafariShared/SafariShared-Structs.h>
@class WBSPasswordBreachContext, NSMutableDictionary, NSMutableSet;

@interface WBSPasswordBreachResults : NSObject {

	os_unfair_lock_s _lock;
	WBSPasswordBreachContext* _context;
	NSMutableDictionary* _resultRecordsByPersistentIdentifier;
	NSMutableSet* _recentlyBreachedPersistentIdentifiers;

}
-(id)initWithContext:(id)arg1 ;
-(void)_restoreResultsFromPersistentStoreIfNecessary;
-(void)_saveResultsToPersistentStore;
-(void)clearAllResultsSynchronously;
-(id)resultRecordsForQueries:(id)arg1 ;
-(void)addResultRecords:(id)arg1 ;
-(id)recentlyBreachedResultRecords;
-(void)clearRecentlyBreachedResultRecords;
@end

