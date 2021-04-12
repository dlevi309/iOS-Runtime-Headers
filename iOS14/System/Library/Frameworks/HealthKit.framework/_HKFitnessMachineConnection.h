/*
* Generated on Thursday, January 14, 2021 at 2:21:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <libobjc.A.dylib/_HKXPCExportable.h>
#import <libobjc.A.dylib/HKFitnessMachineConnectionClientInterface.h>

@protocol _HKFitnessMachineConnectionDelegate;
@class HKTaskServerProxyProvider, NSUUID, _HKFitnessMachine, HKDevice, NSLock, NSString;

@interface _HKFitnessMachineConnection : NSObject <_HKXPCExportable, HKFitnessMachineConnectionClientInterface> {

	HKTaskServerProxyProvider* _proxyProvider;
	NSUUID* _currentSessionUUID;
	_HKFitnessMachine* _fitnessMachine;
	HKDevice* _deviceForFinalWorkout;
	NSLock* _lock;
	unsigned long long _machineState;
	unsigned long long _connectionState;
	id<_HKFitnessMachineConnectionDelegate> _delegate;

}

@property (nonatomic,readonly) NSUUID * uuid; 
@property (copy,readonly) _HKFitnessMachine * fitnessMachine; 
@property (nonatomic,readonly) unsigned long long machineState;                                    //@synthesize machineState=_machineState - In the implementation block
@property (nonatomic,readonly) unsigned long long connectionState;                                 //@synthesize connectionState=_connectionState - In the implementation block
@property (assign,nonatomic,__weak) id<_HKFitnessMachineConnectionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (copy,readonly) HKDevice * deviceForFinalWorkout; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)taskIdentifier;
-(void)_fetchProxyWithHandler:(/*^block*/id)arg1 errorHandler:(/*^block*/id)arg2 ;
-(void)connectionInvalidated;
-(id)initWithHealthStore:(id)arg1 ;
-(NSUUID *)uuid;
-(void)end;
-(unsigned long long)connectionState;
-(id<_HKFitnessMachineConnectionDelegate>)delegate;
-(id)exportedInterface;
-(void)connectionInterrupted;
-(id)remoteInterface;
-(void)setDelegate:(id<_HKFitnessMachineConnectionDelegate>)arg1 ;
-(NSString *)description;
-(unsigned long long)hash;
-(void)_registerClient;
-(void)_connectionInterruptedWithError:(id)arg1 ;
-(void)clientRemote_deliverFailedWithError:(id)arg1 ;
-(void)markClientReady;
-(void)_clientQueue_deliverFailedWithError:(id)arg1 ;
-(void)clientRemote_deliverDetectedNFC:(id)arg1 ;
-(HKDevice *)deviceForFinalWorkout;
-(_HKFitnessMachine *)fitnessMachine;
-(void)_simulateDisconnect;
-(void)clientRemote_deliverMachineInformationUpdated:(id)arg1 ;
-(void)endWithFitnessMachineSessionUUID:(id)arg1 ;
-(id)currentSessionConfiguration;
-(void)clientRemote_deliverMachineChangedToState:(unsigned long long)arg1 fromState:(unsigned long long)arg2 fitnessMachineSessionUUID:(id)arg3 date:(id)arg4 ;
-(void)clientRemote_deliverConnectionChangedToState:(unsigned long long)arg1 fromState:(unsigned long long)arg2 fitnessMachineSessionUUID:(id)arg3 error:(id)arg4 ;
-(unsigned long long)machineState;
-(id)_init;
-(BOOL)isEqual:(id)arg1 ;
@end

