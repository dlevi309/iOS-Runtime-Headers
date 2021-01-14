/*
* Generated on Thursday, January 14, 2021 at 2:25:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <HealthDaemon/HDSQLitePropertyPredicate.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray;

@interface HDSQLiteContainsPredicate : HDSQLitePropertyPredicate <NSCopying> {

	BOOL _contains;
	NSArray* _values;

}

@property (nonatomic,readonly) BOOL contains;                      //@synthesize contains=_contains - In the implementation block
@property (nonatomic,copy,readonly) NSArray * values;              //@synthesize values=_values - In the implementation block
+(id)doesNotContainPredicateWithProperty:(id)arg1 values:(id)arg2 ;
+(id)containsPredicateWithProperty:(id)arg1 values:(id)arg2 ;
+(id)_arrayFromValues:(id)arg1 ;
+(id)_containsPredicateWithProperty:(id)arg1 values:(id)arg2 contains:(BOOL)arg3 ;
-(void)bindToStatement:(sqlite3_stmtRef)arg1 bindingIndex:(int*)arg2 ;
-(id)SQLForEntityClass:(Class)arg1 ;
-(BOOL)isCompatibleWithPredicate:(id)arg1 ;
-(NSArray *)values;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)contains;
-(id)initWithProperty:(id)arg1 values:(id)arg2 contains:(BOOL)arg3 ;
@end

