/*
* Generated on Thursday, January 14, 2021 at 2:25:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <HealthDaemon/HDSQLitePredicate.h>

@interface HDAssociationEntityAssociationExistsPredicate : HDSQLitePredicate {

	long long _assocationID;
	BOOL _exists;

}
+(id)predicateWithAssociationID:(long long)arg1 exists:(BOOL)arg2 ;
-(void)bindToStatement:(sqlite3_stmtRef)arg1 bindingIndex:(int*)arg2 ;
-(id)SQLForEntityClass:(Class)arg1 ;
-(id)description;
@end

