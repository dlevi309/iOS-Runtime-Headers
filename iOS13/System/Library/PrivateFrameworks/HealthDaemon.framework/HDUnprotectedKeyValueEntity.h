/*
* Generated on Monday, March 1, 2021 at 2:34:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDKeyValueEntity.h>

@interface HDUnprotectedKeyValueEntity : HDKeyValueEntity
+(long long)protectionClass;
+(id)databaseTable;
+(id)keyForNotificationDomain:(long long)arg1 error:(out id*)arg2 ;
+(id)badgeForDomain:(long long)arg1 profile:(id)arg2 error:(out id*)arg3 ;
+(BOOL)setBadge:(id)arg1 forDomain:(long long)arg2 profile:(id)arg3 error:(out id*)arg4 ;
+(id)_insertOrReplaceSQL;
@end

