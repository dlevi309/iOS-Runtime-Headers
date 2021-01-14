/*
* Generated on Thursday, January 14, 2021 at 2:26:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
*/


@protocol SYServiceDelegate <NSObject>
@optional
-(void)service:(id)arg1 encounteredError:(id)arg2 context:(id)arg3;
-(void)service:(id)arg1 incomingData:(id)arg2 completion:(/*^block*/id)arg3;
-(void)service:(id)arg1 incomingStream:(id)arg2 metadata:(id)arg3 completion:(/*^block*/id)arg4;
-(void)service:(id)arg1 targetDeviceProximityChanged:(BOOL)arg2;
-(void)service:(id)arg1 targetDeviceConnectionChanged:(BOOL)arg2;
-(void)serviceDidPairDevice:(id)arg1;
-(void)serviceDidUnpairDevice:(id)arg1;
-(void)service:(id)arg1 sessionEnded:(id)arg2 error:(id)arg3;
-(void)service:(id)arg1 didSwitchFromPairingID:(id)arg2 toPairingID:(id)arg3;
-(void)service:(id)arg1 willSwitchFromPairingID:(id)arg2 toPairingID:(id)arg3;
-(id)service:(id)arg1 willPreferSession:(id)arg2 overSession:(id)arg3;

@required
-(BOOL)service:(id)arg1 startSession:(id)arg2 error:(id*)arg3;

@end

