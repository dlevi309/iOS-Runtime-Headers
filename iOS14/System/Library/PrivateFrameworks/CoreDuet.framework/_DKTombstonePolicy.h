/*
* Generated on Thursday, January 14, 2021 at 2:20:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/


@class NSArray, NSPredicate;

@interface _DKTombstonePolicy : NSObject {

	NSArray* _requirements;
	NSPredicate* _predicateForEventsRequiredToBeTombstoned;
	NSPredicate* _eventPredicateForEventsRequiredToBeTombstoned;
	NSArray* _propertiesToFetchForTombstones;

}

@property (nonatomic,readonly) NSArray * requirements; 
@property (nonatomic,readonly) NSPredicate * predicateForEventsRequiredToBeTombstoned; 
@property (nonatomic,readonly) NSArray * propertiesToFetchForTombstones; 
+(id)defaultPolicy;
-(id)init;
-(id)tombstonesForPartialEvents:(id)arg1 resultingFromRequirementsWithIdentifiers:(id*)arg2 ;
-(id)tombstonesForEvents:(id)arg1 resultingFromRequirementsWithIdentifiers:(id*)arg2 ;
-(NSArray *)requirements;
-(NSArray *)propertiesToFetchForTombstones;
-(NSPredicate *)predicateForEventsRequiredToBeTombstoned;
-(id)initWithRequirements:(id)arg1 ;
@end

