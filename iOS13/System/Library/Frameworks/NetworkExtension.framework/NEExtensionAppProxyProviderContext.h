/*
* Generated on Monday, March 1, 2021 at 2:32:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <NetworkExtension/NEExtensionTunnelProviderContext.h>
#import <libobjc.A.dylib/NEExtensionAppProxyProviderProtocol.h>
#import <libobjc.A.dylib/NEExtensionAppProxyProviderHostProtocol.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString;

@interface NEExtensionAppProxyProviderContext : NEExtensionTunnelProviderContext <NEExtensionAppProxyProviderProtocol, NEExtensionAppProxyProviderHostProtocol> {

	unsigned _delegateInterfaceIndex;
	NSObject*<OS_dispatch_queue> _flowQueue;
	NEFlowDirectorRef _director;

}

@property (retain) NSObject*<OS_dispatch_queue> flowQueue;              //@synthesize flowQueue=_flowQueue - In the implementation block
@property (assign) NEFlowDirectorRef director;                          //@synthesize director=_director - In the implementation block
@property (assign) unsigned delegateInterfaceIndex;                     //@synthesize delegateInterfaceIndex=_delegateInterfaceIndex - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;
-(id)extensionPoint;
-(void)cancelWithError:(id)arg1 ;
-(void)setDelegateInterface:(unsigned)arg1 ;
-(void)setDirector:(NEFlowDirectorRef)arg1 ;
-(NEFlowDirectorRef)director;
-(void)setDelegateInterfaceIndex:(unsigned)arg1 ;
-(unsigned)delegateInterfaceIndex;
-(NSObject*<OS_dispatch_queue>)flowQueue;
-(void)setFlowQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)flowDivertOpenControlSocket;
-(void)flowDivertNewFlow:(NEFlowRef)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)startWithOptions:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setInitialFlowDivertControlSocket:(id)arg1 ;
-(void)stopWithReason:(int)arg1 ;
-(void)openFlowDivertControlSocketWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)flowDivertMatchAppRulesWithFlow:(unsigned)arg1 auditToken:(CFDataRef)arg2 signingIdentifier:(CFStringRef)arg3 realSigningIdentifier:(CFStringRef)arg4 realAuditToken:(CFDataRef)arg5 ;
-(void)setInitialFlowDivertControlSocket:(id)arg1 extraValidation:(BOOL)arg2 ;
@end

