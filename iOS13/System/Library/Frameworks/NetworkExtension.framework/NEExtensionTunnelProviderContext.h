/*
* Generated on Monday, March 1, 2021 at 2:32:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;
-(void)cancelWithError:(id)arg1 ;
-(void)handleAppMessage:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setConfiguration:(id)arg1 extensionIdentifier:(id)arg2 ;
-(void)establishIPCWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)didSetReasserting:(BOOL)arg1 ;
-(void)setTunnelConfiguration:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)handleIPCDetached;
-(NEIPC *)ipc;
-(void)setIpc:(NEIPC *)arg1 ;
-(NSObject*<OS_dispatch_source>)ipcIdleTimer;
-(void)setIpcIdleTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)resetIPCIdleTimer;
@end

