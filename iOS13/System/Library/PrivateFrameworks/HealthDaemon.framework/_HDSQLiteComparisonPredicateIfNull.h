/*
* Generated on Monday, March 1, 2021 at 2:34:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <HealthDaemon/HDSQLiteComparisonPredicate.h>

@interface _HDSQLiteComparisonPredicateIfNull : HDSQLiteComparisonPredicate {

	id _ifPropertyIsNullValue;

}

@property (nonatomic,copy,readonly) id ifPropertyIsNullValue;              //@synthesize ifPropertyIsNullValue=_ifPropertyIsNullValue - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)SQLForEntityClass:(Class)arg1 ;
-(void)bindToStatement:(sqlite3_stmtRef)arg1 bindingIndex:(int*)arg2 ;
-(id)initWithProperty:(id)arg1 ifPropertyIsNullValue:(id)arg2 value:(id)arg3 comparisonType:(long long)arg4 ;
-(id)ifPropertyIsNullValue;
@end

