/*
* Generated on Thursday, January 14, 2021 at 2:27:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)_connect;
-(id)init;
-(BOOL)_disconnect;
-(void)removeItemForAllServices:(id)arg1 ;
-(void)addItemForAllServices:(id)arg1 ;
-(BOOL)isItemInList:(id)arg1 ;
-(id)copyAllItems;
-(void)_sendXPCRequest:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)_sendSynchronousXPCRequest:(id)arg1 ;
-(void)_disconnected;
-(void)dealloc;
@end

