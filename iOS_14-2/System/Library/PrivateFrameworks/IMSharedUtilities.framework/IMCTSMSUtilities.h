/*
* Generated on Thursday, January 14, 2021 at 2:22:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
*/


@interface IMCTSMSUtilities : NSObject
+(BOOL)IMIsEagerUploadEnabledForPhoneNumber:(id)arg1 simID:(id)arg2 ;
+(int)IMMMSMaxRecipientsForPhoneNumber:(id)arg1 simID:(id)arg2 ;
+(double)IMMMSMaximumDurationWithPreset:(id)arg1 phoneNumber:(id)arg2 simID:(id)arg3 ;
+(BOOL)IMMessagesFilteringSettingForPreferedSubscription;
+(void)IMiMessageMaxTransferFileSizeForWifiForPhoneNumber:(unsigned long long*)arg1 cellSize:(unsigned long long*)arg2 serverConfigurationBag:(id)arg3 phoneNumber:(id)arg4 simID:(id)arg5 ;
+(id)IMUniqueIdentifierForPhoneNumber:(id)arg1 simID:(id)arg2 ;
+(BOOL)IMReadMMSUserOverrideForPhoneNumber:(id)arg1 simID:(id)arg2 ;
+(id)IMPhoneNumbersEnabledForMultipleSubscriptionDevice;
+(int)IMMMSMaxImageDimensionForPhoneNumber:(id)arg1 simID:(id)arg2 ;
+(BOOL)IMMMSSupportsH264VideoForPhoneNumber:(id)arg1 simID:(id)arg2 ;
+(double)IMMMSMaximumVideoDurationForPhoneNumber:(id)arg1 simID:(id)arg2 ;
+(BOOL)IMMMSEnabledForPhoneNumber:(id)arg1 simID:(id)arg2 ;
+(BOOL)IMMMSGroupTextOnlyMessagesSendAsMMSForPhoneNumber:(id)arg1 simID:(id)arg2 ;
+(void)IMSynchronizePreferredSubscriptionMMSCapabilityToWatch;
+(BOOL)IMReadEnablePreviewTranscodingQualityCarrierValueForPhoneNumber:(id)arg1 simID:(id)arg2 ;
+(BOOL)IMMMSRestrictedModeEnabledForPhoneNumber:(id)arg1 simID:(id)arg2 ;
+(void)IMSynchronizeMMSCapabilityToWatch:(BOOL)arg1 ;
+(int)IMMMSMaximumMessageByteCountForPhoneNumber:(id)arg1 simID:(id)arg2 ;
+(id)IMMMSEmailAddressToMatchForPhoneNumber:(id)arg1 simID:(id)arg2 ;
+(unsigned long long)IMiMessageMaxTransferAudioFileSizeForWifiForPhoneNumber:(unsigned long long*)arg1 cellSize:(unsigned long long*)arg2 serverConfigurationBag:(id)arg3 phoneNumber:(id)arg4 simID:(id)arg5 ;
+(BOOL)IMMMSEagerUploadDisabledInCarrierBundleForPhoneNumber:(id)arg1 simID:(id)arg2 ;
+(BOOL)IMShouldShowMMSEmailAddress:(id)arg1 simID:(id)arg2 ;
+(double)IMMMSMaximumAudioDurationForPhoneNumber:(id)arg1 simID:(id)arg2 ;
+(unsigned long long)IMReadAttachmentPreviewTranscodingQualitySizeCarrierValueForPhoneNumber:(id)arg1 simID:(id)arg2 ;
+(BOOL)IMMMSSupportedAndConfiguredForPhoneNumber:(id)arg1 simID:(id)arg2 ;
+(BOOL)MMSRestrictedModeEnabledForPhoneNumber:(id)arg1 simID:(id)arg2 reset:(BOOL)arg3 ;
+(int)IMMMSMaximumSlideCountForPhoneNumber:(id)arg1 simID:(id)arg2 ;
+(BOOL)IMReadDisablePreviewTranscodingQualityOnWiFiCarrierValueForPhoneNumber:(id)arg1 simID:(id)arg2 ;
+(unsigned long long)IMiMessageMaxTransferVideoFileSizeForWifiForPhoneNumber:(unsigned long long*)arg1 cellSize:(unsigned long long*)arg2 serverConfigurationBag:(id)arg3 phoneNumber:(id)arg4 simID:(id)arg5 ;
@end

