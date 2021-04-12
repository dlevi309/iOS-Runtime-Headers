/*
* Generated on Monday, March 1, 2021 at 2:33:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/


@class PETDistributionEventTracker, PETScalarEventTracker, ATXUserMetricsLogger;

@interface ATXActionFeedback : NSObject {

	PETDistributionEventTracker* _predictionsTracker;
	PETScalarEventTracker* _predictionItemsTracker;
	PETScalarEventTracker* _engagedInitTracker;
	PETScalarEventTracker* _engagementTracker;
	PETScalarEventTracker* _tvEngagementTracker;
	PETScalarEventTracker* _tvShownTracker;
	PETDistributionEventTracker* _predictedSlotTracker;
	PETDistributionEventTracker* _engagedSlotTracker;
	PETScalarEventTracker* _captureRateTracker;
	PETDistributionEventTracker* _durationTracker;
	ATXUserMetricsLogger* _userMetricsLogger;
	BOOL _spotlightEngagmentMatchedLockscreen;

}
+(id)sharedInstance;
-(id)_init;
-(void)resetData;
-(void)decayCounts;
-(void)applyFinalFeedbackForActionResponse:(id)arg1 engagementType:(unsigned long long)arg2 ;
-(void)processCachedATXActionResponseWithConsumerSubType:(unsigned char)arg1 ;
-(void)removeMatchingLockScreenPredictionForAction:(id)arg1 ;
-(void)_computeAndLogSpotlightCaptureRateWithActionResponse:(id)arg1 ;
-(void)receiveFeedbackWithActionResponse:(id)arg1 ;
-(void)registerPredictionNotificationChangeDetected:(long long)arg1 was3dTouched:(BOOL)arg2 ;
-(void)logHeuristicFeedback:(id)arg1 ;
-(void)logHeuristicFeedbackToSuggestionsForAction:(id)arg1 withActionType:(unsigned short)arg2 ;
-(void)logHeuristicFeedbackToPortraitForAction:(id)arg1 withActionType:(unsigned short)arg2 ;
@end

