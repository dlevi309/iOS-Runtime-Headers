/*
* Generated on Monday, March 1, 2021 at 2:32:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CommunicationsFilter.framework/CommunicationsFilter
*/


@protocol OS_xpc_object, OS_dispatch_queue;
@class NSObject, NSMutableArray, CommunicationsFilterBlockListCache;

@interface CommunicationsFilterBlockList : NSObject {

	NSObject*<OS_xpc_object> _connection;
	int _retries;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableArray* _recentObjectsTested;
	CommunicationsFilterBlockListCache* _cache;

}
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)_disconnected;
-(BOOL)_disconnect;
-(BOOL)_connect;
-(id)_sendSynchronousXPCRequest:(id)arg1 ;
-(void)_sendXPCRequest:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)addItemForAllServices:(id)arg1 ;
-(void)removeItemForAllServices:(id)arg1 ;
-(id)copyAllItems;
-(BOOL)isItemInList:(id)arg1 ;
@end

