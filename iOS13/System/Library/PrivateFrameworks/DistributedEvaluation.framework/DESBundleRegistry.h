/*
* Generated on Monday, March 1, 2021 at 2:32:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DistributedEvaluation.framework/DistributedEvaluation
*/


@class NSDictionary;

@interface DESBundleRegistry : NSObject {

	NSDictionary* _bundleMap;

}
+(void)initialize;
+(id)sharedInstance;
-(id)init;
-(id)_init;
-(id)supportedCoreDuetEventStreamNamesForBundleId:(id)arg1 ;
-(id)evaluatorForBundleId:(id)arg1 error:(id*)arg2 ;
-(unsigned long long)maximumNumberOfRecordsForBundleId:(id)arg1 ;
-(unsigned long long)daysToExpirationOfRecordsForBundleId:(id)arg1 ;
-(id)supportedRecordTypesForBundleId:(id)arg1 ;
-(id)coreDuetEventQueryForBundleId:(id)arg1 ;
-(id)allBundleIds;
-(BOOL)containsBundleId:(id)arg1 ;
@end

