/*
* Generated on Monday, March 1, 2021 at 2:34:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticsKit.framework/DiagnosticsKit
*/

#import <Foundation/NSExtensionContext.h>
#import <libobjc.A.dylib/DKDiagnosticRemoteContext.h>
#import <libobjc.A.dylib/DKResponder.h>

@class NSString;

@interface DKDiagnosticContext : NSExtensionContext <DKDiagnosticRemoteContext, DKResponder>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;
-(void)completeWithDiagnosticResult:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)cancelRemoteDiagnosticWithCompletion:(/*^block*/id)arg1 ;
-(void)startRemoteDiagnosticWithDiagnosticParameters:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getAsset:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setScreenToBrightness:(float)arg1 animate:(BOOL)arg2 ;
-(void)enableVolumeHUD:(BOOL)arg1 ;
@end

