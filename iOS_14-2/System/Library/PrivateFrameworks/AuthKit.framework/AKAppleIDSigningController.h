/*
* Generated on Thursday, January 14, 2021 at 2:22:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)absintheSignatureForData:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setAuthenticationController:(AKAppleIDAuthenticationController *)arg1 ;
-(void)_additionalAbsintheHeadersForRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_additionalAttestationHeadersForRequest:(id)arg1 withInterval:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)signingHeadersForRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)isProxy;
-(id)init;
-(AKAppleIDAuthenticationController *)authenticationController;
-(void)_connectionInterrupted;
-(void)_connectionInvalidated;
-(id)initWithDaemonXPCEndpoint:(id)arg1 ;
-(id)_connection;
-(void)signaturesForData:(id)arg1 options:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setIsProxy:(BOOL)arg1 ;
-(void)dealloc;
@end

