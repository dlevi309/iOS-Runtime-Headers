/*
* Generated on Thursday, January 14, 2021 at 2:21:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/PKInvalidatable.h>

@protocol NSCopying;
@class PKIssuerProvisioningExtensionConsumerContext, NSExtension, NSString;

@interface PKIssuerProvisioningExtensionConsumerCoordinator : NSObject <PKInvalidatable> {

	id<NSCopying> _requestIdentifier;
	PKIssuerProvisioningExtensionConsumerContext* _context;
	os_unfair_lock_s _lock;
	BOOL _invalidated;
	NSExtension* _extension;

}

@property (nonatomic,readonly) NSExtension * extension;                            //@synthesize extension=_extension - In the implementation block
@property (getter=isInvalidated,nonatomic,readonly) BOOL invalidated; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)beginWithExtension:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)isInvalidated;
-(id)init;
-(NSExtension *)extension;
-(void)invalidate;
-(id)_initWithExtension:(id)arg1 ;
-(void)_performWhenConnected:(/*^block*/id)arg1 ;
-(void)statusWithCompletion:(/*^block*/id)arg1 ;
-(void)passEntriesWithCompletion:(/*^block*/id)arg1 ;
-(void)remotePassEntriesWithCompletion:(/*^block*/id)arg1 ;
-(void)generateRequestWithEntryIdentifier:(id)arg1 configuration:(id)arg2 certificateChain:(id)arg3 nonce:(id)arg4 nonceSignature:(id)arg5 completionHandler:(/*^block*/id)arg6 ;
-(void)dealloc;
@end

