/*
* Generated on Thursday, January 14, 2021 at 2:23:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/


@class WBSPersistentPropertyListStore, NSDictionary, NSArray, NSDate;

@interface WBSPasswordBreachStore : NSObject {

	WBSPersistentPropertyListStore* _store;

}

@property (nonatomic,retain) NSDictionary * queuedPasswordBagManagerState; 
@property (nonatomic,retain) NSArray * resultRecords; 
@property (nonatomic,retain) NSArray * recentlyBreachedPersistentIdentifiers; 
@property (assign,nonatomic) unsigned long long rampIdentifier; 
@property (nonatomic,retain) NSDate * lastSessionCompletionDate; 
+(id)_createPersistentIdentifierCanary;
+(BOOL)_readAndValidatePersistentIdentifierCanaryWithPersistentIdentifier:(id)arg1 expectedValue:(id)arg2 ;
-(void)setResultRecords:(NSArray *)arg1 ;
-(NSArray *)resultRecords;
-(void)saveStoreSynchronously;
-(void)saveAndCloseStoreSynchronously;
-(id)initWithBackingStoreURL:(id)arg1 ;
-(NSDictionary *)queuedPasswordBagManagerState;
-(void)setQueuedPasswordBagManagerState:(NSDictionary *)arg1 ;
-(NSArray *)recentlyBreachedPersistentIdentifiers;
-(void)setRecentlyBreachedPersistentIdentifiers:(NSArray *)arg1 ;
-(unsigned long long)rampIdentifier;
-(void)setRampIdentifier:(unsigned long long)arg1 ;
-(NSDate *)lastSessionCompletionDate;
-(void)setLastSessionCompletionDate:(NSDate *)arg1 ;
@end

