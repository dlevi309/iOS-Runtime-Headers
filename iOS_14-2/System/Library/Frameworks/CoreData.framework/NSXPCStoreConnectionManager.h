/*
* Generated on Thursday, January 14, 2021 at 2:21:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/


@protocol OS_dispatch_semaphore, OS_dispatch_queue;
#import <CoreData/CoreData-Structs.h>
@class NSMutableArray, NSObject, NSArray;

@interface NSXPCStoreConnectionManager : NSObject {

	NSMutableArray* _availableConnections;
	NSMutableArray* _allConnections;
	unsigned long long _maxConnections;
	NSObject*<OS_dispatch_semaphore> _poolCounter;
	os_unfair_lock_s _connectionLock;
	NSObject*<OS_dispatch_queue> _processingQueue;

}

@property (nonatomic,readonly) unsigned long long maxConnections;              //@synthesize maxConnections=_maxConnections - In the implementation block
@property (nonatomic,readonly) NSArray * availableConnections;                 //@synthesize availableConnections=_availableConnections - In the implementation block
-(void)sendMessageWithContext:(id)arg1 ;
-(void)_checkinConnection:(id)arg1 ;
-(void)disconnectAllConnections;
-(id)_checkoutConnection;
-(NSArray *)availableConnections;
-(unsigned long long)maxConnections;
-(id)initForStore:(id)arg1 ;
-(void)dealloc;
@end

