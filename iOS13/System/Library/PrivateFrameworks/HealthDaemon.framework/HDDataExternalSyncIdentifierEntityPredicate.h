/*
* Generated on Monday, March 1, 2021 at 2:34:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <HealthDaemon/HDSQLitePredicate.h>
#import <libobjc.A.dylib/HDMetadataPredicate.h>

@class HDSQLitePredicate, NSString;

@interface HDDataExternalSyncIdentifierEntityPredicate : HDSQLitePredicate <HDMetadataPredicate> {

	HDSQLitePredicate* _valuePredicate;
	BOOL _matchObjectsWithoutKey;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_propertyForKey:(id)arg1 ;
+(id)predicateWithMetadataKey:(id)arg1 allowedValues:(id)arg2 ;
+(id)predicateWithMetadataKey:(id)arg1 value:(id)arg2 operatorType:(unsigned long long)arg3 ;
+(id)predicateWithMetadataKey:(id)arg1 exists:(BOOL)arg2 ;
+(id)_valuePredicateForKey:(id)arg1 allowedValues:(id)arg2 ;
+(id)_valuePredicateForKey:(id)arg1 value:(id)arg2 operatorType:(unsigned long long)arg3 ;
+(Class)_valueClassForKey:(id)arg1 ;
-(NSString *)description;
-(id)SQLForEntityClass:(Class)arg1 ;
-(void)bindToStatement:(sqlite3_stmtRef)arg1 bindingIndex:(inout int*)arg2 ;
@end

