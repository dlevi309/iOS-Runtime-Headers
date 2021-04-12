/*
* Generated on Monday, March 1, 2021 at 2:34:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

