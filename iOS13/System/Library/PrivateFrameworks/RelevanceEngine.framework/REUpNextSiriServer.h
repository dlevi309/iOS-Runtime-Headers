/*
* Generated on Monday, March 1, 2021 at 2:34:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/REUpNextSiriServerInterface.h>

@protocol OS_dispatch_queue;
@class NSHashTable, NSMutableSet, NSObject, NSXPCListener, NSString;

@interface REUpNextSiriServer : NSObject <NSXPCListenerDelegate, REUpNextSiriServerInterface> {

	NSHashTable* _observers;
	NSMutableSet* _connections;
	NSObject*<OS_dispatch_queue> _queue;
	NSXPCListener* _listener;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)_removeConnection:(id)arg1 ;
-(void)completedRequestWithDomain:(id)arg1 ;
-(void)_onqueue_async:(/*^block*/id)arg1 ;
-(void)_accessObservers:(/*^block*/id)arg1 ;
-(void)_accessRemoteClients:(/*^block*/id)arg1 ;
@end

