/*
* Generated on Thursday, January 14, 2021 at 2:21:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/CoreData-Structs.h>
#import <CoreData/NSSQLConnectionManager.h>

@protocol OS_dispatch_semaphore, OS_dispatch_queue;
@class NSMutableArray, NSArray, NSObject;

@interface NSSQLDefaultConnectionManager : NSSQLConnectionManager {

	NSMutableArray* _availableConnections;
	NSArray* _allConnections;
	NSObject*<OS_dispatch_semaphore> _poolCounter;
	os_unfair_lock_s _connectionLock;
	NSObject*<OS_dispatch_queue> _processingQueue;

}
-(void)_initializeConnectionsWithSeed:(id)arg1 ;
-(void)_checkinConnection:(id)arg1 ;
-(void)enumerateAvailableConnectionsWithBlock:(/*^block*/id)arg1 ;
-(id)_checkoutConnectionOfType:(unsigned long long)arg1 ;
-(void)scheduleBarrierBlock:(/*^block*/id)arg1 ;
-(void)scheduleConnectionsBarrier:(/*^block*/id)arg1 ;
-(void)setExclusiveLockingMode:(BOOL)arg1 ;
-(BOOL)handleStoreRequest:(id)arg1 ;
-(void)disconnectAllConnections;
-(id)initWithSQLCore:(id)arg1 priority:(unsigned long long)arg2 seedConnection:(id)arg3 ;
-(void)dealloc;
@end

