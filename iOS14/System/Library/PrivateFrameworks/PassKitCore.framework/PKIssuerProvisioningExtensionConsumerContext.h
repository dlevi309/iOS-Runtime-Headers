/*
* Generated on Thursday, January 14, 2021 at 2:21:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <Foundation/NSExtensionContext.h>
#import <libobjc.A.dylib/PKIssuerProvisioningExtensionConsumerContextExportedInterface.h>

@class NSMutableArray, NSString;

@interface PKIssuerProvisioningExtensionConsumerContext : NSExtensionContext <PKIssuerProvisioningExtensionConsumerContextExportedInterface> {

	os_unfair_lock_s _lock;
	BOOL _invalidated;
	BOOL _connected;
	NSMutableArray* _blocksQueuedForConnected;
	NSString* _teamID;
	BOOL _entitled;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_extensionAuxiliaryVendorProtocol;
+(id)_extensionAuxiliaryHostProtocol;
-(void)performWhenConnected:(/*^block*/id)arg1 ;
-(id)init;
-(id)remoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(id)synchronousRemoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(void)statusWithCompletion:(/*^block*/id)arg1 ;
-(void)passEntriesWithCompletion:(/*^block*/id)arg1 ;
-(void)remotePassEntriesWithCompletion:(/*^block*/id)arg1 ;
-(void)generateRequestWithEntryIdentifier:(id)arg1 configuration:(id)arg2 certificateChain:(id)arg3 nonce:(id)arg4 nonceSignature:(id)arg5 completionHandler:(/*^block*/id)arg6 ;
-(void)dealloc;
-(void)connectWithCompletion:(/*^block*/id)arg1 ;
@end

