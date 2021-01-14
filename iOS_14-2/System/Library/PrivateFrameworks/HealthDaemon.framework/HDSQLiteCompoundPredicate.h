/*
* Generated on Thursday, January 14, 2021 at 2:25:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <HealthDaemon/HDSQLitePredicate.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray;

@interface HDSQLiteCompoundPredicate : HDSQLitePredicate <NSCopying> {

	BOOL _unary;
	BOOL _trueIfNoPredicates;
	NSString* _combinationOperation;
	NSArray* _predicates;

}

@property (nonatomic,readonly) NSArray * predicates;              //@synthesize predicates=_predicates - In the implementation block
+(id)predicateMatchingAllPredicates:(id)arg1 ;
+(id)predicateWithProperty:(id)arg1 equalToValues:(id)arg2 ;
+(id)predicateWithProperty:(id)arg1 notEqualToValues:(id)arg2 ;
+(id)negatedPredicate:(id)arg1 ;
+(id)predicateMatchingAnyPredicates:(id)arg1 ;
+(id)predicateWithProperty:(id)arg1 values:(id)arg2 comparisonType:(long long)arg3 ;
-(void)bindToStatement:(sqlite3_stmtRef)arg1 bindingIndex:(inout int*)arg2 ;
-(id)SQLJoinClausesForEntityClass:(Class)arg1 ;
-(id)SQLForEntityClass:(Class)arg1 ;
-(BOOL)isCompatibleWithPredicate:(id)arg1 ;
-(NSArray *)predicates;
-(id)description;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

