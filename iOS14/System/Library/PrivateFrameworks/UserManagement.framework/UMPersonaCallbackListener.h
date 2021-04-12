/*
* Generated on Thursday, January 14, 2021 at 2:23:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UserManagement.framework/UserManagement
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@class NSString, NSMutableSet, NSXPCListener;

@interface UMPersonaCallbackListener : NSObject <NSXPCListenerDelegate> {

	NSString* _machServiceName;
	NSMutableSet* _xpcConnections;
	NSXPCListener* _xpcListener;
	/*^block*/id _personaUpdateCallbackHandler;

}

@property (nonatomic,retain) NSString * machServiceName;                 //@synthesize machServiceName=_machServiceName - In the implementation block
@property (nonatomic,retain) NSMutableSet * xpcConnections;              //@synthesize xpcConnections=_xpcConnections - In the implementation block
@property (nonatomic,retain) NSXPCListener * xpcListener;                //@synthesize xpcListener=_xpcListener - In the implementation block
@property (nonatomic,copy) id personaUpdateCallbackHandler;              //@synthesize personaUpdateCallbackHandler=_personaUpdateCallbackHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedServer;
-(void)uploadContentWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)willSwitchToUser:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_setUpUMServerXPCConnectionIfNeeded:(id)arg1 ;
-(void)userSwitchTaskListDidUpdate;
-(void)personaListDidUpdateCompletionHandler:(/*^block*/id)arg1 ;
-(void)deviceLoginSessionStateDidUpdate;
-(void)setXpcListener:(NSXPCListener *)arg1 ;
-(void)setMachServiceName:(NSString *)arg1 ;
-(NSMutableSet *)xpcConnections;
-(id)init;
-(void)bubbleDidPop;
-(id)setupPersonaCallbackMachService:(id)arg1 callbackHandler:(/*^block*/id)arg2 ;
-(void)readyToSwitchToUser:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSString *)machServiceName;
-(void)_tearDownConnectionToUMServerWithConnection:(id)arg1 ;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)personaUpdateCallbackForMachServiceCompletionHandler:(/*^block*/id)arg1 ;
-(NSXPCListener *)xpcListener;
-(void)setPersonaUpdateCallbackHandler:(id)arg1 ;
-(void)setXpcConnections:(NSMutableSet *)arg1 ;
-(id)personaUpdateCallbackHandler;
-(void)readyToSwitchToLoginSession:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

