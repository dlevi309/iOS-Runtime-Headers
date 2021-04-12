/*
* Generated on Thursday, January 14, 2021 at 2:25:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


#import <HealthDaemon/HealthDaemon-Structs.h>
@class HKDaemonTransaction, HKSecondaryPairedDeviceConfiguration, HDTinkerProfile, NSString;

@interface HDSecondaryDevicePairingRequest : NSObject {

	os_unfair_lock_s _lock;
	double _startTime;
	HKDaemonTransaction* _transaction;
	HKSecondaryPairedDeviceConfiguration* _configuration;
	/*^block*/id _completion;
	long long _stage;
	HDTinkerProfile* _profile;
	NSString* _guardianAccountIdentifier;

}

@property (nonatomic,readonly) double startTime;                                                  //@synthesize startTime=_startTime - In the implementation block
@property (nonatomic,readonly) HKDaemonTransaction * transaction;                                 //@synthesize transaction=_transaction - In the implementation block
@property (nonatomic,readonly) HKSecondaryPairedDeviceConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,copy,readonly) id completion;                                                //@synthesize completion=_completion - In the implementation block
@property (assign,nonatomic) long long stage;                                                     //@synthesize stage=_stage - In the implementation block
@property (nonatomic,retain) HDTinkerProfile * profile;                                           //@synthesize profile=_profile - In the implementation block
@property (nonatomic,copy) NSString * guardianAccountIdentifier;                                  //@synthesize guardianAccountIdentifier=_guardianAccountIdentifier - In the implementation block
-(void)setProfile:(HDTinkerProfile *)arg1 ;
-(HKDaemonTransaction *)transaction;
-(long long)stage;
-(id)completion;
-(HKSecondaryPairedDeviceConfiguration *)configuration;
-(void)setStage:(long long)arg1 ;
-(HDTinkerProfile *)profile;
-(void)finishWithSuccess:(BOOL)arg1 error:(id)arg2 ;
-(double)startTime;
-(void)dealloc;
-(id)initWithConfiguration:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setGuardianAccountIdentifier:(NSString *)arg1 ;
-(id)codablePairingRequest;
-(NSString *)guardianAccountIdentifier;
@end

