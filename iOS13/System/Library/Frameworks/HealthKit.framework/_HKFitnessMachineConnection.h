/*
* Generated on Monday, March 1, 2021 at 2:32:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <libobjc.A.dylib/HKFitnessMachineConnectionClientInterface.h>

@protocol _HKFitnessMachineConnectionDelegate;
@class HKHealthStore, NSUUID, _HKFitnessMachine, HKDevice, NSLock, NSString;

@interface _HKFitnessMachineConnection : NSObject <HKFitnessMachineConnectionClientInterface> {

	HKHealthStore* _healthStore;
	NSUUID* _currentSessionUUID;
	_HKFitnessMachine* _fitnessMachine;
	HKDevice* _deviceForFinalWorkout;
	NSLock* _lock;
	NSUUID* _uuid;
	unsigned long long _machineState;
	unsigned long long _connectionState;
	id<_HKFitnessMachineConnectionDelegate> _delegate;

}

@property (nonatomic,readonly) NSUUID * uuid;                                                      //@synthesize uuid=_uuid - In the implementation block
@property (copy,readonly) _HKFitnessMachine * fitnessMachine; 
@property (nonatomic,readonly) unsigned long long machineState;                                    //@synthesize machineState=_machineState - In the implementation block
@property (nonatomic,readonly) unsigned long long connectionState;                                 //@synthesize connectionState=_connectionState - In the implementation block
@property (assign,nonatomic,__weak) id<_HKFitnessMachineConnectionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (copy,readonly) HKDevice * deviceForFinalWorkout; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id<_HKFitnessMachineConnectionDelegate>)delegate;
-(void)setDelegate:(id<_HKFitnessMachineConnectionDelegate>)arg1 ;
-(NSUUID *)uuid;
-(void)end;
-(unsigned long long)connectionState;
-(id)_initWithHealthStore:(id)arg1 ;
-(void)_connectionInterruptedWithError:(id)arg1 ;
-(void)_simulateTapWithFitnessMachineType:(unsigned long long)arg1 ;
-(void)_simulateAccept;
-(void)_simulateDisconnect;
-(void)_registerClient;
-(void)clientRemote_deliverFailedWithError:(id)arg1 ;
-(void)_clientQueue_deliverFailedWithError:(id)arg1 ;
-(void)clientRemote_deliverDetectedNFC:(id)arg1 ;
-(void)clientRemote_deliverMachineInformationUpdated:(id)arg1 ;
-(void)clientRemote_deliverMachineChangedToState:(unsigned long long)arg1 fromState:(unsigned long long)arg2 fitnessMachineSessionUUID:(id)arg3 date:(id)arg4 ;
-(void)clientRemote_deliverConnectionChangedToState:(unsigned long long)arg1 fromState:(unsigned long long)arg2 fitnessMachineSessionUUID:(id)arg3 error:(id)arg4 ;
-(void)markClientReady;
-(void)endWithFitnessMachineSessionUUID:(id)arg1 ;
-(id)currentSessionConfiguration;
-(HKDevice *)deviceForFinalWorkout;
-(_HKFitnessMachine *)fitnessMachine;
-(unsigned long long)machineState;
-(void)permitDataTransferWithFitnessMachineSessionUUID:(id)arg1 ;
@end

