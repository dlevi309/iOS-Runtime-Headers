/*
* Generated on Thursday, January 14, 2021 at 2:25:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <HealthDaemon/HDSQLiteComparisonPredicate.h>

@interface _HDSQLiteComparisonPredicateIfNull : HDSQLiteComparisonPredicate {

	id _ifPropertyIsNullValue;

}

@property (nonatomic,copy,readonly) id ifPropertyIsNullValue;              //@synthesize ifPropertyIsNullValue=_ifPropertyIsNullValue - In the implementation block
-(void)bindToStatement:(sqlite3_stmtRef)arg1 bindingIndex:(int*)arg2 ;
-(id)SQLForEntityClass:(Class)arg1 ;
-(id)ifPropertyIsNullValue;
-(id)description;
-(id)initWithProperty:(id)arg1 ifPropertyIsNullValue:(id)arg2 value:(id)arg3 comparisonType:(long long)arg4 ;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
@end

