/*
* Generated on Monday, March 1, 2021 at 2:34:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <libobjc.A.dylib/HKHealthPrivacyHostRemoteViewController.h>

@protocol HKHealthPrivacyHostAuthorizationControllerDelegate;
@class NSXPCConnection;

@interface HKNanoHostAuthorizationController : NSObject <HKHealthPrivacyHostRemoteViewController> {

	id<HKHealthPrivacyHostAuthorizationControllerDelegate> _delegate;
	NSXPCConnection* _xpcConnection;

}

@property (nonatomic,retain) NSXPCConnection * xpcConnection;                                                     //@synthesize xpcConnection=_xpcConnection - In the implementation block
@property (assign,nonatomic,__weak) id<HKHealthPrivacyHostAuthorizationControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(void)invalidate;
-(id<HKHealthPrivacyHostAuthorizationControllerDelegate>)delegate;
-(void)setDelegate:(id<HKHealthPrivacyHostAuthorizationControllerDelegate>)arg1 ;
-(NSXPCConnection *)xpcConnection;
-(void)setXpcConnection:(NSXPCConnection *)arg1 ;
-(void)show;
-(void)didFinishWithError:(id)arg1 ;
-(void)connectionDidInterrupt;
-(void)connectionDidInvalidate;
-(void)setRequestRecord:(id)arg1 presentationRequests:(id)arg2 ;
-(void)_remoteObjectProxyWithCompletion:(/*^block*/id)arg1 errorHandler:(/*^block*/id)arg2 ;
@end

