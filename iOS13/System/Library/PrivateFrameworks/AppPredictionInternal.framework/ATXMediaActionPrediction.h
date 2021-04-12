/*
* Generated on Monday, March 1, 2021 at 2:33:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/


#import <AppPredictionInternal/AppPredictionInternal-Structs.h>
@interface ATXMediaActionPrediction : NSObject
+(id)getAllUpcomingMedia;
+(id)updatePlayMediaActionPredictions:(id)arg1 withUpcomingMedia:(id)arg2 forActionKey:(id)arg3 appActionPredictionItem:(const ATXPredictionItem*)arg4 appActionLogProbability:(double)arg5 statistics:(id)arg6 ;
+(BOOL)upcomingMediaPreferenceForINPlayMediaIntent:(id)arg1 withINUpcomingMediaManagerReturnValueForTests:(id)arg2 ;
+(BOOL)upcomingMediaPreferenceForINPlayMediaIntent:(id)arg1 ;
+(id)resolvePlayMediaIntent:(id)arg1 withUpcomingMedia:(id)arg2 ;
+(id)resolveBucketLevelPrediction:(id)arg1 withUpcomingMedia:(id)arg2 ;
+(id)resolveContainerLevelPrediction:(id)arg1 withUpcomingMedia:(id)arg2 ;
+(id)resolveItemLevelPrediction:(id)arg1 withUpcomingMedia:(id)arg2 ;
+(id)findTopRankedINPlayMediaIntentFromArray:(id)arg1 ;
+(id)getUpcomingMediaForBundle:(id)arg1 isInternalApplication:(BOOL)arg2 ;
@end

