/*
* Generated on Monday, March 1, 2021 at 2:31:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
*/


@protocol OS_dispatch_queue;
#import <AuthKit/AuthKit-Structs.h>
@class NSObject, NSXPCListenerEndpoint, NSXPCConnection, AKAppleIDAuthenticationController;

@interface AKAppleIDSigningController : NSObject {

	os_unfair_lock_s _signerLock;
	NSObject*<OS_dispatch_queue> _signingQueue;
	NSXPCListenerEndpoint* _listenerEndpoint;
	NSXPCConnection* _connection;
	BOOL _isProxy;
	AKAppleIDAuthenticationController* _authenticationController;

}

@property (nonatomic,retain) AKAppleIDAuthenticationController * authenticationController;              //@synthesize authenticationController=_authenticationController - In the implementation block
@property (assign,nonatomic) BOOL isProxy;                                                              //@synthesize isProxy=_isProxy - In the implementation block
-(BOOL)isProxy;
-(id)init;
-(void)dealloc;
-(id)_connection;
-(void)_connectionInvalidated;
-(AKAppleIDAuthenticationController *)authenticationController;
-(id)initWithDaemonXPCEndpoint:(id)arg1 ;
-(void)signaturesForData:(id)arg1 options:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_connectionInterrupted;
-(void)absintheSignatureForData:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setIsProxy:(BOOL)arg1 ;
-(void)setAuthenticationController:(AKAppleIDAuthenticationController *)arg1 ;
-(void)_additionalAbsintheHeadersForRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_additionalAttestationHeadersForRequest:(id)arg1 withInterval:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)signingHeadersForRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

