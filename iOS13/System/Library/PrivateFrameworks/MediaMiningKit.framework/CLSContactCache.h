/*
* Generated on Monday, March 1, 2021 at 2:34:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
*/

#import <MediaMiningKit/CLSDBCache.h>

@class NSPredicate;

@interface CLSContactCache : CLSDBCache {

	NSPredicate* _entryPredicateWithContactIdentifier;
	NSPredicate* _entryPredicateWithContactIdentifiers;
	NSPredicate* _entryPredicateWithUpdateTimestamp;

}

@property (nonatomic,retain) NSPredicate * entryPredicateWithContactIdentifier;               //@synthesize entryPredicateWithContactIdentifier=_entryPredicateWithContactIdentifier - In the implementation block
@property (nonatomic,retain) NSPredicate * entryPredicateWithContactIdentifiers;              //@synthesize entryPredicateWithContactIdentifiers=_entryPredicateWithContactIdentifiers - In the implementation block
@property (nonatomic,retain) NSPredicate * entryPredicateWithUpdateTimestamp;                 //@synthesize entryPredicateWithUpdateTimestamp=_entryPredicateWithUpdateTimestamp - In the implementation block
-(id)init;
-(id)lastHistoryToken;
-(BOOL)setLastHistoryToken:(id)arg1 ;
-(BOOL)insertFaceprintAnalysisResult:(id)arg1 forContactIdentifier:(id)arg2 ;
-(BOOL)insertContactWithNoProfilePicture:(id)arg1 ;
-(id)cachedContactForContactIdentifier:(id)arg1 ;
-(void)invalidateCacheItemsForContactIdentifiers:(id)arg1 ;
-(unsigned long long)numberOfCachedContacts;
-(id)dataModelName;
-(void)invalidateCacheItemsBeforeDateWithTimestamp:(double)arg1 ;
-(void)invalidateCacheItemForContactIdentifier:(id)arg1 ;
-(void)enumerateCachedEntriesUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)_updateHasPicture:(BOOL)arg1 forEntry:(id)arg2 ;
-(NSPredicate *)entryPredicateWithContactIdentifier;
-(void)setEntryPredicateWithContactIdentifier:(NSPredicate *)arg1 ;
-(NSPredicate *)entryPredicateWithContactIdentifiers;
-(void)setEntryPredicateWithContactIdentifiers:(NSPredicate *)arg1 ;
-(NSPredicate *)entryPredicateWithUpdateTimestamp;
-(void)setEntryPredicateWithUpdateTimestamp:(NSPredicate *)arg1 ;
@end

