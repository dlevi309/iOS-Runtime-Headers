/*
* Generated on Thursday, January 14, 2021 at 2:25:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDKeyValueEntity.h>

@interface HDUnprotectedKeyValueEntity : HDKeyValueEntity
+(id)databaseTable;
+(id)keyForNotificationDomain:(long long)arg1 error:(out id*)arg2 ;
+(const char*)_insertStatementKey;
+(long long)protectionClass;
+(id)badgeForDomain:(long long)arg1 profile:(id)arg2 error:(out id*)arg3 ;
+(BOOL)setBadge:(id)arg1 forDomain:(long long)arg2 profile:(id)arg3 error:(out id*)arg4 ;
@end

