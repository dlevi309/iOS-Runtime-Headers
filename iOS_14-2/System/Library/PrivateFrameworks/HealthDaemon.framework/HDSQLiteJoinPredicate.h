/*
* Generated on Thursday, January 14, 2021 at 2:25:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDSQLiteTruePredicate.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSSet;

@interface HDSQLiteJoinPredicate : HDSQLiteTruePredicate <NSCopying> {

	NSSet* _joinClauses;

}

@property (nonatomic,copy,readonly) NSSet * joinClauses;              //@synthesize joinClauses=_joinClauses - In the implementation block
+(id)predicateWithJoinClauses:(id)arg1 ;
-(id)SQLJoinClausesForEntityClass:(Class)arg1 ;
-(NSSet *)joinClauses;
@end

