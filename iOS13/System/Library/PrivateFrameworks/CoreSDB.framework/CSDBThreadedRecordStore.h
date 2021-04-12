/*
* Generated on Monday, March 1, 2021 at 2:32:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(void)registerClass:(const SCD_Struct_CS2*)arg1 ;
-(void)performBlock:(/*^block*/id)arg1 waitUntilDone:(BOOL)arg2 ;
-(void)performBlock:(/*^block*/id)arg1 afterDelay:(double)arg2 ;
-(id)initWithIdentifier:(CFStringRef)arg1 qosClass:(unsigned short)arg2 lookAsideConfig:(CSDBLookAsideBufferConfig)arg3 ;
-(BOOL)ownsCurrentThreadOtherwiseAssert:(BOOL)arg1 ;
-(void)setupDatabaseWithAllowLocalMigration:(BOOL)arg1 pathBlock:(/*^block*/id)arg2 setupStoreHandler:(/*function pointer*/void*)arg3 connectionInitializer:(/*function pointer*/void*)arg4 versionChecker:(/*function pointer*/void*)arg5 migrationHandler:(/*function pointer*/void*)arg6 schemaVersion:(int)arg7 dataProtectionClass:(unsigned)arg8 registerBlock:(/*^block*/id)arg9 exclusiveOwnership:(BOOL)arg10 ;
-(void)setupDatabaseWithAllowLocalMigration:(BOOL)arg1 pathBlock:(/*^block*/id)arg2 setupStoreHandler:(/*function pointer*/void*)arg3 connectionInitializer:(/*function pointer*/void*)arg4 versionChecker:(/*function pointer*/void*)arg5 migrationHandler:(/*function pointer*/void*)arg6 schemaVersion:(int)arg7 dataProtectionClass:(unsigned)arg8 registerBlock:(/*^block*/id)arg9 ;
-(void)teardownDatabase;
-(void)_teardownDatabaseOnQueue;
@end

