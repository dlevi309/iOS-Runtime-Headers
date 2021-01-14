/*
* Generated on Thursday, January 14, 2021 at 2:22:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
*/


@interface IMMessageAcknowledgmentStringHelper : NSObject
+(BOOL)shouldQuoteContentString:(id)arg1 ;
+(id)longContentTypeStringForPluginBundleID:(id)arg1 pluginDisplayName:(id)arg2 ;
+(id)messageAcknowledgmentString:(long long)arg1 lowercase:(BOOL)arg2 ;
+(id)longContentTypeStringForContentType:(id)arg1 ;
+(id)generatePreviewStringForMessageAcknowledgmentType:(long long)arg1 acknowledgmentDisplayName:(id)arg2 isFromMe:(BOOL)arg3 messageSummaryInfo:(id)arg4 ;
+(id)generateFormatStringForMessageAcknowledgmentType:(long long)arg1 acknowledgmentDisplayName:(id)arg2 isFromMe:(BOOL)arg3 messageSummaryInfo:(id)arg4 format:(long long*)arg5 ;
+(id)generateBackwardCompatibilityStringForMessageAcknowledgmentType:(long long)arg1 messageSummaryInfo:(id)arg2 ;
+(id)generateBackwardCompatibilityFormatStringForMessageAcknowledgmentType:(long long)arg1 messageSummaryInfo:(id)arg2 format:(long long*)arg3 ;
+(id)generatePreviewStringForMessageAcknowledgmentType:(long long)arg1 acknowledgmentDisplayName:(id)arg2 isFromMe:(BOOL)arg3 messageSummaryInfo:(id)arg4 isGroupMessage:(BOOL)arg5 ;
+(id)generateBackwardCompatibilityStringForMessageAcknowledgmentType:(long long)arg1 messageSummaryInfo:(id)arg2 isGroupMessage:(BOOL)arg3 ;
@end

