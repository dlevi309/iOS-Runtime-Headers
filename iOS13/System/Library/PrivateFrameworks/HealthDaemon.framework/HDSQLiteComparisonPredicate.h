/*
* Generated on Monday, March 1, 2021 at 2:34:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <HealthDaemon/HDSQLitePropertyPredicate.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface HDSQLiteComparisonPredicate : HDSQLitePropertyPredicate <NSCopying> {

	long long _comparisonType;
	id _value;
	BOOL _influenceIndexUsage;

}

@property (nonatomic,readonly) long long comparisonType;              //@synthesize comparisonType=_comparisonType - In the implementation block
@property (nonatomic,readonly) id value;                              //@synthesize value=_value - In the implementation block
+(id)predicateWithProperty:(id)arg1 equalToValue:(id)arg2 ;
+(id)predicateWithProperty:(id)arg1 value:(id)arg2 comparisonType:(long long)arg3 ;
+(id)predicateWithProperty:(id)arg1 greaterThanValue:(id)arg2 ;
+(id)predicateWithProperty:(id)arg1 greaterThanOrEqualToValue:(id)arg2 ;
+(id)predicateWithProperty:(id)arg1 lessThanOrEqualToValue:(id)arg2 ;
+(id)predicateWithProperty:(id)arg1 likeValue:(id)arg2 ;
+(id)predicateWithProperty:(id)arg1 notEqualToValue:(id)arg2 ;
+(id)predicateWithProperty:(id)arg1 lessThanValue:(id)arg2 ;
+(id)predicateWithProperty:(id)arg1 likeValue:(id)arg2 escapeCharacter:(id)arg3 ;
+(id)predicateWithProperty:(id)arg1 value:(id)arg2 comparisonType:(long long)arg3 influenceIndexUsage:(BOOL)arg4 ;
+(id)predicateWithProperty:(id)arg1 ifNullValue:(id)arg2 value:(id)arg3 comparisonType:(long long)arg4 ;
+(id)predicateWithCoalescedProperties:(id)arg1 value:(id)arg2 comparisonType:(long long)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)value;
-(long long)comparisonType;
-(id)SQLForEntityClass:(Class)arg1 ;
-(id)_comparisonTypeString;
-(void)bindToStatement:(sqlite3_stmtRef)arg1 bindingIndex:(int*)arg2 ;
-(id)initWithProperty:(id)arg1 value:(id)arg2 comparisonType:(long long)arg3 ;
-(BOOL)isCompatibleWithPredicate:(id)arg1 ;
-(id)initWithProperty:(id)arg1 value:(id)arg2 comparisonType:(long long)arg3 influenceIndexUsage:(BOOL)arg4 ;
@end

