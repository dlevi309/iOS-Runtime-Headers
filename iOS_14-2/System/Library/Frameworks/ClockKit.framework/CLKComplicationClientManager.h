/*
* Generated on Thursday, January 14, 2021 at 2:26:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ClockKit.framework/ClockKit
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@class NSMutableDictionary, NSLock, NSMutableSet, BKSApplicationStateMonitor, NSDictionary, NSString;

@interface CLKComplicationClientManager : NSObject <NSXPCListenerDelegate> {

	NSMutableDictionary* _clientsByIdentifier;
	NSLock* _clientsByIdentifierLock;
	NSMutableDictionary* _waitForClientRegistriesByIdentifier;
	NSLock* _waitForClientRegistriesByIdentifierLock;
	NSMutableSet* _anonymousClients;
	NSLock* _anonymousClientsLock;
	NSMutableSet* _clientPIDs;
	NSLock* _clientPIDsLock;
	unsigned long long _nextWaitForClientTokenValue;
	NSLock* _nextWaitForClientTokenValueLock;
	BKSApplicationStateMonitor* _applicationStateMonitor;
	/*^block*/id _clientRegistrationHandler;
	/*^block*/id _clientUnregistrationHandler;

}

@property (nonatomic,copy) id clientRegistrationHandler;                        //@synthesize clientRegistrationHandler=_clientRegistrationHandler - In the implementation block
@property (nonatomic,copy) id clientUnregistrationHandler;                      //@synthesize clientUnregistrationHandler=_clientUnregistrationHandler - In the implementation block
@property (nonatomic,readonly) NSDictionary * clientsByIdentifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedClientManager;
-(id)init;
-(void)_handleApplicationStateChange:(id)arg1 ;
-(void)_addClient:(id)arg1 ;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)_removeClient:(id)arg1 ;
-(void)dealloc;
-(NSDictionary *)clientsByIdentifier;
-(void)enumerateClientsWithBlock:(/*^block*/id)arg1 ;
-(id)waitForClientWithIdentifier:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)stopWaitingForClientWithIdentifier:(id)arg1 forToken:(id)arg2 ;
-(id)clientRegistrationHandler;
-(void)setClientRegistrationHandler:(id)arg1 ;
-(id)clientUnregistrationHandler;
-(void)setClientUnregistrationHandler:(id)arg1 ;
@end

