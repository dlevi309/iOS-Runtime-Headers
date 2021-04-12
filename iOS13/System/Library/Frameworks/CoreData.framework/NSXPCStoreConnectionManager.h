/*
* Generated on Monday, March 1, 2021 at 2:30:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/


@protocol OS_dispatch_semaphore, OS_dispatch_queue;
@class NSMutableArray, NSObject, NSArray;

@interface NSXPCStoreConnectionManager : NSObject {

	NSMutableArray* _availableConnections;
	NSMutableArray* _allConnections;
	unsigned long long _maxConnections;
	NSObject*<OS_dispatch_semaphore> _poolCounter;
	int _connectionLock;
	NSObject*<OS_dispatch_queue> _processingQueue;

}

@property (nonatomic,readonly) unsigned long long maxConnections;              //@synthesize maxConnections=_maxConnections - In the implementation block
@property (nonatomic,readonly) NSArray * availableConnections;                 //@synthesize availableConnections=_availableConnections - In the implementation block
-(void)dealloc;
-(id)initForStore:(id)arg1 ;
-(void)disconnectAllConnections;
-(void)sendMessageWithContext:(id)arg1 ;
-(void)_checkinConnection:(id)arg1 ;
-(id)_checkoutConnection;
-(unsigned long long)maxConnections;
-(NSArray *)availableConnections;
@end

