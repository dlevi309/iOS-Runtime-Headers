/*
* Generated on Monday, March 1, 2021 at 2:31:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/PKSubcredentialPairingCoordinatorInterface.h>

@protocol OS_dispatch_source, PKAccessPassProvisioningControllerDelegate;
@class PKAccessPassProvisioningConfiguration, NSXPCListener, NSObject, NSXPCConnection, NSString;

@interface PKAccessPassProvisioningCoordinator : NSObject <NSXPCListenerDelegate, PKSubcredentialPairingCoordinatorInterface> {

	PKAccessPassProvisioningConfiguration* _configuration;
	NSXPCListener* _listener;
	NSObject*<OS_dispatch_source> _timer;
	atomic_flag _hasCalledDidFinishDelegate;
	os_unfair_lock_s _lock;
	NSXPCConnection* _connection;
	BOOL _hasPresentBeenCalled;
	BOOL _isServicePresented;
	/*^block*/id _presentationCompletionBlock;
	id<PKAccessPassProvisioningControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<PKAccessPassProvisioningControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id<PKAccessPassProvisioningControllerDelegate>)delegate;
-(void)setDelegate:(id<PKAccessPassProvisioningControllerDelegate>)arg1 ;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(id)initWithConfiguration:(id)arg1 ;
-(void)dismissWithCompletion:(/*^block*/id)arg1 ;
-(void)presentWithCompletion:(/*^block*/id)arg1 ;
-(void)startPresentationTimeoutTimer;
-(void)cancelPresentationTimeoutTimer;
-(void)provisioningDidFinishWithPaymentPass:(id)arg1 error:(id)arg2 ;
-(void)_provisioningDidFinishWithPaymentPass:(id)arg1 error:(id)arg2 ;
-(void)startConnectionWithCompletion:(/*^block*/id)arg1 ;
@end

