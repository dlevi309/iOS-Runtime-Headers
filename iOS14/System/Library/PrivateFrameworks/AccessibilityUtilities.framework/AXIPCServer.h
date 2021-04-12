/*
* Generated on Thursday, January 14, 2021 at 2:22:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
*/

#import <AccessibilityUtilities/AccessibilityUtilities-Structs.h>
#import <libobjc.A.dylib/AXIPCServerClientRegistrationDelegate.h>

@class NSMutableDictionary, NSMutableSet, NSString;

@interface AXIPCServer : NSObject <AXIPCServerClientRegistrationDelegate> {

	/*^block*/id _defaultHandler;
	CFRunLoopSourceRef _serverRunLoopSource;
	unsigned _serverPort;
	NSMutableDictionary* _validSecurityTokens;
	NSMutableSet* _connectedClients;
	/*^block*/id _clientInvalidationHandler;
	NSMutableDictionary* _entitlements;
	unsigned _assignedServerPort;
	unsigned _customQueueSize;
	BOOL _running;
	BOOL _perPidService;
	NSString* _serviceName;
	NSMutableDictionary* _handlers;

}

@property (assign,getter=isRunning,nonatomic) BOOL running;               //@synthesize running=_running - In the implementation block
@property (nonatomic,retain) NSString * serviceName;                      //@synthesize serviceName=_serviceName - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * handlers;              //@synthesize handlers=_handlers - In the implementation block
@property (nonatomic,copy) id defaultHandler; 
@property (assign,nonatomic) BOOL perPidService;                          //@synthesize perPidService=_perPidService - In the implementation block
@property (nonatomic,readonly) unsigned machPort;                         //@synthesize serverPort=_serverPort - In the implementation block
@property (nonatomic,copy) id clientInvalidationCallback; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSMutableDictionary *)handlers;
-(void)setRunning:(BOOL)arg1 ;
-(void)setHandlers:(NSMutableDictionary *)arg1 ;
-(void)_handleIncomingMessage:(id)arg1 securityToken:(SCD_Struct_AX16)arg2 auditToken:(SCD_Struct_AX4)arg3 clientPort:(unsigned)arg4 completion:(/*^block*/id)arg5 ;
-(id)defaultHandler;
-(unsigned)machPort;
-(id)initWithServiceName:(id)arg1 perPidService:(BOOL)arg2 ;
-(void)_applyCustomQueueSize;
-(void)setHandlerWithTarget:(id)arg1 selector:(SEL)arg2 async:(BOOL)arg3 forKey:(int)arg4 ;
-(void)_addPossibleRequiredEntitlementsToMessageWithKey:(int)arg1 first:(id)arg2 vothers:(char*)arg3 ;
-(void)setHandler:(/*^block*/id)arg1 forKey:(int)arg2 ;
-(void)_startServerThread;
-(void)removeAllHandlersForTarget:(id)arg1 ;
-(void)_handleClientInvalidation:(unsigned)arg1 ;
-(id)_clientIdentificationForAuditToken:(SCD_Struct_AX4)arg1 ;
-(id)initWithPort:(unsigned)arg1 serviceRunLoopSource:(CFRunLoopSourceRef)arg2 ;
-(void)serverClientRegistrationInvalidated:(id)arg1 ;
-(void)removeHandlerForKey:(int)arg1 ;
-(NSString *)description;
-(void)_handleClientRegistration:(id)arg1 ;
-(void)setServiceRunLoopSource:(CFRunLoopSourceRef)arg1 ;
-(void)setClientInvalidationCallback:(id)arg1 ;
-(BOOL)stopServerWithError:(id*)arg1 ;
-(BOOL)__slowpath__clientWithAuditToken:(SCD_Struct_AX4)arg1 hasRequiredEntitlementFromSet:(id)arg2 ;
-(void)setHandlerWithTarget:(id)arg1 selector:(SEL)arg2 async:(BOOL)arg3 forKey:(int)arg4 possibleRequiredEntitlements:(id)arg5 ;
-(BOOL)startServerWithError:(id*)arg1 ;
-(void)setHandlerWithTarget:(id)arg1 selector:(SEL)arg2 forKey:(int)arg3 possibleRequiredEntitlements:(id)arg4 ;
-(void)addPossibleRequiredEntitlement:(id)arg1 forMessageWithKey:(int)arg2 ;
-(void)_registerContext:(id)arg1 forKey:(int)arg2 ;
-(NSString *)serviceName;
-(BOOL)isRunning;
-(void)setPerPidService:(BOOL)arg1 ;
-(BOOL)_clientWithPort:(unsigned)arg1 auditToken:(SCD_Struct_AX4)arg2 hasAnyEntitlementRequiredForMessage:(id)arg3 ;
-(id)clientInvalidationCallback;
-(void)setDefaultHandler:(id)arg1 ;
-(void)setQueueSize:(unsigned)arg1 ;
-(void)setServiceName:(NSString *)arg1 ;
-(void)setHandlerWithTarget:(id)arg1 selector:(SEL)arg2 forKey:(int)arg3 ;
-(BOOL)_handleErrorWithMessage:(id)arg1 outError:(id*)arg2 ;
-(void)removePossibleRequiredEntitlement:(id)arg1 forMessageWithKey:(int)arg2 ;
-(BOOL)perPidService;
-(void)dealloc;
@end

