/*
* Generated on Thursday, January 14, 2021 at 2:25:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDSQLiteComparisonPredicate.h>

@class NSArray;

@interface _HDSQLiteComparisonPredicateCoalesce : HDSQLiteComparisonPredicate {

	NSArray* _properties;

}

@property (nonatomic,copy,readonly) NSArray * properties;              //@synthesize properties=_properties - In the implementation block
-(id)SQLJoinClausesForEntityClass:(Class)arg1 ;
-(id)initWithProperties:(id)arg1 value:(id)arg2 comparisonType:(long long)arg3 ;
-(id)SQLForEntityClass:(Class)arg1 ;
-(BOOL)isCompatibleWithPredicate:(id)arg1 ;
-(NSArray *)properties;
-(id)description;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
@end

