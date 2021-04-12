/*
* Generated on Thursday, January 14, 2021 at 2:21:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <libobjc.A.dylib/HKFitnessMachineConnectionInitiatorClientInterface.h>
#import <libobjc.A.dylib/_HKXPCExportable.h>

@protocol _HKFitnessMachineConnectionInitiatorDelegate;
@class HKTaskServerProxyProvider, NSUUID, NSString;

@interface _HKFitnessMachineConnectionInitiator : NSObject <HKFitnessMachineConnectionInitiatorClientInterface, _HKXPCExportable> {

	HKTaskServerProxyProvider* _proxyProvider;
	id<_HKFitnessMachineConnectionInitiatorDelegate> _delegate;

}

@property (nonatomic,readonly) NSUUID * UUID; 
@property (assign,nonatomic,__weak) id<_HKFitnessMachineConnectionInitiatorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)taskIdentifier;
-(void)connectionInvalidated;
-(id)initWithHealthStore:(id)arg1 ;
-(NSUUID *)UUID;
-(id<_HKFitnessMachineConnectionInitiatorDelegate>)delegate;
-(id)exportedInterface;
-(void)connectionInterrupted;
-(id)remoteInterface;
-(void)setDelegate:(id<_HKFitnessMachineConnectionInitiatorDelegate>)arg1 ;
-(void)registerClient;
-(void)_simulateAccept;
-(void)_fetchProxyWithHandler:(/*^block*/id)arg1 ;
-(void)clientRemote_encounteredError:(id)arg1 ;
-(void)clientRemote_workoutAppReady;
-(void)_simulateTapWithFitnessMachineType:(unsigned long long)arg1 ;
-(void)clientRemote_updatedConnectionState:(unsigned long long)arg1 fitnessMachineSessionUUID:(id)arg2 ;
-(void)forbidConnectionForFitnessMachineSessionUUID:(id)arg1 ;
-(void)clientRemote_updatedFitnessMachine:(id)arg1 fitnessMachineSessionUUID:(id)arg2 ;
-(void)clientRemote_updatedFitnessMachineState:(unsigned long long)arg1 fitnessMachineSessionUUID:(id)arg2 ;
-(void)permitConnectionForFitnessMachineSessionUUID:(id)arg1 activityType:(unsigned long long)arg2 ;
@end

