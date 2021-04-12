/*
* Generated on Thursday, January 14, 2021 at 2:24:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
*/

#import <MusicLibrary/ML3Predicate.h>

@class ML3Predicate;

@interface ML3ConditionalPredicate : ML3Predicate {

	ML3Predicate* _conditionPredicate;
	ML3Predicate* _thenPredicate;
	ML3Predicate* _elsePredicate;

}

@property (nonatomic,copy,readonly) ML3Predicate * conditionPredicate;              //@synthesize conditionPredicate=_conditionPredicate - In the implementation block
@property (nonatomic,copy,readonly) ML3Predicate * thenPredicate;                   //@synthesize thenPredicate=_thenPredicate - In the implementation block
@property (nonatomic,copy,readonly) ML3Predicate * elsePredicate;                   //@synthesize elsePredicate=_elsePredicate - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)predicateWithConditionPredicate:(id)arg1 thenPredicate:(id)arg2 elsePredicate:(id)arg3 ;
-(ML3Predicate *)elsePredicate;
-(id)initWithConditionPredicate:(id)arg1 thenPredicate:(id)arg2 elsePredicate:(id)arg3 ;
-(ML3Predicate *)conditionPredicate;
-(ML3Predicate *)thenPredicate;
-(id)databaseStatementParameters;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)appendSQLToMutableString:(id)arg1 entityClass:(Class)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)SQLJoinClausesForClass:(Class)arg1 ;
-(BOOL)isDynamicForEntityClass:(Class)arg1 ;
-(id)spotlightPredicate;
@end

