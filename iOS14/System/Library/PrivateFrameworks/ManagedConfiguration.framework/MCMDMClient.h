/*
* Generated on Thursday, January 14, 2021 at 2:21:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
*/


@protocol OS_dispatch_queue;
#import <ManagedConfiguration/ManagedConfiguration-Structs.h>
@class NSXPCConnection, NSObject;

@interface MCMDMClient : NSObject {

	NSXPCConnection* _xpcConnection;
	NSObject*<OS_dispatch_queue> _xpcConnectionSyncQueue;

}

@property (nonatomic,retain) NSXPCConnection * xpcConnection;                                    //@synthesize xpcConnection=_xpcConnection - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> xpcConnectionSyncQueue;              //@synthesize xpcConnectionSyncQueue=_xpcConnectionSyncQueue - In the implementation block
+(id)sharedClient;
-(void)setXpcConnection:(NSXPCConnection *)arg1 ;
-(NSXPCConnection *)xpcConnection;
-(int)accessRights;
-(id)init;
-(BOOL)authenticateWithCheckInURL:(id)arg1 identity:(SecIdentityRef)arg2 pinnedSecCertificateRefs:(id)arg3 pinningRevocationCheckRequired:(BOOL)arg4 topic:(id)arg5 useDevelopmentAPNS:(BOOL)arg6 signMessage:(BOOL)arg7 isUserEnrollment:(BOOL)arg8 enrollmentID:(id)arg9 outError:(id*)arg10 ;
-(void)processDeviceRequest:(id)arg1 encodeResponse:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)isManagedByMDM;
-(void)scheduleTokenUpdateIfNecessary;
-(void)_queue_createAndStartMDMXPCConnection;
-(void)notifyNewConfiguration;
-(void)_destroyXPCConnectionAndInvalidate:(BOOL)arg1 ;
-(void)migrateMDMWithContext:(int)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)checkOutCheckInURL:(id)arg1 identity:(SecIdentityRef)arg2 pinnedSecCertificateRefs:(id)arg3 pinningRevocationCheckRequired:(BOOL)arg4 topic:(id)arg5 signMessage:(BOOL)arg6 isUserEnrollment:(BOOL)arg7 enrollmentID:(id)arg8 outError:(id*)arg9 ;
-(void)simulatePush;
-(void)scheduleTokenUpdate;
-(BOOL)isActivationLockAllowedWhileSupervised;
-(id)deviceEnrollmentAuthenticationDict;
-(void)getAssertionDescriptionsWithCompletion:(/*^block*/id)arg1 ;
-(NSObject*<OS_dispatch_queue>)xpcConnectionSyncQueue;
-(id)userEnrollmentAuthenticationDictWithEnrollmentID:(id)arg1 ;
-(void)simulatePushIfNetworkTetheredWithCompletion:(/*^block*/id)arg1 ;
-(void)retryNotNowResponse;
-(void)dealloc;
-(void)uprootMDM;
@end

