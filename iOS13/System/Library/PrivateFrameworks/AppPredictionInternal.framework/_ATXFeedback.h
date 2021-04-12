/*
* Generated on Monday, March 1, 2021 at 2:33:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/

#import <libobjc.A.dylib/_ATXFeedbackProtocol.h>

@class _ATXDataStore, _ATXInternalUninstallNotification, NSString, _ATXAppLaunchCategoricalHistogram;

@interface _ATXFeedback : NSObject <_ATXFeedbackProtocol> {

	_ATXDataStore* _store;
	_ATXInternalUninstallNotification* _uninstallNotificationListener;
	double _priorAlpha;
	double _priorBeta;
	NSString* _abGroupIdentifier;
	_ATXAppLaunchCategoricalHistogram* _appCoarseTimePOWLocationConfirmsHistogram;
	_ATXAppLaunchCategoricalHistogram* _appSpecificTimeDOWLocationConfirmsHistogram;
	_ATXAppLaunchCategoricalHistogram* _appCoarseTimePOWLocationRejectsHistogram;
	_ATXAppLaunchCategoricalHistogram* _appSpecificTimeDOWLocationRejectsHistogram;
	_ATXAppLaunchCategoricalHistogram* _appConfirmsTwoHourTimeInterval;
	_ATXAppLaunchCategoricalHistogram* _appRejectsTwoHourTimeInterval;
	_ATXAppLaunchCategoricalHistogram* _appConfirmsDayOfWeek;
	_ATXAppLaunchCategoricalHistogram* _appRejectsDayOfWeek;
	_ATXAppLaunchCategoricalHistogram* _appConfirmsCoarseGeoHash;
	_ATXAppLaunchCategoricalHistogram* _appRejectsCoarseGeoHash;
	_ATXAppLaunchCategoricalHistogram* _appConfirmsSpecificGeoHash;
	_ATXAppLaunchCategoricalHistogram* _appRejectsSpecificGeoHash;

}

@property (nonatomic,readonly) double currentAlpha; 
@property (nonatomic,readonly) double currentBeta; 
+(id)sharedInstance;
-(id)init;
-(id)initWithDataStore:(id)arg1 ;
-(void)resetData;
-(void)doDecayAtTime:(double)arg1 ;
-(void)feedbackLaunched:(id)arg1 rejected:(id)arg2 date:(id)arg3 location:(id)arg4 ;
-(void)feedbackLaunched:(id)arg1 rejected:(id)arg2 inUnitTest:(BOOL)arg3 date:(id)arg4 location:(id)arg5 ;
-(void)decayCounts;
-(void)removeFeedbackForBundle:(id)arg1 ;
-(double)currentAlpha;
-(double)currentBeta;
-(id)initWithDataStore:(id)arg1 coarseTimePOWLocationConfirmsHistogram:(id)arg2 specificTimeDOWLocationConfirmsHistogram:(id)arg3 coarseTimePOWLocationRejectsHistogram:(id)arg4 specificTimeDOWLocationRejectsHistogram:(id)arg5 appConfirmsTwoHourTimeInterval:(id)arg6 appRejectsTwoHourTimeInterval:(id)arg7 appConfirmsDayOfWeek:(id)arg8 appRejectsDayOfWeek:(id)arg9 appConfirmsCoarseGeoHash:(id)arg10 appRejectsCoarseGeoHash:(id)arg11 appConfirmsSpecificGeoHash:(id)arg12 appRejectsSpecificGeoHash:(id)arg13 ;
-(void)putNopScoresForApps:(id)arg1 into:(double*)arg2 atTime:(double)arg3 ;
-(void)putFeedbackScoresForApps:(id)arg1 intoScores:(double*)arg2 confirms:(double*)arg3 rejects:(double*)arg4 ;
-(void)removeFeedbackForBundles:(id)arg1 ;
@end

