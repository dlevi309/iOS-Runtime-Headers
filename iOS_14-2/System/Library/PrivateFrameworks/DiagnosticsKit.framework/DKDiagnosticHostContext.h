/*
* Generated on Thursday, January 14, 2021 at 2:27:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticsKit.framework/DiagnosticsKit
*/

#import <Foundation/NSExtensionContext.h>
#import <libobjc.A.dylib/DKDiagnosticHostRemoteContext.h>
#import <libobjc.A.dylib/DKExtensionHostAdapter.h>

@protocol DKExtensionHostAdapterDelegate;
@class NSXPCConnection, NSString;

@interface DKDiagnosticHostContext : NSExtensionContext <DKDiagnosticHostRemoteContext, DKExtensionHostAdapter> {

	BOOL _isXPC;
	id<DKExtensionHostAdapterDelegate> _delegate;
	NSXPCConnection* _xpcConnection;

}

@property (nonatomic,retain) NSXPCConnection * xpcConnection;                                 //@synthesize xpcConnection=_xpcConnection - In the implementation block
@property (assign,nonatomic) BOOL isXPC;                                                      //@synthesize isXPC=_isXPC - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<DKExtensionHostAdapterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)_extensionAuxiliaryVendorProtocol;
+(id)_extensionAuxiliaryHostProtocol;
-(void)setXpcConnection:(NSXPCConnection *)arg1 ;
-(NSXPCConnection *)xpcConnection;
-(BOOL)isXPC;
-(void)cancelWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithConnection:(id)arg1 ;
-(id<DKExtensionHostAdapterDelegate>)delegate;
-(void)setDelegate:(id<DKExtensionHostAdapterDelegate>)arg1 ;
-(void)setIsXPC:(BOOL)arg1 ;
-(void)startWithPayload:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)remoteHostEnableVolumeHUD:(BOOL)arg1 ;
-(void)remoteHostSetScreenToBrightness:(float)arg1 animate:(BOOL)arg2 ;
-(void)remoteHostGetAsset:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)remoteHostCompleteWithResult:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)remoteHostShowUI:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)remoteHostRequestPluginReloadOnFinishWithCompletion:(/*^block*/id)arg1 ;
-(id)_helperConnnection;
@end

