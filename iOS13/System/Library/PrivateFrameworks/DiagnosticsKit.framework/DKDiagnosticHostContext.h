/*
* Generated on Monday, March 1, 2021 at 2:34:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticsKit.framework/DiagnosticsKit
*/

#import <Foundation/NSExtensionContext.h>
#import <libobjc.A.dylib/DKDiagnosticHostRemoteContext.h>
#import <libobjc.A.dylib/DKExtensionHostAdapter.h>

@protocol DKExtensionHostAdapterDelegate;
@class NSString;

@interface DKDiagnosticHostContext : NSExtensionContext <DKDiagnosticHostRemoteContext, DKExtensionHostAdapter> {

	id<DKExtensionHostAdapterDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<DKExtensionHostAdapterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;
-(id<DKExtensionHostAdapterDelegate>)delegate;
-(void)setDelegate:(id<DKExtensionHostAdapterDelegate>)arg1 ;
-(void)cancelWithCompletion:(/*^block*/id)arg1 ;
-(void)startWithPayload:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)remoteHostEnableVolumeHUD:(BOOL)arg1 ;
-(void)remoteHostSetScreenToBrightness:(float)arg1 animate:(BOOL)arg2 ;
-(void)remoteHostGetAsset:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)remoteHostCompleteWithResult:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

