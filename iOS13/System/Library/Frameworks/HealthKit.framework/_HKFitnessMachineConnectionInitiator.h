/*
* Generated on Monday, March 1, 2021 at 2:32:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <libobjc.A.dylib/HKFitnessMachineConnectionInitiatorClientInterface.h>

@protocol _HKFitnessMachineConnectionInitiatorDelegate;
@class NSUUID, HKHealthStore, NSString;

@interface _HKFitnessMachineConnectionInitiator : NSObject <HKFitnessMachineConnectionInitiatorClientInterface> {

	NSUUID* _UUID;
	id<_HKFitnessMachineConnectionInitiatorDelegate> _delegate;
	HKHealthStore* _healthStore;

}

@property (assign,nonatomic,__weak) HKHealthStore * healthStore;                                            //@synthesize healthStore=_healthStore - In the implementation block
@property (nonatomic,readonly) NSUUID * UUID;                                                               //@synthesize UUID=_UUID - In the implementation block
@property (assign,nonatomic,__weak) id<_HKFitnessMachineConnectionInitiatorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<_HKFitnessMachineConnectionInitiatorDelegate>)delegate;
-(void)setDelegate:(id<_HKFitnessMachineConnectionInitiatorDelegate>)arg1 ;
-(NSUUID *)UUID;
-(HKHealthStore *)healthStore;
-(void)setHealthStore:(HKHealthStore *)arg1 ;
-(id)_initWithHealthStore:(id)arg1 ;
-(void)_connectionInterruptedWithError:(id)arg1 ;
-(void)registerClient;
-(void)peformServerOperation:(/*^block*/id)arg1 ;
-(void)clientRemote_updatedConnectionState:(unsigned long long)arg1 fitnessMachineSessionUUID:(id)arg2 ;
-(void)clientRemote_updatedFitnessMachine:(id)arg1 fitnessMachineSessionUUID:(id)arg2 ;
-(void)clientRemote_updatedFitnessMachineState:(unsigned long long)arg1 fitnessMachineSessionUUID:(id)arg2 ;
-(void)clientRemote_workoutAppReady;
-(void)clientRemote_encounteredError:(id)arg1 ;
-(void)permitConnectionForFitnessMachineSessionUUID:(id)arg1 activityType:(unsigned long long)arg2 ;
-(void)forbidConnectionForFitnessMachineSessionUUID:(id)arg1 ;
-(void)_simulateTapWithFitnessMachineType:(unsigned long long)arg1 ;
-(void)_simulateAccept;
-(void)_simulateDisconnect;
@end

