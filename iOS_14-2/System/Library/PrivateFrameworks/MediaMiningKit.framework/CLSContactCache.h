/*
* Generated on Thursday, January 14, 2021 at 2:26:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setEntryPredicateWithUpdateTimestamp:(NSPredicate *)arg1 ;
-(void)enumerateCachedEntriesUsingBlock:(/*^block*/id)arg1 ;
-(id)lastHistoryToken;
-(id)init;
-(void)setEntryPredicateWithContactIdentifier:(NSPredicate *)arg1 ;
-(BOOL)insertFaceprintAnalysisResult:(id)arg1 forContactIdentifier:(id)arg2 ;
-(void)invalidateCacheItemForContactIdentifier:(id)arg1 ;
-(void)invalidateCacheItemsBeforeDateWithTimestamp:(double)arg1 ;
-(NSPredicate *)entryPredicateWithUpdateTimestamp;
-(id)dataModelName;
-(void)setEntryPredicateWithContactIdentifiers:(NSPredicate *)arg1 ;
-(NSPredicate *)entryPredicateWithContactIdentifiers;
-(NSPredicate *)entryPredicateWithContactIdentifier;
-(void)invalidateCacheItemsForContactIdentifiers:(id)arg1 ;
-(BOOL)setLastHistoryToken:(id)arg1 ;
-(BOOL)insertContactWithNoProfilePicture:(id)arg1 ;
-(BOOL)_updateHasPicture:(BOOL)arg1 forEntry:(id)arg2 ;
-(id)cachedContactForContactIdentifier:(id)arg1 ;
-(unsigned long long)numberOfCachedContacts;
@end

