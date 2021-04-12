/*
* Generated on Thursday, January 14, 2021 at 2:22:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/


@protocol OS_dispatch_queue;
#import <StoreServices/StoreServices-Structs.h>
@class SSXPCConnection, NSObject, NSArray;

@interface SSPreorderManager : NSObject {

	SSXPCConnection* _connection;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSArray* _itemKinds;
	SSXPCConnection* _observerConnection;
	NSObject*<OS_dispatch_queue> _observerQueue;
	CFArrayRef _observers;
	NSArray* _preorders;

}

@property (readonly) NSArray * itemKinds; 
@property (readonly) NSArray * preorders; 
+(id)bookStoreItemKinds;
+(id)musicStoreItemKinds;
-(void)addObserver:(id)arg1 ;
-(void)_connectAsObserver;
-(void)_sendMessageToObservers:(SEL)arg1 ;
-(void)reloadFromServer;
-(void)_handleMessage:(id)arg1 fromServerConnection:(id)arg2 ;
-(id)init;
-(id)initWithItemKinds:(id)arg1 ;
-(void)_registerAsObserver;
-(void)cancelPreorders:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(void)removeObserver:(id)arg1 ;
-(NSArray *)preorders;
-(NSArray *)itemKinds;
-(void)dealloc;
@end

