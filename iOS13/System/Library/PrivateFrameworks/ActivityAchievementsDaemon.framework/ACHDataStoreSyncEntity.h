/*
* Generated on Monday, March 1, 2021 at 2:34:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(long long)category;
+(id)syncEntityIdentifier;
+(int)nanoSyncObjectType;
+(unsigned long long)supportedNanoSyncDirectionsForProtocolVersion:(int)arg1 ;
+(id)dataStoreValueForKey:(id)arg1 domain:(id)arg2 profile:(id)arg3 error:(id*)arg4 ;
+(BOOL)setDataStoreValuesWithDictionary:(id)arg1 domain:(id)arg2 profile:(id)arg3 error:(id*)arg4 ;
+(BOOL)removeDataStoreValuesForKeys:(id)arg1 domain:(id)arg2 profile:(id)arg3 error:(id*)arg4 ;
+(void)didReceiveValuesForKeys:(id)arg1 profile:(id)arg2 ;
@end

