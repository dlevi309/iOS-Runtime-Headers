/*
* Generated on Thursday, January 14, 2021 at 2:22:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/

#import <NetworkExtension/NEExtensionProviderContext.h>
#import <libobjc.A.dylib/NEExtensionTunnelProviderProtocol.h>
#import <libobjc.A.dylib/NEExtensionTunnelProviderHostProtocol.h>

@protocol OS_dispatch_source;
@class NEIPC, NSObject, NSString;

@interface NEExtensionTunnelProviderContext : NEExtensionProviderContext <NEExtensionTunnelProviderProtocol, NEExtensionTunnelProviderHostProtocol> {

	NEIPC* _ipc;
	NSObject*<OS_dispatch_source> _ipcIdleTimer;

}

@property (retain) NEIPC * ipc;                                             //@synthesize ipc=_ipc - In the implementation block
@property (retain) NSObject*<OS_dispatch_source> ipcIdleTimer;              //@synthesize ipcIdleTimer=_ipcIdleTimer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_extensionAuxiliaryVendorProtocol;
+(id)_extensionAuxiliaryHostProtocol;
-(NEIPC *)ipc;
-(void)cancelWithError:(id)arg1 ;
-(void)setIpc:(NEIPC *)arg1 ;
-(void)handleAppMessage:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setConfiguration:(id)arg1 extensionIdentifier:(id)arg2 ;
-(void)establishIPCWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)didSetReasserting:(BOOL)arg1 ;
-(void)handleIPCDetached;
-(void)setTunnelConfiguration:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSObject*<OS_dispatch_source>)ipcIdleTimer;
-(void)setIpcIdleTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)resetIPCIdleTimer;
@end

