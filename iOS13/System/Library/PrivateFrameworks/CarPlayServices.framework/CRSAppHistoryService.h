/*
* Generated on Monday, March 1, 2021 at 2:34:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CarPlayServices.framework/CarPlayServices
*/

#import <libobjc.A.dylib/BSServiceConnectionListenerDelegate.h>
#import <libobjc.A.dylib/CRSAppHistoryClientToServerInterface.h>
#import <libobjc.A.dylib/BSInvalidatable.h>

@protocol CRSAppHistoryServiceDelegate, OS_dispatch_queue;
@class BSServiceConnectionListener, NSObject, NSHashTable, NSString;

@interface CRSAppHistoryService : NSObject <BSServiceConnectionListenerDelegate, CRSAppHistoryClientToServerInterface, BSInvalidatable> {

	id<CRSAppHistoryServiceDelegate> _delegate;
	BSServiceConnectionListener* _listener;
	NSObject*<OS_dispatch_queue> _connectionQueue;
	NSHashTable* _connections;

}

@property (assign,nonatomic,__weak) id<CRSAppHistoryServiceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) BSServiceConnectionListener * listener;                        //@synthesize listener=_listener - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> connectionQueue;                  //@synthesize connectionQueue=_connectionQueue - In the implementation block
@property (nonatomic,retain) NSHashTable * connections;                                     //@synthesize connections=_connections - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)invalidate;
-(id<CRSAppHistoryServiceDelegate>)delegate;
-(void)setDelegate:(id<CRSAppHistoryServiceDelegate>)arg1 ;
-(BSServiceConnectionListener *)listener;
-(void)setListener:(BSServiceConnectionListener *)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)connectionQueue;
-(void)listener:(id)arg1 didReceiveConnection:(id)arg2 withContext:(id)arg3 ;
-(NSHashTable *)connections;
-(void)setConnections:(NSHashTable *)arg1 ;
-(void)setConnectionQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_connectionQueue_removeConnection:(id)arg1 ;
-(void)_connectionQueue_addConnection:(id)arg1 ;
-(void)fetchUIContextStatesWithCompletion:(/*^block*/id)arg1 ;
-(void)fetchSessionUIContextStatesWithCompletion:(/*^block*/id)arg1 ;
-(void)fetchSessionEchoContextStatesWithCompletion:(/*^block*/id)arg1 ;
@end
