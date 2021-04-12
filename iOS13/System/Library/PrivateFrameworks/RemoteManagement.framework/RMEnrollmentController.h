/*
* Generated on Monday, March 1, 2021 at 2:35:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/RemoteManagement
*/


@class NSMutableDictionary, NSUserDefaults;

@interface RMEnrollmentController : NSObject {

	NSMutableDictionary* _connectionByServiceName;
	BOOL _synchronous;
	NSUserDefaults* _remoteManagementUserDefaults;

}

@property (assign,getter=isSynchronous,nonatomic) BOOL synchronous;                      //@synthesize synchronous=_synchronous - In the implementation block
@property (nonatomic,retain) NSUserDefaults * remoteManagementUserDefaults;              //@synthesize remoteManagementUserDefaults=_remoteManagementUserDefaults - In the implementation block
+(id)userDefaultsEnrollmentURL;
+(id)appleUserEnrollmentServiceURL;
+(id)synchronousEnrollmentController;
-(id)init;
-(id)_agentConnection;
-(id)_daemonConnection;
-(void)setSynchronous:(BOOL)arg1 ;
-(id)_daemonProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(BOOL)isSynchronous;
-(void)enrollDeviceChannelWithURI:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_agentProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(void)enrollUserChannelWithURI:(id)arg1 authenticationCredential:(id)arg2 withDataSeparation:(BOOL)arg3 passcodeData:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)deviceChannelEnrollmentExistsWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSUserDefaults *)remoteManagementUserDefaults;
-(void)setRemoteManagementUserDefaults:(NSUserDefaults *)arg1 ;
@end

