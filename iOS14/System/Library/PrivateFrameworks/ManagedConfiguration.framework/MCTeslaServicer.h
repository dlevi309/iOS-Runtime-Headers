/*
* Generated on Thursday, January 14, 2021 at 2:21:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
*/


@class NSXPCConnection, NSString, MCDeviceUploadCredentials, MCDeviceUploadOrganization, MCDeviceUploadSubmitDeviceRequestPayload;

@interface MCTeslaServicer : NSObject {

	/*^block*/id _callback;
	NSXPCConnection* _connection;
	NSString* _nonce;
	MCDeviceUploadCredentials* _userCredentials;
	MCDeviceUploadOrganization* _organization;
	MCDeviceUploadSubmitDeviceRequestPayload* _deviceUploadRequest;

}

@property (nonatomic,copy) id callback;                                                                   //@synthesize callback=_callback - In the implementation block
@property (nonatomic,retain) NSXPCConnection * connection;                                                //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) NSString * nonce;                                                            //@synthesize nonce=_nonce - In the implementation block
@property (nonatomic,retain) MCDeviceUploadCredentials * userCredentials;                                 //@synthesize userCredentials=_userCredentials - In the implementation block
@property (nonatomic,retain) MCDeviceUploadOrganization * organization;                                   //@synthesize organization=_organization - In the implementation block
@property (nonatomic,retain) MCDeviceUploadSubmitDeviceRequestPayload * deviceUploadRequest;              //@synthesize deviceUploadRequest=_deviceUploadRequest - In the implementation block
-(id)callback;
-(void)setCallback:(id)arg1 ;
-(id)init;
-(void)setNonce:(NSString *)arg1 ;
-(void)retrieveDeviceUploadRequestTypesWithCredentials:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(MCDeviceUploadCredentials *)userCredentials;
-(void)setUserCredentials:(MCDeviceUploadCredentials *)arg1 ;
-(void)retrieveDeviceUploadSoldToIdsForOrganization:(id)arg1 credentials:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(NSXPCConnection *)connection;
-(NSString *)nonce;
-(void)submitDeviceUploadRequest:(id)arg1 credentials:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(MCDeviceUploadOrganization *)organization;
-(void)unenrollWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)dealloc;
-(id)_connectionError;
-(void)retrieveDeviceUploadOrganizationsWithCredentials:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)setOrganization:(MCDeviceUploadOrganization *)arg1 ;
-(void)provisionallyEnrollWithNonce:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)fetchConfigurationWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)fetchConfigurationWithoutValidationWithCompletionBlock:(/*^block*/id)arg1 ;
-(MCDeviceUploadSubmitDeviceRequestPayload *)deviceUploadRequest;
-(void)_completeServiceWithSuccess:(BOOL)arg1 response:(id)arg2 error:(id)arg3 ;
-(void)setDeviceUploadRequest:(MCDeviceUploadSubmitDeviceRequestPayload *)arg1 ;
-(void)_callServiceByType:(long long)arg1 onProxy:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)_retrieveProxyObjectAndRunServiceType:(long long)arg1 completionBlock:(/*^block*/id)arg2 ;
@end

