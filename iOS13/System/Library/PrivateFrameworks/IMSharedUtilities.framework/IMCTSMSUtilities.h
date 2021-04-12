/*
* Generated on Monday, March 1, 2021 at 2:30:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
*/


@interface IMCTSMSUtilities : NSObject
+(BOOL)IMMMSSupportedAndConfiguredForPhoneNumber:(id)arg1 simID:(id)arg2 ;
+(BOOL)IMMMSEnabledForPhoneNumber:(id)arg1 simID:(id)arg2 ;
+(int)IMMMSMaximumSlideCountForPhoneNumber:(id)arg1 simID:(id)arg2 ;
+(id)IMUniqueIdentifierForPhoneNumber:(id)arg1 simID:(id)arg2 ;
+(BOOL)IMReadMMSUserOverrideForPhoneNumber:(id)arg1 simID:(id)arg2 ;
+(double)IMMMSMaximumDurationWithPreset:(id)arg1 phoneNumber:(id)arg2 simID:(id)arg3 ;
+(int)IMMMSMaximumMessageByteCountForPhoneNumber:(id)arg1 simID:(id)arg2 ;
+(BOOL)IMMMSEagerUploadDisabledInCarrierBundleForPhoneNumber:(id)arg1 simID:(id)arg2 ;
+(BOOL)MMSRestrictedModeEnabledForPhoneNumber:(id)arg1 simID:(id)arg2 reset:(BOOL)arg3 ;
+(void)IMSynchronizeMMSCapabilityToWatch:(BOOL)arg1 ;
+(id)IMPhoneNumbersEnabledForMultipleSubscriptionDevice;
+(BOOL)IMReadEnablePreviewTranscodingQualityCarrierValueForPhoneNumber:(id)arg1 simID:(id)arg2 ;
+(unsigned long long)IMReadAttachmentPreviewTranscodingQualitySizeCarrierValueForPhoneNumber:(id)arg1 simID:(id)arg2 ;
+(BOOL)IMMMSGroupTextOnlyMessagesSendAsMMSForPhoneNumber:(id)arg1 simID:(id)arg2 ;
+(int)IMMMSMaxRecipientsForPhoneNumber:(id)arg1 simID:(id)arg2 ;
+(int)IMMMSMaxImageDimensionForPhoneNumber:(id)arg1 simID:(id)arg2 ;
+(BOOL)IMMMSSupportsH264VideoForPhoneNumber:(id)arg1 simID:(id)arg2 ;
+(double)IMMMSMaximumAudioDurationForPhoneNumber:(id)arg1 simID:(id)arg2 ;
+(double)IMMMSMaximumVideoDurationForPhoneNumber:(id)arg1 simID:(id)arg2 ;
+(void)IMiMessageMaxTransferFileSizeForWifiForPhoneNumber:(unsigned long long*)arg1 cellSize:(unsigned long long*)arg2 serverConfigurationBag:(id)arg3 phoneNumber:(id)arg4 simID:(id)arg5 ;
+(unsigned long long)IMiMessageMaxTransferAudioFileSizeForWifiForPhoneNumber:(unsigned long long*)arg1 cellSize:(unsigned long long*)arg2 serverConfigurationBag:(id)arg3 phoneNumber:(id)arg4 simID:(id)arg5 ;
+(unsigned long long)IMiMessageMaxTransferVideoFileSizeForWifiForPhoneNumber:(unsigned long long*)arg1 cellSize:(unsigned long long*)arg2 serverConfigurationBag:(id)arg3 phoneNumber:(id)arg4 simID:(id)arg5 ;
+(id)IMMMSEmailAddressToMatchForPhoneNumber:(id)arg1 simID:(id)arg2 ;
+(BOOL)IMShouldShowMMSEmailAddress:(id)arg1 simID:(id)arg2 ;
+(BOOL)IMIsEagerUploadEnabledForPhoneNumber:(id)arg1 simID:(id)arg2 ;
+(BOOL)IMMMSRestrictedModeEnabledForPhoneNumber:(id)arg1 simID:(id)arg2 ;
+(void)IMSynchronizePreferredSubscriptionMMSCapabilityToWatch;
+(BOOL)IMMessagesFilteringSettingForPreferedSubscription;
@end

