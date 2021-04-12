/*
* Generated on Thursday, January 14, 2021 at 2:25:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
*/


@class NSString, NSXPCConnection, TransparencyApplication;

@interface KTVerifier : NSObject {

	NSString* _applicationIdentifier;
	NSXPCConnection* _connection;
	TransparencyApplication* _application;

}

@property (retain) TransparencyApplication * application;              //@synthesize application=_application - In the implementation block
@property (readonly) NSString * applicationIdentifier;                 //@synthesize applicationIdentifier=_applicationIdentifier - In the implementation block
@property (readonly) NSXPCConnection * connection;                     //@synthesize connection=_connection - In the implementation block
-(void)forceDutyCycle:(/*^block*/id)arg1 ;
-(void)setApplication:(TransparencyApplication *)arg1 ;
-(void)validateEnrollmentUriResult:(id)arg1 uuid:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(id)initWithApplication:(id)arg1 ;
-(void)invokeXPCAsynchronousCallWithBlock:(/*^block*/id)arg1 failureBlock:(/*^block*/id)arg2 ;
-(void)validatePeerUri:(id)arg1 accountID:(id)arg2 loggableDatas:(id)arg3 queryResponse:(id)arg4 promiseCompletionBlock:(/*^block*/id)arg5 ;
-(void)clearLogClientConfiguration:(/*^block*/id)arg1 ;
-(id)validatePeerUri:(id)arg1 accountID:(id)arg2 loggableDatas:(id)arg3 queryRequest:(id)arg4 queryResponse:(id)arg5 error:(id*)arg6 ;
-(void)copyDataStoreStatistics:(/*^block*/id)arg1 ;
-(void)forceValidateUUID:(id)arg1 uri:(id)arg2 block:(/*^block*/id)arg3 ;
-(void)clearPublicKeyStoreState:(/*^block*/id)arg1 ;
-(void)clearState:(/*^block*/id)arg1 ;
-(void)validatePeerUriResult:(id)arg1 uuid:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(NSString *)applicationIdentifier;
-(id)validateEnrollmentUri:(id)arg1 accountID:(id)arg2 loggableData:(id)arg3 insertResponse:(id)arg4 error:(id*)arg5 ;
-(void)forceApplicationKeysFetch:(/*^block*/id)arg1 ;
-(void)forceApplicationConfig:(/*^block*/id)arg1 ;
-(NSXPCConnection *)connection;
-(void)copyLogClientConfiguration:(/*^block*/id)arg1 ;
-(void)copyApplicationState:(/*^block*/id)arg1 ;
-(void)convertToSelfRequest:(id)arg1 serverDatas:(id)arg2 syncedDatas:(id)arg3 queryResponse:(id)arg4 updateCompletionBlock:(/*^block*/id)arg5 ;
-(void)forceConfigUpdate:(/*^block*/id)arg1 ;
-(id)validatePeerUri:(id)arg1 accountID:(id)arg2 loggableDatas:(id)arg3 queryResponse:(id)arg4 error:(id*)arg5 ;
-(void)copyApplicationTranscript:(/*^block*/id)arg1 ;
-(void)copyKeyStoreState:(/*^block*/id)arg1 ;
-(TransparencyApplication *)application;
-(void)copyDaemonState:(/*^block*/id)arg1 ;
-(void)resetRequestToPending:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)validateSelfUriResult:(id)arg1 uuid:(id)arg2 syncedDatas:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)copyKeyStoreStateFromDisk:(/*^block*/id)arg1 ;
-(id)validateEnrollmentUri:(id)arg1 accountID:(id)arg2 loggableData:(id)arg3 queryRequest:(id)arg4 insertResponse:(id)arg5 error:(id*)arg6 ;
-(void)validateEnrollmentUri:(id)arg1 accountID:(id)arg2 loggableData:(id)arg3 insertResponse:(id)arg4 promiseCompletionBlock:(/*^block*/id)arg5 ;
-(void)invokeXPCSynchronousCallWithBlock:(/*^block*/id)arg1 failureBlock:(/*^block*/id)arg2 ;
-(void)convertToSelfRequest:(id)arg1 serverDatas:(id)arg2 syncedDatas:(id)arg3 queryRequest:(id)arg4 queryResponse:(id)arg5 updateCompletionBlock:(/*^block*/id)arg6 ;
-(void)forceApplicationKeysDownload:(/*^block*/id)arg1 ;
@end

