/*
* Generated on Monday, March 1, 2021 at 2:34:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticExtensionsDaemon.framework/DiagnosticExtensionsDaemon
*/


@interface DEDAnalytics : NSObject
+(id)log;
+(void)finisherDidCompleteWithDuration:(unsigned long long)arg1 uploadedByteCount:(unsigned long long)arg2 usingFinishingMove:(long long)arg3 withState:(long long)arg4 ;
+(void)didCompleteBugSessionWithState:(long long)arg1 ;
+(void)finisherDidStartWithFileCount:(unsigned long long)arg1 expectedByteUploadCount:(unsigned long long)arg2 finishingMove:(long long)arg3 ;
+(void)didCreateBugSessionForApp:(id)arg1 ;
+(void)didStartDaemon;
+(void)extensionDidScheduleExtensionWithIdentifier:(id)arg1 delay:(unsigned long long)arg2 ;
+(void)didStartExtensionWithIdentifier:(id)arg1 ;
+(void)extensionWithIdentifier:(id)arg1 didCompleteWithFileCount:(unsigned long long)arg2 bytesCollected:(unsigned long long)arg3 duration:(unsigned long long)arg4 errorCode:(long long)arg5 ;
+(void)didCheckInDeferredExtensionsWithCount:(unsigned long long)arg1 ;
@end

