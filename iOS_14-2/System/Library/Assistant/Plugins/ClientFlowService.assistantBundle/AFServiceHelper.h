/*
* Generated on Thursday, January 14, 2021 at 2:26:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Assistant/Plugins/ClientFlowService.assistantBundle/ClientFlowService
*/


@protocol AFServiceHelper <NSObject>
@optional
-(void)fetchContextsForKeys:(id)arg1 includesNearbyDevices:(BOOL)arg2 completion:(/*^block*/id)arg3;
-(void)fetchContextsForKeys:(id)arg1 includesNearbyDevices:(BOOL)arg2 completion:(/*^block*/id)arg3;

@required
-(void)dismissAssistant;
-(void)prepareForAudioHandoffWithCompletion:(/*^block*/id)arg1;
-(void)prepareForAudioHandoffWithCompletion:(/*^block*/id)arg1;
-(void)prepareForAudioHandoffFailedWithCompletion:(/*^block*/id)arg1;
-(void)prepareForAudioHandoffFailedWithCompletion:(/*^block*/id)arg1;
-(BOOL)isDeviceInStarkMode;
-(void)handleCommand:(id)arg1 completion:(/*^block*/id)arg2;
-(void)handleCommand:(id)arg1 completion:(/*^block*/id)arg2;
-(BOOL)openSensitiveURL:(id)arg1;
-(id)assistantLocalizedStringForKey:(id)arg1 table:(id)arg2 bundle:(id)arg3;
-(id)assistantLocalizedStringForKey:(id)arg1 table:(id)arg2 bundle:(id)arg3;
-(BOOL)isDeviceLockedWithPasscode;
-(BOOL)isDeviceInCarDND;
-(BOOL)isTimeoutSuspended;
-(id)peerInfoForCurrentCommand;

@end

