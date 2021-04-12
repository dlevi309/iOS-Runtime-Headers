/*
* Generated on Monday, March 1, 2021 at 2:34:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <libobjc.A.dylib/HDDiagnosticObject.h>

@class NSMutableDictionary, NSString;

@interface HDDatabaseValueCache : NSObject <HDDiagnosticObject> {

	NSMutableDictionary* _cache;
	NSString* _threadLocalKey;
	long long _cacheScope;
	os_unfair_lock_s _lock;
	SCD_Struct_HD6 _statistics;
	NSString* _name;

}

@property (readonly) SCD_Struct_HD6 statistics; 
@property (copy,readonly) NSString * name;                          //@synthesize name=_name - In the implementation block
@property (readonly) long long cacheScope; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(NSString *)name;
-(id)objectForKey:(id)arg1 ;
-(id)initWithName:(id)arg1 ;
-(SCD_Struct_HD6)statistics;
-(id)diagnosticDescription;
-(long long)cacheScope;
-(void)removeAllObjectsWithDatabase:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 database:(id)arg2 ;
-(id)fetchObjectForKey:(id)arg1 database:(id)arg2 error:(id*)arg3 faultHandler:(/*^block*/id)arg4 ;
-(id)initWithName:(id)arg1 cacheScope:(long long)arg2 ;
-(id)_lock_objectForKey:(id)arg1 database:(id)arg2 ;
-(void)_lock_storeObject:(id)arg1 forKey:(id)arg2 database:(id)arg3 ;
-(id)_transactionStorageWithDatabase:(id)arg1 createIfNecessary:(BOOL)arg2 ;
-(void)_lock_removeAllObjectsWithDatabase:(id)arg1 ;
-(void)_commitTransactionStorage:(id)arg1 ;
@end

