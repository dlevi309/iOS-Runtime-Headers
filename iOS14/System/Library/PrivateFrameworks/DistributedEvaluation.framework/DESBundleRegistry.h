/*
* Generated on Thursday, January 14, 2021 at 2:27:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DistributedEvaluation.framework/DistributedEvaluation
*/


@class NSDictionary;

@interface DESBundleRegistry : NSObject {

	NSDictionary* _bundleMap;

}
+(void)initialize;
+(id)sharedInstance;
-(id)init;
-(id)supportedRecordTypesForBundleId:(id)arg1 ;
-(id)evaluatorForBundleId:(id)arg1 error:(id*)arg2 ;
-(id)coreDuetEventQueryForBundleId:(id)arg1 ;
-(id)allBundleIds;
-(id)supportedCoreDuetEventStreamNamesForBundleId:(id)arg1 ;
-(unsigned long long)maximumNumberOfRecordsForBundleId:(id)arg1 ;
-(unsigned long long)daysToExpirationOfRecordsForBundleId:(id)arg1 ;
-(id)_init;
-(BOOL)containsBundleId:(id)arg1 ;
@end

