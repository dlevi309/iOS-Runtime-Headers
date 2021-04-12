/*
* Generated on Monday, March 1, 2021 at 2:32:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
*/


@protocol SYServiceDelegate <NSObject>
@optional
-(void)service:(id)arg1 sessionEnded:(id)arg2 error:(id)arg3;
-(void)service:(id)arg1 incomingData:(id)arg2 completion:(/*^block*/id)arg3;
-(void)service:(id)arg1 incomingStream:(id)arg2 metadata:(id)arg3 completion:(/*^block*/id)arg4;
-(void)service:(id)arg1 encounteredError:(id)arg2 context:(id)arg3;
-(id)service:(id)arg1 willPreferSession:(id)arg2 overSession:(id)arg3;
-(void)service:(id)arg1 willSwitchFromPairingID:(id)arg2 toPairingID:(id)arg3;
-(void)service:(id)arg1 didSwitchFromPairingID:(id)arg2 toPairingID:(id)arg3;
-(void)service:(id)arg1 targetDeviceProximityChanged:(BOOL)arg2;
-(void)service:(id)arg1 targetDeviceConnectionChanged:(BOOL)arg2;
-(void)serviceDidPairDevice:(id)arg1;
-(void)serviceDidUnpairDevice:(id)arg1;

@required
-(BOOL)service:(id)arg1 startSession:(id)arg2 error:(id*)arg3;

@end

