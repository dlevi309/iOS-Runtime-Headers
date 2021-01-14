/*
* Generated on Thursday, January 14, 2021 at 2:28:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/RemoteManagement
*/


@class NSMutableDictionary;

@interface RMEnrollmentController : NSObject {

	NSMutableDictionary* _connectionByServiceName;
	BOOL _synchronous;

}

@property (assign,getter=isSynchronous,nonatomic) BOOL synchronous;              //@synthesize synchronous=_synchronous - In the implementation block
+(id)userDefaultsEnrollmentURL;
+(id)synchronousEnrollmentController;
-(id)_daemonConnection;
-(id)_agentConnection;
-(id)init;
-(id)_daemonProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(BOOL)isSynchronous;
-(void)setSynchronous:(BOOL)arg1 ;
-(void)enrollDeviceChannelWithURI:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)deviceChannelEnrollmentExistsWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)_agentProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(void)managementChannelWithAccountIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_webAuthenticationURL:(id)arg1 withUserIdentifierQuery:(id)arg2 ;
-(void)_discoverWebAuthenticationURLForDomain:(id)arg1 port:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_webAuthenticationURLFromWellKnownURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)enrollUserChannelWithURI:(id)arg1 authenticationCredential:(id)arg2 withDataSeparation:(BOOL)arg3 passcodeData:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)discoverWebAuthenticationURLForUserIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

