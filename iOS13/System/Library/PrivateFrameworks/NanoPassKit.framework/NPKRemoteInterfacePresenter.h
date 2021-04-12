/*
* Generated on Monday, March 1, 2021 at 2:35:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/


@protocol NPKRemoteInterfacePresenterDelegate;
@class NSXPCConnection;

@interface NPKRemoteInterfacePresenter : NSObject {

	id<NPKRemoteInterfacePresenterDelegate> _delegate;
	NSXPCConnection* _xpcConnection;

}

@property (nonatomic,retain) NSXPCConnection * xpcConnection;                                      //@synthesize xpcConnection=_xpcConnection - In the implementation block
@property (assign,nonatomic,__weak) id<NPKRemoteInterfacePresenterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(id<NPKRemoteInterfacePresenterDelegate>)delegate;
-(void)setDelegate:(id<NPKRemoteInterfacePresenterDelegate>)arg1 ;
-(NSXPCConnection *)xpcConnection;
-(void)setXpcConnection:(NSXPCConnection *)arg1 ;
-(void)clearInAppInterfaceForSkeletonPeerPaymentQuote:(id)arg1 withError:(id)arg2 ;
-(void)presentPasscodeUpgradeRequestWithCompletion:(/*^block*/id)arg1 ;
-(void)tearDownPasscodeUpgradeRequestWithPasscodeChanged:(BOOL)arg1 error:(id)arg2 ;
-(void)presentInAppPaymentInterfaceWithPaymentRequest:(id)arg1 forHostApplicationName:(id)arg2 hostBundleIdentifier:(id)arg3 hostProcessIdentifier:(int)arg4 hostIdentifier:(id)arg5 orientation:(id)arg6 completion:(/*^block*/id)arg7 ;
-(void)presentContinuityPaymentInterfaceWithRemotePaymentRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)showInAppInterfaceWithSkeletonPeerPaymentQuote:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)presentSetupApplePayAlert:(id)arg1 ;
@end

