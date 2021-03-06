/*
* Generated on Thursday, January 14, 2021 at 2:28:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <libobjc.A.dylib/REFeatureProperties.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface REFeature : NSObject <REFeatureProperties, NSCopying>

@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) unsigned long long featureType; 
+(id)featureWithName:(id)arg1 featureType:(unsigned long long)arg2 ;
+(id)crossedFeatureWithFeatures:(id)arg1 ;
+(id)transformedFeatureWithTransformer:(id)arg1 features:(id)arg2 ;
+(id)priorityFeature;
+(id)noContentFeature;
+(id)dateFeature;
+(id)dateOccursTodayFeature;
+(id)appUsageFeature;
+(id)sentimentAnalysisFeature;
+(id)negativeSentimentAnalysisFeature;
+(id)sentimentAnalysisCertaintyFeature;
+(id)portraitFeature;
+(id)groupFeature;
+(id)activeEnergyCompletionFeature;
+(id)exerciseTimeCompletionFeature;
+(id)standHourCompletionFeature;
+(id)locationFeature;
+(id)activeWorkoutFeature;
+(id)dailyAverageWorkoutCountFeature;
+(id)performedWorkoutCountFeature;
+(id)coreBehaviorTimePredictionFeature;
+(id)coreBehaviorTimeCoarsePredictionFeature;
+(id)coreBehaviorDayPredictionFeature;
+(id)coreBehaviorDayCoarsePredictionFeature;
+(id)coreBehaviorLocationPredictionFeature;
+(id)coreBehaviorLocationCoarsePredictionFeature;
+(id)coreBehaviorShortcutTypeFeature;
+(id)coreBehaviorEventIdentifierHashFeature;
+(id)coreBehaviorAppIdentifierHashFeature;
+(id)workoutStateFeature;
+(id)forcedFeature;
+(id)relevanceThresholdFeature;
+(id)siriDomainFeature;
+(id)geofenceFeature;
+(id)motionFeature;
+(id)recentSiriActionFeature;
+(id)siriActionPerformedCountFeature;
+(id)dataSourceFeature;
+(id)dailyRoutineFeature;
+(id)isInDailyRoutineFeature;
+(id)isWeekendFeature;
+(id)dayOfWeekFeature;
+(id)currentTimeFeature;
+(id)sectionFeature;
+(id)interactionFeature;
+(id)conditionalFeature;
+(id)sessionFeature;
+(id)locationOfInterestFeature;
+(id)knownLocationOfInterestFeature;
+(id)travelingFeature;
+(id)isStationaryFeature;
+(id)deviceMotionFeature;
+(id)itemIdentifierFeature;
+(id)isSiriActionFeature;
+(id)isDeveloperDonationFeature;
+(id)siriActionHasRelevanceProvidersFeature;
+(id)siriActionDailyAveragePerformedCountFeature;
+(id)nowPlayingStateFeature;
+(id)currentlyPlayingMediaDonationFeature;
+(id)currentlyPlayingFromAppFeature;
+(id)siriActionRoleFeature;
+(id)activitySummaryFeature;
+(id)bulletinFeature;
+(id)companionAppUsageFeature;
+(id)isConnectedToCarFeature;
+(id)isConnectedToBluetoothSpeakerFeature;
+(id)bluetoothDeviceFeature;
+(id)systemFeatureNames;
+(id)featuresFromSource:(id)arg1 ;
+(id)featuresFromSource:(id)arg1 withNames:(id)arg2 ;
+(id)featuresFromSourceAtPath:(id)arg1 ;
+(id)featuresFromSourceAtPath:(id)arg1 withNames:(id)arg2 ;
-(unsigned long long)featureType;
-(NSString *)name;
-(id)description;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)featureByUsingTransformer:(id)arg1 ;
-(long long)_bitCount;
-(id)_rootFeatures;
-(id)_dependentFeatures;
-(void)_replaceDependentFeature:(id)arg1 withFeature:(id)arg2 ;
@end

