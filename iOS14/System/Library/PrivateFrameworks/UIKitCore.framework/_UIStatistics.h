/*
* Generated on Thursday, January 14, 2021 at 2:20:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class NSString, NSMutableSet;

@interface _UIStatistics : NSObject {

	NSString* _key;
	double _sampleValue;
	NSMutableSet* _children;
	double _sampleRate;

}

@property (assign,nonatomic) double sampleRate;              //@synthesize sampleRate=_sampleRate - In the implementation block
+(id)recentsInputViewPresentationCount;
+(id)previewInteractionTapCount;
+(id)feedbackGeneratorPlayCountWithSuffix:(id)arg1 ;
+(id)feedbackEngineActivationDurationWithSuffix:(id)arg1 ;
+(id)feedbackEngineActivationCountWithSuffix:(id)arg1 ;
+(id)coverSheetButtonFirstActivationDurationWithCategory:(id)arg1 ;
+(id)controlInteractionDurationDistributionWithCategory:(id)arg1 suffix:(id)arg2 ;
+(id)controlValueChangeEmittedCountWithCategory:(id)arg1 suffix:(id)arg2 ;
+(id)feedbackEngineOutOfChannelsCountWithSuffix:(id)arg1 ;
+(id)feedbackGeneratorActivationTimeOutCountWithSuffix:(id)arg1 ;
+(id)_sharedStatisticWithDomain:(id)arg1 statisticsClass:(Class)arg2 identifierReporting:(long long)arg3 ;
+(id)previewInteractionPeekDuration;
+(unsigned long long)currentTime;
+(id)scrollBounceCount;
+(id)scrubberUsageTime;
+(id)previewInteractionPeekCount;
+(id)coverSheetButtonMaximumForceWithActivation:(BOOL)arg1 category:(id)arg2 ;
+(id)feedbackGeneratorPreparationCountWithSuffix:(id)arg1 ;
+(id)previewInteractionPeekForce;
+(id)pinchGestureCount;
+(id)previewInteractionPopForce;
+(id)scrubberUsageCount;
+(id)previewInteractionAlertPresentationCount;
+(id)recentsInputViewNumberOfItems;
+(id)coverSheetButtonInteractionDurationWithCategory:(id)arg1 ;
+(id)recentsInputViewItemSelectedCount;
+(id)feedbackGeneratorActivationCountWithSuffix:(id)arg1 ;
+(id)feedbackGeneratorActivationDurationWithSuffix:(id)arg1 ;
+(id)zoomGestureCount;
+(id)controlTapCountWithCategory:(id)arg1 suffix:(id)arg2 ;
+(id)recentsInputViewNewEntryCount;
+(id)previewInteractionPopCount;
+(id)feedbackEnginePrewarmCountWithSuffix:(id)arg1 ;
+(id)maxForce;
+(id)feedbackEnginePrewarmDurationWithSuffix:(id)arg1 ;
+(id)alertButtonTapCount;
+(id)coverSheetButtonInteractionCountWithActivation:(BOOL)arg1 category:(id)arg2 ;
-(id)_key;
-(void)_resetDistribution;
-(BOOL)_shouldSample;
-(void)_resetValue;
-(id)init;
-(void)_recordDistributionValue:(double)arg1 ;
-(void)_resetDistributionToValue:(double)arg1 ;
-(id)initWithDomain:(id)arg1 identifierReporting:(long long)arg2 ;
-(void)_recordDistributionTime:(unsigned long long)arg1 ;
-(void)_incrementValueBy:(long long)arg1 ;
-(void)_addChildStatistic:(id)arg1 ;
-(void)_removeChildStatistic:(id)arg1 ;
-(void)randomizeSampleValue;
-(id)initWithDomain:(id)arg1 ;
-(id)description;
-(void)setSampleRate:(double)arg1 ;
-(void)_setValue:(long long)arg1 ;
-(double)sampleRate;
@end

