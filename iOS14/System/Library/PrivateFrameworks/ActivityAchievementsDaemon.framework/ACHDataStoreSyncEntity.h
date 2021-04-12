/*
* Generated on Thursday, January 14, 2021 at 2:26:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActivityAchievementsDaemon.framework/ActivityAchievementsDaemon
*/

#import <HealthDaemon/HDKeyValueSyncEntity.h>
#import <libobjc.A.dylib/HDNanoSyncEntity.h>

@class NSString;

@interface ACHDataStoreSyncEntity : HDKeyValueSyncEntity <HDNanoSyncEntity>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)supportedNanoSyncDirectionsForProtocolVersion:(int)arg1 ;
+(long long)category;
+(id)syncEntityIdentifier;
+(void)didReceiveValuesForKeys:(id)arg1 profile:(id)arg2 ;
+(int)nanoSyncObjectType;
+(id)dataStoreValueForKey:(id)arg1 domain:(id)arg2 profile:(id)arg3 error:(id*)arg4 ;
+(BOOL)setDataStoreValuesWithDictionary:(id)arg1 domain:(id)arg2 profile:(id)arg3 error:(id*)arg4 ;
+(BOOL)removeDataStoreValuesForKeys:(id)arg1 domain:(id)arg2 profile:(id)arg3 error:(id*)arg4 ;
@end

