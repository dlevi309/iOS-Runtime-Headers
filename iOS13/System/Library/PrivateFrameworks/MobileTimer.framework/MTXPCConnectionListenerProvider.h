/*
* Generated on Monday, March 1, 2021 at 2:32:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@protocol NAScheduler;
@class MTXPCConnectionInfo, NSString, NSMutableSet, NSXPCListener, NSArray;

@interface MTXPCConnectionListenerProvider : NSObject <NSXPCListenerDelegate> {

	MTXPCConnectionInfo* _info;
	id<NAScheduler> _serializer;
	NSString* _requiredEntitlement;
	/*^block*/id _errorHandler;
	NSMutableSet* _clients;
	NSXPCListener* _connectionListener;

}

@property (nonatomic,retain) id<NAScheduler> serializer;                      //@synthesize serializer=_serializer - In the implementation block
@property (nonatomic,copy) NSString * requiredEntitlement;                    //@synthesize requiredEntitlement=_requiredEntitlement - In the implementation block
@property (nonatomic,retain) MTXPCConnectionInfo * info;                      //@synthesize info=_info - In the implementation block
@property (nonatomic,copy) id errorHandler;                                   //@synthesize errorHandler=_errorHandler - In the implementation block
@property (nonatomic,retain) NSMutableSet * clients;                          //@synthesize clients=_clients - In the implementation block
@property (nonatomic,retain) NSXPCListener * connectionListener;              //@synthesize connectionListener=_connectionListener - In the implementation block
@property (nonatomic,readonly) NSArray * connectedClients; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)providerWithConnectionInfo:(id)arg1 errorHandler:(/*^block*/id)arg2 ;
-(void)dealloc;
-(NSString *)description;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)setErrorHandler:(id)arg1 ;
-(id)errorHandler;
-(MTXPCConnectionInfo *)info;
-(void)setInfo:(MTXPCConnectionInfo *)arg1 ;
-(void)startListening;
-(void)stopListening;
-(NSMutableSet *)clients;
-(id)currentClient;
-(void)setClients:(NSMutableSet *)arg1 ;
-(id)_connectedClients;
-(id<NAScheduler>)serializer;
-(void)setSerializer:(id<NAScheduler>)arg1 ;
-(NSString *)requiredEntitlement;
-(void)setRequiredEntitlement:(NSString *)arg1 ;
-(void)_didInterruptConnection;
-(id)initWithConnectionInfo:(id)arg1 errorHandler:(/*^block*/id)arg2 ;
-(void)_didInvalidateConnection:(id)arg1 ;
-(void)addClientConnection:(id)arg1 clientLink:(id)arg2 ;
-(void)removeClientConnection:(id)arg1 ;
-(id)_currentClientForConnection:(id)arg1 ;
-(void)performBlockOnAllClients:(/*^block*/id)arg1 excludingCurrent:(BOOL)arg2 ;
-(void)performBlockOnClientInfos:(/*^block*/id)arg1 excludeCurrent:(BOOL)arg2 ;
-(void)_performBlockOnClientInfos:(/*^block*/id)arg1 excludingClient:(id)arg2 ;
-(NSArray *)connectedClients;
-(void)performBlockOnCurrentClient:(/*^block*/id)arg1 ;
-(void)performBlockOnAllClients:(/*^block*/id)arg1 ;
-(void)performBlockOnAllClients:(/*^block*/id)arg1 excludingClient:(id)arg2 ;
-(NSXPCListener *)connectionListener;
-(void)setConnectionListener:(NSXPCListener *)arg1 ;
@end

