/*
* Generated on Thursday, January 14, 2021 at 2:25:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(long long)cacheScope;
-(id)fetchObjectForKey:(id)arg1 transaction:(id)arg2 error:(id*)arg3 faultHandler:(/*^block*/id)arg4 ;
-(void)_lock_storeObject:(id)arg1 forKey:(id)arg2 transaction:(id)arg3 ;
-(id)init;
-(void)removeAllObjectsWithTransaction:(id)arg1 ;
-(SCD_Struct_HD6)statistics;
-(void)_lock_removeAllObjectsWithTransaction:(id)arg1 ;
-(NSString *)name;
-(id)initWithName:(id)arg1 cacheScope:(long long)arg2 ;
-(id)initWithName:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 transaction:(id)arg3 ;
-(id)diagnosticDescription;
-(id)_lock_objectForKey:(id)arg1 storage:(id)arg2 ;
-(id)objectForKey:(id)arg1 ;
-(void)_commitTransactionStorage:(id)arg1 ;
-(id)_storageForTransaction:(id)arg1 createIfNecessary:(BOOL)arg2 ;
-(void)removeObjectForKey:(id)arg1 transaction:(id)arg2 ;
-(void)dealloc;
@end

