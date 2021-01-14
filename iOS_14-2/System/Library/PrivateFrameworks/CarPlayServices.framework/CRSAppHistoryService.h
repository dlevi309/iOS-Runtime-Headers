/*
* Generated on Thursday, January 14, 2021 at 2:27:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setConnections:(NSHashTable *)arg1 ;
-(NSObject*<OS_dispatch_queue>)connectionQueue;
-(void)listener:(id)arg1 didReceiveConnection:(id)arg2 withContext:(id)arg3 ;
-(void)setConnectionQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id<CRSAppHistoryServiceDelegate>)delegate;
-(NSHashTable *)connections;
-(void)setDelegate:(id<CRSAppHistoryServiceDelegate>)arg1 ;
-(BSServiceConnectionListener *)listener;
-(id)initWithDelegate:(id)arg1 ;
-(void)setListener:(BSServiceConnectionListener *)arg1 ;
-(void)invalidate;
-(void)fetchSessionFeatureKeysWithCompletion:(/*^block*/id)arg1 ;
-(void)_connectionQueue_removeConnection:(id)arg1 ;
-(void)_connectionQueue_addConnection:(id)arg1 ;
-(void)setSessionFeatureKeys:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchUIContextStatesWithCompletion:(/*^block*/id)arg1 ;
-(void)fetchSessionUIContextStatesWithCompletion:(/*^block*/id)arg1 ;
-(void)fetchSessionEchoContextStatesWithCompletion:(/*^block*/id)arg1 ;
@end

