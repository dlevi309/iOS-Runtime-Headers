/*
* Generated on Monday, March 1, 2021 at 2:30:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)setXpcListener:(NSXPCListener *)arg1 ;
-(NSXPCListener *)xpcListener;
-(void)setMachServiceName:(NSString *)arg1 ;
-(void)uploadContentWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)willSwitchToUser:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)readyToSwitchToUser:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)readyToSwitchToLoginSession:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)userSwitchTaskListDidUpdate;
-(void)deviceLoginSessionStateDidUpdate;
-(void)bubbleDidPop;
-(void)personaListDidUpdateCompletionHandler:(/*^block*/id)arg1 ;
-(void)personaUpdateCallbackForMachServiceCompletionHandler:(/*^block*/id)arg1 ;
-(void)_setUpUMServerXPCConnectionIfNeeded:(id)arg1 ;
-(NSString *)machServiceName;
-(id)setupPersonaCallbackMachService:(id)arg1 callbackHandler:(/*^block*/id)arg2 ;
-(void)setPersonaUpdateCallbackHandler:(id)arg1 ;
-(id)personaUpdateCallbackHandler;
-(NSMutableSet *)xpcConnections;
-(void)_tearDownConnectionToUMServerWithConnection:(id)arg1 ;
-(void)setXpcConnections:(NSMutableSet *)arg1 ;
@end

