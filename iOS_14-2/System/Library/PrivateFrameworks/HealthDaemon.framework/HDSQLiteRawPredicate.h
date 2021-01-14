/*
* Generated on Thursday, January 14, 2021 at 2:25:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <HealthDaemon/HDSQLitePredicate.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray;

@interface HDSQLiteRawPredicate : HDSQLitePredicate <NSCopying> {

	NSString* _sql;
	NSArray* _properties;
	NSArray* _values;

}
+(id)predicateWithSQL:(id)arg1 overProperties:(id)arg2 values:(id)arg3 ;
-(void)bindToStatement:(sqlite3_stmtRef)arg1 bindingIndex:(inout int*)arg2 ;
-(id)SQLJoinClausesForEntityClass:(Class)arg1 ;
-(id)SQLForEntityClass:(Class)arg1 ;
-(BOOL)isCompatibleWithPredicate:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

