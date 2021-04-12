/*
* Generated on Monday, March 1, 2021 at 2:33:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/


@class NSArray, ATXAnchorModelEventFeaturizer, NSUUID;

@interface ATXAnchorModelOfflineDataHarvester : NSObject {

	NSArray* _anchorsToCollect;
	ATXAnchorModelEventFeaturizer* _eventFeaturizer;
	NSUUID* _userId;

}
+(id)randomSampleFromArray:(id)arg1 sampleSize:(unsigned long long)arg2 ;
+(id)actionIdentifiersFromActionsInMessage:(id)arg1 ;
+(id)bundleIdsFromAppLaunchesInMessage:(id)arg1 ;
+(id)getSamplingGroupForDataCollection;
+(id)getUserUUIDForDataCollection;
+(void)resetSamplingGroupAssignmentForUser;
-(id)init;
-(id)initWithSamplingGroup:(id)arg1 userId:(id)arg2 ;
-(void)harvestData;
-(void)harvestDataForAnchor:(id)arg1 ;
-(id)fetchAnchorEvents:(id)arg1 ;
-(id)processAnchorOccurrence:(id)arg1 anchor:(id)arg2 ;
-(void)addAppLaunchEventsFromAnchorOccurrenceDate:(id)arg1 toMessage:(id)arg2 ;
-(void)addActionEventsFromAnchorOccurrenceDate:(id)arg1 toMessage:(id)arg2 ;
-(void)addNegativeSamplesForAnchorOccurrenceDate:(id)arg1 toMessage:(id)arg2 ;
-(id)fetchEventsAfterAnchorOccurrenceDate:(id)arg1 withDuetDataProviderClass:(Class)arg2 limit:(unsigned long long)arg3 maxSecondsBeforeAnchor:(long long)arg4 maxSecondsAfterAnchor:(long long)arg5 ;
-(id)allAppsOnSpringBoard;
-(void)setNegativeAppLaunchSamplesForAnchorOccurrenceDate:(id)arg1 mainMessage:(id)arg2 ;
-(void)setNegativeActionSamplesForAnchorOccurrenceDate:(id)arg1 mainMessage:(id)arg2 ;
@end

