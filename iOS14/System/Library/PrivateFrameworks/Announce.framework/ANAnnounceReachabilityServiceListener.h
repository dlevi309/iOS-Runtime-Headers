/*
* Generated on Thursday, January 14, 2021 at 2:29:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Announce.framework/Announce
*/

#import <libobjc.A.dylib/ANAnnounceReachabilityServiceInterface.h>
#import <libobjc.A.dylib/ANAnnounceReachabilityManagerDelegate.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@class NSXPCListener, ANAnnounceReachabilityManager, NSMutableSet, NSString;

@interface ANAnnounceReachabilityServiceListener : NSObject <ANAnnounceReachabilityServiceInterface, ANAnnounceReachabilityManagerDelegate, NSXPCListenerDelegate> {

	NSXPCListener* _listener;
	ANAnnounceReachabilityManager* _reachabilityManager;
	NSMutableSet* _connections;

}

@property (nonatomic,readonly) NSXPCListener * listener;                                         //@synthesize listener=_listener - In the implementation block
@property (nonatomic,readonly) ANAnnounceReachabilityManager * reachabilityManager;              //@synthesize reachabilityManager=_reachabilityManager - In the implementation block
@property (retain) NSMutableSet * connections;                                                   //@synthesize connections=_connections - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setConnections:(NSMutableSet *)arg1 ;
-(id)init;
-(NSMutableSet *)connections;
-(void)_removeConnection:(id)arg1 ;
-(ANAnnounceReachabilityManager *)reachabilityManager;
-(void)resumeWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_addConnection:(id)arg1 ;
-(NSXPCListener *)listener;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)announceReachabilityForHomeName:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)announceReachabilityForRoomName:(id)arg1 inHomeName:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)announceReachabilityForHomeUUID:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)announceReachabilityForRoomUUID:(id)arg1 inHomeUUID:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)_sendCurrentReachabilityToConnection:(id)arg1 ;
-(void)reachabilityLevel:(unsigned long long)arg1 didChangeForHome:(id)arg2 ;
-(void)reachabilityLevel:(unsigned long long)arg1 didChangeForRoom:(id)arg2 inHome:(id)arg3 ;
@end

