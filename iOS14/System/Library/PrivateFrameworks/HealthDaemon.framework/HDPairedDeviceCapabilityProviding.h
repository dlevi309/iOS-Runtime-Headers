/*
* Generated on Thursday, January 14, 2021 at 2:25:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@protocol HDPairedDeviceCapabilityProviding
@property (assign,nonatomic,__weak) id<HDPairedDeviceCapabilityProvidingDelegate> delegate; 
@required
-(id)deviceForPairingID:(id)arg1;
-(id)isCapabilitySupported:(id)arg1 onDevice:(id)arg2 error:(id*)arg3;
-(id<HDPairedDeviceCapabilityProvidingDelegate>)delegate;
-(id)isCapabilitySupportedOnActivePairedDevice:(id)arg1 error:(id*)arg2;
-(void)setDelegate:(id)arg1;
-(void)startListeningForUpdates;
-(id)activePairedDevice;

@end

