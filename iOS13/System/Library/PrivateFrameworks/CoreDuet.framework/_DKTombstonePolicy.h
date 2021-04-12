/*
* Generated on Monday, March 1, 2021 at 2:30:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/


@class NSArray, NSPredicate;

@interface _DKTombstonePolicy : NSObject {

	NSArray* _requirements;
	NSPredicate* _predicateForEventsRequiredToBeTombstoned;
	NSPredicate* _eventPredicateForEventsRequiredToBeTombstoned;
	NSArray* _propertiesToFetchForTombstones;

}

@property (nonatomic,retain) NSArray * requirements;                                                   //@synthesize requirements=_requirements - In the implementation block
@property (nonatomic,retain) NSPredicate * predicateForEventsRequiredToBeTombstoned;                   //@synthesize predicateForEventsRequiredToBeTombstoned=_predicateForEventsRequiredToBeTombstoned - In the implementation block
@property (nonatomic,retain) NSPredicate * eventPredicateForEventsRequiredToBeTombstoned;              //@synthesize eventPredicateForEventsRequiredToBeTombstoned=_eventPredicateForEventsRequiredToBeTombstoned - In the implementation block
@property (nonatomic,retain) NSArray * propertiesToFetchForTombstones;                                 //@synthesize propertiesToFetchForTombstones=_propertiesToFetchForTombstones - In the implementation block
+(id)defaultPolicy;
-(id)init;
-(id)initWithRequirements:(id)arg1 ;
-(NSArray *)requirements;
-(NSPredicate *)eventPredicateForEventsRequiredToBeTombstoned;
-(NSPredicate *)predicateForEventsRequiredToBeTombstoned;
-(NSArray *)propertiesToFetchForTombstones;
-(id)tombstonesForEvents:(id)arg1 resultingFromRequirementsWithIdentifiers:(id*)arg2 ;
-(id)tombstonesForPartialEvents:(id)arg1 resultingFromRequirementsWithIdentifiers:(id*)arg2 ;
-(void)setRequirements:(NSArray *)arg1 ;
-(void)setPredicateForEventsRequiredToBeTombstoned:(NSPredicate *)arg1 ;
-(void)setEventPredicateForEventsRequiredToBeTombstoned:(NSPredicate *)arg1 ;
-(void)setPropertiesToFetchForTombstones:(NSArray *)arg1 ;
@end

