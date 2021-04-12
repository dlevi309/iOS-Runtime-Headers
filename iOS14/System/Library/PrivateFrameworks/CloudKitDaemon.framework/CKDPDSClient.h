/*
* Generated on Thursday, January 14, 2021 at 2:26:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject, PDSRegistrar;

@interface CKDPDSClient : NSObject {

	NSMutableDictionary* _registrationsByDSID;
	NSObject*<OS_dispatch_queue> _queue;
	PDSRegistrar* _registrar;

}

@property (nonatomic,retain) NSMutableDictionary * registrationsByDSID;              //@synthesize registrationsByDSID=_registrationsByDSID - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                     //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) PDSRegistrar * registrar;                               //@synthesize registrar=_registrar - In the implementation block
+(id)sharedClient;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)_init;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(BOOL)unregisterTokenForAppContainerAccountTuple:(id)arg1 contextInfoProvider:(id)arg2 outError:(id*)arg3 ;
-(BOOL)unregisterAllTokensForAppContainerAccountTuple:(id)arg1 pushBundleIdentifier:(id)arg2 outError:(id*)arg3 ;
-(BOOL)unregisterAllTokensForAccountID:(id)arg1 outError:(id*)arg2 ;
-(BOOL)ensureRegistrationForAppContainerAccountTuple:(id)arg1 contextInfoProvider:(id)arg2 outError:(id*)arg3 ;
-(NSMutableDictionary *)registrationsByDSID;
-(id)inlock_registrar;
-(id)_pdsTopicFromBundleIdentifier:(id)arg1 withContainerID:(id)arg2 ;
-(id)_pdsQualifierFromContainerID:(id)arg1 ;
-(char)_pdsPushEnvironmentFromAPSEnvironmentString:(id)arg1 ;
-(id)_registrationForAppContainerAccountTuple:(id)arg1 contextInfoProvider:(id)arg2 ;
-(id)inlock_registrationsForDSID:(id)arg1 ;
-(BOOL)_unregisterRegistration:(id)arg1 forDSID:(id)arg2 outError:(id*)arg3 ;
-(id)_registrationForAppContainerAccountTuple:(id)arg1 pushBundleIdentifier:(id)arg2 pdsPushEnvironment:(char)arg3 ;
-(void)unregisterAllTokens;
-(void)setRegistrationsByDSID:(NSMutableDictionary *)arg1 ;
-(PDSRegistrar *)registrar;
-(void)setRegistrar:(PDSRegistrar *)arg1 ;
@end

