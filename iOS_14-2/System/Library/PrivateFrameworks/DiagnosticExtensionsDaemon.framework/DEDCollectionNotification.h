/*
* Generated on Thursday, January 14, 2021 at 2:24:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticExtensionsDaemon.framework/DiagnosticExtensionsDaemon
*/


@interface DEDCollectionNotification : NSObject
+(id)log;
+(BOOL)shouldFireNotificationForTransport:(long long)arg1 ;
+(void)fireNotificationWithFinishingMove:(long long)arg1 ;
+(void)beginListeningForNotification;
+(void)postNotificationToNotificationCenterForFinishingMove:(long long)arg1 ;
+(void)handleDistributedNotification:(id)arg1 ;
+(void)configureEventStream;
@end

