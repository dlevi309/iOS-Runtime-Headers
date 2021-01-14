/*
* Generated on Thursday, January 14, 2021 at 2:25:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <libobjc.A.dylib/HDFitnessMachineConnectionInitiatorProtocol.h>

@protocol HDFitnessMachinePairingManagerDelegate;
@class NSString;

@interface HDFitnessMachinePairingManager : NSObject <HDFitnessMachineConnectionInitiatorProtocol> {

	id<HDFitnessMachinePairingManagerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<HDFitnessMachinePairingManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setActivityType:(unsigned long long)arg1 ;
-(void)updatedConnectionStateWithError:(id)arg1 ;
-(void)permitConnectionForFitnessMachineSessionUUID:(id)arg1 activityType:(unsigned long long)arg2 withConnectionUUID:(id)arg3 ;
-(void)registerConnectionInitiatorClient:(id)arg1 withConnectionUUID:(id)arg2 ;
-(id<HDFitnessMachinePairingManagerDelegate>)delegate;
-(id)initWithProfile:(id)arg1 ;
-(void)deliverError:(id)arg1 ;
-(void)workoutAppIsReady;
-(void)permitConnectionForFitnessMachineSessionUUID:(id)arg1 withConnectionUUID:(id)arg2 ;
-(void)setDelegate:(id<HDFitnessMachinePairingManagerDelegate>)arg1 ;
-(void)simulateAccept;
-(void)forbidConnectionForFitnessMachineSessionUUID:(id)arg1 withConnectionUUID:(id)arg2 ;
-(void)updatedFitnessMachineState:(unsigned long long)arg1 fitnessMachineSessionUUID:(id)arg2 ;
-(void)reset;
-(void)updatedFitnessMachine;
-(void)simulateTapWithFitnessMachineType:(unsigned long long)arg1 ;
-(void)handleBLEConnectionCompletedSuccessfully:(BOOL)arg1 ;
@end

