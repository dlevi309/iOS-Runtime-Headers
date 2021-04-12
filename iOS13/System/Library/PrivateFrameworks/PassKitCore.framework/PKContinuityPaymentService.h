/*
* Generated on Monday, March 1, 2021 at 2:31:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/PKContinuityPaymentServiceExportedInterface.h>

@protocol OS_dispatch_queue, PKContinuityPaymentServiceDelegate;
@class PKXPCService, NSObject, NSLock, NSArray;

@interface PKContinuityPaymentService : NSObject <PKContinuityPaymentServiceExportedInterface> {

	PKXPCService* _remoteService;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	NSLock* _remoteDeviceLock;
	NSArray* _remoteDevices;
	id<PKContinuityPaymentServiceDelegate> _delegate;

}

@property (nonatomic,readonly) NSArray * remoteDevices;                                           //@synthesize remoteDevices=_remoteDevices - In the implementation block
@property (assign,nonatomic,__weak) id<PKContinuityPaymentServiceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)sharedService;
-(id)init;
-(id<PKContinuityPaymentServiceDelegate>)delegate;
-(void)setDelegate:(id<PKContinuityPaymentServiceDelegate>)arg1 ;
-(id)_remoteObjectProxy;
-(NSArray *)remoteDevices;
-(id)_synchronousRemoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(id)_remoteObjectProxyWithFailureHandler:(/*^block*/id)arg1 ;
-(id)_remoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(void)noteAccountDeleted;
-(void)updatePaymentDevices;
-(void)sendRemotePaymentRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)didReceiveUpdatedPaymentDevices:(id)arg1 ;
-(void)didReceivePaymentHostUpdate:(id)arg1 forRemotePaymentRequest:(id)arg2 ;
-(void)didReceivePaymentClientUpdate:(id)arg1 forRemotePaymentRequest:(id)arg2 ;
-(void)didReceivePayment:(id)arg1 forRemotePaymentRequest:(id)arg2 ;
-(void)didReceivePaymentResult:(id)arg1 forRemotePaymentRequest:(id)arg2 ;
-(void)didReceiveCancellationForRemotePaymentRequest:(id)arg1 ;
-(id)_remoteObjectProxyWithSemaphore:(id)arg1 ;
-(void)sendPaymentResult:(id)arg1 forRemotePaymentRequest:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setRemoteDevices:(NSArray *)arg1 ;
-(void)sendPaymentHostUpdate:(id)arg1 forRemotePaymentRequest:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)sendPaymentClientUpdate:(id)arg1 forRemotePaymentRequest:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)sendPayment:(id)arg1 forRemotePaymentRequest:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)sendPaymentStatus:(long long)arg1 forRemotePaymentRequest:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)requestInstrumentThumbnail:(id)arg1 forRemoteDevice:(id)arg2 size:(CGSize)arg3 completion:(/*^block*/id)arg4 ;
-(void)presentContinuityPaymentInterfaceWithRequestIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)cancelRemotePaymentRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)hasRemoteDevices;
-(BOOL)canMakePaymentsWithRemoteDevices;
-(void)sendPaymentSetupRequest:(id)arg1 appDisplayName:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)promptDetailsForVirtualCard:(id)arg1 showNotification:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
@end

