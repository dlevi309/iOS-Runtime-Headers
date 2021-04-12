/*
* Generated on Monday, March 1, 2021 at 2:31:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
*/


@protocol OS_dispatch_queue, TUCoreTelephonyClient;
@class NSObject;

@interface TUSenderIdentityClient : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	id<TUCoreTelephonyClient> _client;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) id<TUCoreTelephonyClient> client;                  //@synthesize client=_client - In the implementation block
-(id)init;
-(NSObject*<OS_dispatch_queue>)queue;
-(id<TUCoreTelephonyClient>)client;
-(void)setClient:(id<TUCoreTelephonyClient>)arg1 ;
-(BOOL)isRTTSupportedForSenderIdentityUUID:(id)arg1 ;
-(BOOL)isTTYSoftwareAvailableForSenderIdentityUUID:(id)arg1 ;
-(BOOL)isTTYSupportedForSenderIdentityUUID:(id)arg1 ;
-(BOOL)isTTYHardwareAvailableForSenderIdentityUUID:(id)arg1 ;
-(BOOL)isRTTAvailableForSenderIdentityUUID:(id)arg1 ;
-(BOOL)isTTYAvailableForSenderIdentityUUID:(id)arg1 ;
-(BOOL)isTTYEnabledForSenderIdentityUUID:(id)arg1 ;
-(BOOL)isTTYHardwareEnabledForSenderIdentityUUID:(id)arg1 ;
-(BOOL)isTTYHardwareSupportedForSenderIdentityUUID:(id)arg1 ;
-(BOOL)isTTYSoftwareEnabledForSenderIdentityUUID:(id)arg1 ;
-(BOOL)isTTYSoftwareSupportedForSenderIdentityUUID:(id)arg1 ;
-(BOOL)inEmergencyMode;
-(BOOL)isEmergencyNumberForDigits:(id)arg1 senderIdentityUUID:(id)arg2 ;
-(BOOL)isWhitelistedEmergencyNumberForDigits:(id)arg1 senderIdentityUUID:(id)arg2 ;
-(BOOL)isEmergencyNumberForDigits:(id)arg1 senderIdentityUUID:(id)arg2 error:(id*)arg3 ;
-(BOOL)isWhitelistedEmergencyNumberForDigits:(id)arg1 senderIdentityUUID:(id)arg2 error:(id*)arg3 ;
-(BOOL)shouldShowEmergencyCallbackModeAlertForSenderIdentityUUID:(id)arg1 error:(id*)arg2 ;
-(BOOL)shouldShowEmergencyCallbackModeAlertForSenderIdentityUUID:(id)arg1 ;
@end

