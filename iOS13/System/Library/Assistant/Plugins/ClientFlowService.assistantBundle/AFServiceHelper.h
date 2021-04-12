/*
* Generated on Monday, March 1, 2021 at 2:34:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Assistant/Plugins/ClientFlowService.assistantBundle/ClientFlowService
*/


@protocol AFServiceHelper <NSObject>
@required
-(BOOL)isDeviceInStarkMode;
-(void)handleCommand:(id)arg1 completion:(/*^block*/id)arg2;
-(BOOL)openSensitiveURL:(id)arg1;
-(void)dismissAssistant;
-(id)assistantLocalizedStringForKey:(id)arg1 table:(id)arg2 bundle:(id)arg3;
-(BOOL)isDeviceLockedWithPasscode;
-(BOOL)isDeviceInCarDND;
-(BOOL)isTimeoutSuspended;
-(id)peerInfoForCurrentCommand;
-(void)prepareForAudioHandoffFailedWithCompletion:(/*^block*/id)arg1;
-(void)prepareForAudioHandoffWithCompletion:(/*^block*/id)arg1;

@end

