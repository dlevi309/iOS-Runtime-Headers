/*
* Generated on Monday, March 1, 2021 at 2:32:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
*/

#import <CompanionSync/CompanionSync-Structs.h>
#import <libobjc.A.dylib/NSLocking.h>

@protocol OS_dispatch_semaphore;
@class NSString, NSObject, _SYSharedServiceDB;

@interface NMSPersistentDictionary : NSObject <NSLocking> {

	Class _objectClass;
	NSString* _path;
	CFStringRef _loggingFacility;
	NSObject*<OS_dispatch_semaphore> _lock;
	_SYSharedServiceDB* _sharedDB;
	sqlite3Ref _db;
	sqlite3_stmtRef _fetch;
	sqlite3_stmtRef _insert;
	sqlite3_stmtRef _reset;
	sqlite3_stmtRef _remove;
	sqlite3_stmtRef _removeAll;
	sqlite3_stmtRef _byDate;
	sqlite3_stmtRef _byEnqueueDate;

}
-(id)init;
-(void)dealloc;
-(void)removeAllObjects;
-(id)objectForKey:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(void)lock;
-(void)unlock;
-(void)_prepareStatements;
-(void)_openDBForceRecreate:(BOOL)arg1 ;
-(void)_withDB:(/*^block*/id)arg1 ;
-(void)_ensureDBSchema;
-(unsigned long long)_checkSchemaVersion;
-(id)_dataFromObject:(id)arg1 ;
-(id)_objectFromData:(id)arg1 ;
-(id)initWithPath:(id)arg1 objectClass:(Class)arg2 loggingFacility:(CFStringRef)arg3 ;
-(id)initWithSharedDBForService:(id)arg1 objectClass:(Class)arg2 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 expires:(id)arg3 ;
-(void)resetObject:(id)arg1 forKey:(id)arg2 ;
-(void)enumerateObjectsSortedByExpirationDate:(/*^block*/id)arg1 ;
-(void)enumerateObjectsSortedByEnqueueDate:(/*^block*/id)arg1 ;
@end

