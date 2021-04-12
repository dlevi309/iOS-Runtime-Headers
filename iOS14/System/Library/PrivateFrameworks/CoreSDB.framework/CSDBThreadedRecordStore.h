/*
* Generated on Thursday, January 14, 2021 at 2:27:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSDB.framework/CoreSDB
*/


@protocol OS_dispatch_queue;
#import <CoreSDB/CoreSDB-Structs.h>
@class NSObject, NSString, _CSDBThreadObject;

@interface CSDBThreadedRecordStore : NSObject {

	CSDBRecordStore* _recordStore;
	NSObject*<OS_dispatch_queue> _recordStoreQueue;
	NSString* _identifier;
	_CSDBThreadObject* _thread;
	CSDBLookAsideBufferConfig _lookAsideConfig;
	BOOL _wantsRegister;

}
-(void)registerClass:(const SCD_Struct_CS2*)arg1 ;
-(void)teardownDatabase;
-(void)setupDatabaseWithAllowLocalMigration:(BOOL)arg1 pathBlock:(/*^block*/id)arg2 setupStoreHandler:(/*function pointer*/void*)arg3 connectionInitializer:(/*function pointer*/void*)arg4 versionChecker:(/*function pointer*/void*)arg5 migrationHandler:(/*function pointer*/void*)arg6 schemaVersion:(int)arg7 dataProtectionClass:(unsigned)arg8 registerBlock:(/*^block*/id)arg9 exclusiveOwnership:(BOOL)arg10 ;
-(void)_teardownDatabaseOnQueue;
-(void)performBlock:(/*^block*/id)arg1 afterDelay:(double)arg2 ;
-(void)setupDatabaseWithAllowLocalMigration:(BOOL)arg1 pathBlock:(/*^block*/id)arg2 setupStoreHandler:(/*function pointer*/void*)arg3 connectionInitializer:(/*function pointer*/void*)arg4 versionChecker:(/*function pointer*/void*)arg5 migrationHandler:(/*function pointer*/void*)arg6 schemaVersion:(int)arg7 dataProtectionClass:(unsigned)arg8 registerBlock:(/*^block*/id)arg9 ;
-(id)initWithIdentifier:(CFStringRef)arg1 qosClass:(unsigned short)arg2 lookAsideConfig:(CSDBLookAsideBufferConfig)arg3 ;
-(void)performBlock:(/*^block*/id)arg1 waitUntilDone:(BOOL)arg2 ;
-(BOOL)ownsCurrentThreadOtherwiseAssert:(BOOL)arg1 ;
-(void)dealloc;
@end

