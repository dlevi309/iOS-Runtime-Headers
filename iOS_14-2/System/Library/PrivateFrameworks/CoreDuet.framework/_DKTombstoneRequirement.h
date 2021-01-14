/*
* Generated on Thursday, January 14, 2021 at 2:20:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSPredicate *)predicate;
-(void)assignPropertiesToTombstone:(id)arg1 extractedFromEvent:(id)arg2 ;
-(NSArray *)propertiesToFetch;
-(void)assignPropertiesToTombstone:(id)arg1 extractedFromPartialEvent:(id)arg2 ;
-(NSString *)identifier;
-(NSPredicate *)eventPredicate;
@end

