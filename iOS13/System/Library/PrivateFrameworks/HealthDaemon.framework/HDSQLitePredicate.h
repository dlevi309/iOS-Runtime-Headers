/*
* Generated on Monday, March 1, 2021 at 2:34:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface HDSQLitePredicate : NSObject <NSCopying>
+(id)hdmc_predicateForSamplesInDayIndexRange:(SCD_Struct_HD78)arg1 ;
+(id)truePredicate;
+(id)falsePredicate;
+(id)compoundPredicateWithPredicate:(id)arg1 otherPredicate:(id)arg2 ;
+(id)disjunctionWithPredicate:(id)arg1 otherPredicate:(id)arg2 ;
+(id)booleanPredicateWithValue:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)SQLForEntityClass:(Class)arg1 ;
-(id)SQLJoinClausesForEntityClass:(Class)arg1 ;
-(void)bindToStatement:(sqlite3_stmtRef)arg1 bindingIndex:(int*)arg2 ;
-(BOOL)isCompatibleWithPredicate:(id)arg1 ;
@end

