/*
* Generated on Thursday, January 14, 2021 at 2:25:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface HDSQLitePredicate : NSObject <NSCopying>
+(id)truePredicate;
+(id)falsePredicate;
+(id)compoundPredicateWithPredicate:(id)arg1 otherPredicate:(id)arg2 ;
+(id)disjunctionWithPredicate:(id)arg1 otherPredicate:(id)arg2 ;
+(id)booleanPredicateWithValue:(BOOL)arg1 ;
-(void)bindToStatement:(sqlite3_stmtRef)arg1 bindingIndex:(int*)arg2 ;
-(id)SQLJoinClausesForEntityClass:(Class)arg1 ;
-(id)SQLForEntityClass:(Class)arg1 ;
-(BOOL)isCompatibleWithPredicate:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

