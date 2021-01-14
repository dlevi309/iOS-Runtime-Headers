/*
* Generated on Thursday, January 14, 2021 at 2:28:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)addObserver:(id)arg1 ;
-(id)init;
-(void)_removeConnection:(id)arg1 ;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)removeObserver:(id)arg1 ;
-(void)dealloc;
-(void)completedRequestWithDomain:(id)arg1 ;
-(void)_onqueue_async:(/*^block*/id)arg1 ;
-(void)_accessObservers:(/*^block*/id)arg1 ;
-(void)_accessRemoteClients:(/*^block*/id)arg1 ;
@end

