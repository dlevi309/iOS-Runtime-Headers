/*
* Generated on Monday, March 1, 2021 at 2:34:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthOntology.framework/HealthOntology
*/


@class HNPredicate;

@interface HNQuery : NSObject {

	HNPredicate* _predicate;

}

@property (nonatomic,copy,readonly) HNPredicate * predicate;              //@synthesize predicate=_predicate - In the implementation block
-(id)init;
-(HNPredicate *)predicate;
-(id)initWithPredicate:(id)arg1 ;
@end

