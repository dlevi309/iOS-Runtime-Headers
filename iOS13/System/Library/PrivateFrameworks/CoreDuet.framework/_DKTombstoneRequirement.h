/*
* Generated on Monday, March 1, 2021 at 2:30:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/


@class NSString, NSPredicate, NSArray;

@interface _DKTombstoneRequirement : NSObject {

	NSString* _identifier;

}

@property (readonly) NSPredicate * predicate; 
@property (readonly) NSPredicate * eventPredicate; 
@property (readonly) NSArray * propertiesToFetch; 
@property (readonly) NSString * identifier;                     //@synthesize identifier=_identifier - In the implementation block
+(id)requirement;
-(NSString *)identifier;
-(NSPredicate *)predicate;
-(NSPredicate *)eventPredicate;
-(NSArray *)propertiesToFetch;
-(void)assignPropertiesToTombstone:(id)arg1 extractedFromEvent:(id)arg2 ;
-(void)assignPropertiesToTombstone:(id)arg1 extractedFromPartialEvent:(id)arg2 ;
@end

