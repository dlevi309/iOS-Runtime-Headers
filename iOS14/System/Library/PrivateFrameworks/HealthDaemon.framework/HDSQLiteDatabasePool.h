/*
* Generated on Thursday, January 14, 2021 at 2:25:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <libobjc.A.dylib/HDDiagnosticObject.h>

@protocol OS_dispatch_group, OS_dispatch_semaphore, HDSQLiteDatabasePoolDelegate;
@class NSCondition, NSMutableSet, NSObject, NSMapTable, NSString;

@interface HDSQLiteDatabasePool : NSObject <HDDiagnosticObject> {

	NSCondition* _cacheCondition;
	NSMutableSet* _cache;
	NSObject*<OS_dispatch_group> _flushGroup;
	unsigned long long _cacheGeneration;
	long long _cacheSize;
	long long _concurrentReaderLimit;
	Ai _count;
	os_unfair_lock_s _checkoutLock;
	NSMapTable* _checkoutMap;
	NSObject*<OS_dispatch_semaphore> _readerSemaphore;
	NSObject*<OS_dispatch_semaphore> _writerSemaphore;
	id<HDSQLiteDatabasePoolDelegate> _delegate;

}

@property (__weak) id<HDSQLiteDatabasePoolDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) long long count; 
@property (readonly) long long cacheSize; 
@property (readonly) long long concurrentReaderLimit; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)flush;
-(id)_removeDatabaseFromCheckoutMap:(id)arg1 ;
-(long long)cacheSize;
-(id)initWithConcurrentReaderLimit:(long long)arg1 ;
-(id<HDSQLiteDatabasePoolDelegate>)delegate;
-(void)checkInDatabase:(id)arg1 flushImmediately:(BOOL)arg2 ;
-(long long)concurrentReaderLimit;
-(long long)count;
-(void)setDelegate:(id<HDSQLiteDatabasePoolDelegate>)arg1 ;
-(id)diagnosticDescription;
-(id)checkOutDatabaseWithOptions:(unsigned long long)arg1 error:(id*)arg2 ;
-(id)_semaphoreForCheckOutOptions:(unsigned long long)arg1 ;
-(void)_didFlushDatabases:(id)arg1 ;
-(void)_addDatabaseWrapperToCheckoutMap:(id)arg1 ;
-(void)dealloc;
@end

