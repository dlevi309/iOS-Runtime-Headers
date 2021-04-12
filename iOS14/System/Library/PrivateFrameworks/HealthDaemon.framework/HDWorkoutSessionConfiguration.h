/*
* Generated on Thursday, January 14, 2021 at 2:25:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@class NSUUID, HKWorkoutConfiguration, HDHealthStoreClient, NSString;

@interface HDWorkoutSessionConfiguration : NSObject {

	BOOL _requiresCoreLocationAssertion;
	BOOL _supportsAppRelaunchForRecovery;
	NSUUID* _sessionIdentifier;
	HKWorkoutConfiguration* _workoutConfiguration;
	HDHealthStoreClient* _client;
	NSString* _clientProcessBundleIdentifier;
	NSString* _clientApplicationIdentifier;

}

@property (nonatomic,copy,readonly) NSUUID * sessionIdentifier;                                 //@synthesize sessionIdentifier=_sessionIdentifier - In the implementation block
@property (nonatomic,copy,readonly) HKWorkoutConfiguration * workoutConfiguration;              //@synthesize workoutConfiguration=_workoutConfiguration - In the implementation block
@property (nonatomic,readonly) HDHealthStoreClient * client;                                    //@synthesize client=_client - In the implementation block
@property (nonatomic,copy,readonly) NSString * clientProcessBundleIdentifier;                   //@synthesize clientProcessBundleIdentifier=_clientProcessBundleIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * clientApplicationIdentifier;                     //@synthesize clientApplicationIdentifier=_clientApplicationIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL requiresCoreLocationAssertion;                              //@synthesize requiresCoreLocationAssertion=_requiresCoreLocationAssertion - In the implementation block
@property (nonatomic,readonly) BOOL supportsAppRelaunchForRecovery;                             //@synthesize supportsAppRelaunchForRecovery=_supportsAppRelaunchForRecovery - In the implementation block
-(HDHealthStoreClient *)client;
-(NSUUID *)sessionIdentifier;
-(BOOL)requiresCoreLocationAssertion;
-(BOOL)supportsAppRelaunchForRecovery;
-(HKWorkoutConfiguration *)workoutConfiguration;
-(NSString *)clientProcessBundleIdentifier;
-(NSString *)clientApplicationIdentifier;
-(id)initWithSessionIdentifier:(id)arg1 workoutConfiguration:(id)arg2 client:(id)arg3 processBundleIdentifier:(id)arg4 applicationIdentifier:(id)arg5 requiresCoreLocationAssertion:(BOOL)arg6 supportsAppRelaunchForRecovery:(BOOL)arg7 ;
@end

