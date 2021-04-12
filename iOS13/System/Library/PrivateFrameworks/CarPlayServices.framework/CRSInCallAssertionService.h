/*
* Generated on Monday, March 1, 2021 at 2:34:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CarPlayServices.framework/CarPlayServices
*/

#import <libobjc.A.dylib/BSServiceConnectionListenerDelegate.h>
#import <libobjc.A.dylib/CRSInCallClientToServerInterface.h>

@protocol OS_dispatch_queue;
@class CARObserverHashTable, BSServiceConnectionListener, NSObject, NSMutableDictionary, NSHashTable, NSString;

@interface CRSInCallAssertionService : NSObject <BSServiceConnectionListenerDelegate, CRSInCallClientToServerInterface> {

	CARObserverHashTable* _observers;
	BSServiceConnectionListener* _listener;
	NSObject*<OS_dispatch_queue> _connectionQueue;
	NSMutableDictionary* _connections;
	NSHashTable* _activatedConnections;
	NSHashTable* _bannersAllowedConnections;

}

@property (nonatomic,retain) CARObserverHashTable * observers;                          //@synthesize observers=_observers - In the implementation block
@property (nonatomic,retain) BSServiceConnectionListener * listener;                    //@synthesize listener=_listener - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> connectionQueue;              //@synthesize connectionQueue=_connectionQueue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * connections;                         //@synthesize connections=_connections - In the implementation block
@property (nonatomic,retain) NSHashTable * activatedConnections;                        //@synthesize activatedConnections=_activatedConnections - In the implementation block
@property (nonatomic,retain) NSHashTable * bannersAllowedConnections;                   //@synthesize bannersAllowedConnections=_bannersAllowedConnections - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(BSServiceConnectionListener *)listener;
-(id)_init;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)setListener:(BSServiceConnectionListener *)arg1 ;
-(NSObject*<OS_dispatch_queue>)connectionQueue;
-(void)setObservers:(CARObserverHashTable *)arg1 ;
-(CARObserverHashTable *)observers;
-(void)listener:(id)arg1 didReceiveConnection:(id)arg2 withContext:(id)arg3 ;
-(NSMutableDictionary *)connections;
-(void)setConnections:(NSMutableDictionary *)arg1 ;
-(void)setConnectionQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(oneway void)setAllowsBanners:(id)arg1 ;
-(void)_connectionQueue_removeConnection:(id)arg1 ;
-(void)_connectionQueue_addConnection:(id)arg1 ;
-(void)addObserver:(id)arg1 notifyIfNeeded:(BOOL)arg2 ;
-(NSHashTable *)activatedConnections;
-(NSHashTable *)bannersAllowedConnections;
-(oneway void)presentInCallService;
-(void)setActivatedConnections:(NSHashTable *)arg1 ;
-(void)setBannersAllowedConnections:(NSHashTable *)arg1 ;
@end

