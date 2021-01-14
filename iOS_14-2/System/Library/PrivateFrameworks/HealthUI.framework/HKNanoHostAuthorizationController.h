/*
* Generated on Thursday, January 14, 2021 at 2:24:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setXpcConnection:(NSXPCConnection *)arg1 ;
-(NSXPCConnection *)xpcConnection;
-(void)didFinishWithError:(id)arg1 ;
-(id)init;
-(id<HKHealthPrivacyHostAuthorizationControllerDelegate>)delegate;
-(void)show;
-(void)connectionDidInvalidate;
-(void)setDelegate:(id<HKHealthPrivacyHostAuthorizationControllerDelegate>)arg1 ;
-(void)invalidate;
-(void)connectionDidInterrupt;
-(void)setRequestRecord:(id)arg1 presentationRequests:(id)arg2 ;
-(void)_remoteObjectProxyWithCompletion:(/*^block*/id)arg1 errorHandler:(/*^block*/id)arg2 ;
@end

