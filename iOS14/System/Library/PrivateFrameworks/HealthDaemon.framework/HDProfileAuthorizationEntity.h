/*
* Generated on Thursday, January 14, 2021 at 2:25:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <HealthDaemon/HDHealthEntity.h>

@interface HDProfileAuthorizationEntity : HDHealthEntity
+(id)databaseTable;
+(const SCD_Struct_HD0*)columnDefinitionsWithCount:(unsigned long long*)arg1 ;
+(id)allProperties;
+(long long)protectionClass;
+(BOOL)fetchStatus:(long long*)arg1 profile:(id)arg2 bundleIdentifier:(id)arg3 error:(id*)arg4 ;
+(BOOL)setStatus:(long long)arg1 profile:(id)arg2 bundleIdentifier:(id)arg3 dateModified:(id)arg4 error:(id*)arg5 ;
+(BOOL)setStatusIfNeeded:(long long)arg1 profile:(id)arg2 bundleIdentifier:(id)arg3 error:(id*)arg4 ;
+(id)anyForBundleIdentifier:(id)arg1 profile:(id)arg2 error:(id*)arg3 ;
-(BOOL)unitTest_getBundleIdentifier:(id*)arg1 status:(long long*)arg2 dateModified:(id*)arg3 forProfile:(id)arg4 error:(id*)arg5 ;
@end

