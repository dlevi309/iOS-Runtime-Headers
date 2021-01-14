/*
* Generated on Thursday, January 14, 2021 at 2:27:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
*/


@interface IMBlastdoor : NSObject
+(BOOL)_messageBlastdoorMetricsEnabled;
+(void)sendBlastDoorError:(id)arg1 guid:(id)arg2 command:(id)arg3 senderURI:(id)arg4 senderToken:(id)arg5 messageContext:(id)arg6 payloadAttachmentURL:(id)arg7 ;
+(long long)_convertErrorToBlastdoorError:(id)arg1 ;
+(void)sendDictionary:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
+(id)blastdoorInterface;
+(id)logger;
+(BOOL)supportsFeature:(id)arg1 ;
+(BOOL)_commandReadyForBlastdoor:(long long)arg1 ;
+(void)_askToTapToRadarForGUID:(id)arg1 command:(id)arg2 sender:(id)arg3 errorString:(id)arg4 payloadAttachmentURL:(id)arg5 ;
@end

