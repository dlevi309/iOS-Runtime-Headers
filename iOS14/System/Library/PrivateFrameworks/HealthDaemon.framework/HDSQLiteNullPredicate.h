/*
* Generated on Thursday, January 14, 2021 at 2:25:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <HealthDaemon/HDSQLitePropertyPredicate.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface HDSQLiteNullPredicate : HDSQLitePropertyPredicate <NSCopying> {

	BOOL _matchesNull;

}

@property (nonatomic,readonly) BOOL matchesNull;              //@synthesize matchesNull=_matchesNull - In the implementation block
+(id)isNullPredicateWithProperty:(id)arg1 ;
+(id)isNotNullPredicateWithProperty:(id)arg1 ;
-(id)SQLForEntityClass:(Class)arg1 ;
-(BOOL)isCompatibleWithPredicate:(id)arg1 ;
-(BOOL)matchesNull;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

