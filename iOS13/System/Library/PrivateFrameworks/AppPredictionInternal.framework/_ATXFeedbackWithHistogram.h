/*
* Generated on Monday, March 1, 2021 at 2:33:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/

#import <libobjc.A.dylib/_ATXFeedbackProtocol.h>

@class _ATXAppLaunchCategoricalHistogram;

@interface _ATXFeedbackWithHistogram : NSObject <_ATXFeedbackProtocol> {

	_ATXAppLaunchCategoricalHistogram* _store;
	double _priorAlpha;
	double _priorBeta;

}

@property (nonatomic,readonly) double currentAlpha; 
@property (nonatomic,readonly) double currentBeta; 
-(id)initWithHistogram:(id)arg1 ;
-(void)resetData;
-(void)feedbackLaunched:(id)arg1 rejected:(id)arg2 ;
-(void)feedbackLaunched:(id)arg1 rejected:(id)arg2 inUnitTest:(BOOL)arg3 ;
-(void)decayCounts;
-(void)removeFeedbackForBundle:(id)arg1 ;
-(double)currentAlpha;
-(double)currentBeta;
-(double)getConfirmsForBundle:(id)arg1 ;
-(double)getRejectsForBundle:(id)arg1 ;
-(double)getFeedbackScoreForBundle:(id)arg1 ;
-(void)updatePriors;
@end

