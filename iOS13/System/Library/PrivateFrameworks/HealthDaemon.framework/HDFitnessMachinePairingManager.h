/*
* Generated on Monday, March 1, 2021 at 2:34:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id<HDFitnessMachinePairingManagerDelegate>)delegate;
-(void)setDelegate:(id<HDFitnessMachinePairingManagerDelegate>)arg1 ;
-(void)reset;
-(id)initWithProfile:(id)arg1 ;
-(void)setActivityType:(unsigned long long)arg1 ;
-(void)workoutAppIsReady;
-(void)handleBLEConnectionCompletedSuccessfully:(BOOL)arg1 ;
-(void)updatedFitnessMachine;
-(void)updatedFitnessMachineState:(unsigned long long)arg1 fitnessMachineSessionUUID:(id)arg2 ;
-(void)updatedConnectionStateWithError:(id)arg1 ;
-(void)deliverError:(id)arg1 ;
-(void)registerConnectionInitiatorClient:(id)arg1 withConnectionUUID:(id)arg2 ;
-(void)permitConnectionForFitnessMachineSessionUUID:(id)arg1 activityType:(unsigned long long)arg2 withConnectionUUID:(id)arg3 ;
-(void)forbidConnectionForFitnessMachineSessionUUID:(id)arg1 withConnectionUUID:(id)arg2 ;
-(void)simulateTapWithFitnessMachineType:(unsigned long long)arg1 ;
-(void)simulateAccept;
-(void)permitConnectionForFitnessMachineSessionUUID:(id)arg1 withConnectionUUID:(id)arg2 ;
@end

