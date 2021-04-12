/*
* Generated on Monday, March 1, 2021 at 2:34:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <HealthDaemon/HDSQLitePredicate.h>

@interface HDAssociationEntityIsAssociatedPredicate : HDSQLitePredicate {

	BOOL _inverted;

}
+(id)predicateWithInvertedCondition:(BOOL)arg1 ;
-(id)SQLForEntityClass:(Class)arg1 ;
-(id)SQLJoinClausesForEntityClass:(Class)arg1 ;
-(void)bindToStatement:(sqlite3_stmtRef)arg1 bindingIndex:(int*)arg2 ;
@end

