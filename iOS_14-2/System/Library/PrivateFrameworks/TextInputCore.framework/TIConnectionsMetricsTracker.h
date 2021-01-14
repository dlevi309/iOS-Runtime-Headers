/*
* Generated on Thursday, January 14, 2021 at 2:25:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
*/


@class PETScalarEventTracker, PETGoalConversionEventTracker;

@interface TIConnectionsMetricsTracker : NSObject {

	BOOL _inputContextDidChange;
	PETScalarEventTracker* _textFieldEntryTracker;
	PETGoalConversionEventTracker* _predictionEngagementTracker;

}

@property (nonatomic,retain) PETScalarEventTracker * textFieldEntryTracker;                            //@synthesize textFieldEntryTracker=_textFieldEntryTracker - In the implementation block
@property (nonatomic,retain) PETGoalConversionEventTracker * predictionEngagementTracker;              //@synthesize predictionEngagementTracker=_predictionEngagementTracker - In the implementation block
@property (assign) BOOL inputContextDidChange;                                                         //@synthesize inputContextDidChange=_inputContextDidChange - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)setInputContextDidChange:(BOOL)arg1 ;
-(void)trackPredictionEngagmentWithConversion:(BOOL)arg1 age:(unsigned long long)arg2 fieldType:(id)arg3 resultType:(id)arg4 fromBundleId:(id)arg5 targetApp:(id)arg6 linguistic:(BOOL)arg7 semantic:(BOOL)arg8 ;
-(BOOL)isIgnoredTrigger:(id)arg1 ;
-(PETScalarEventTracker *)textFieldEntryTracker;
-(PETGoalConversionEventTracker *)predictionEngagementTracker;
-(void)trackTextFieldEntryWithEmpty:(BOOL)arg1 fieldType:(id)arg2 linguistic:(BOOL)arg3 semantic:(BOOL)arg4 requestType:(id)arg5 ;
-(void)trackTextFieldEntryWithEmpty:(BOOL)arg1 fieldType:(id)arg2 trigger:(id)arg3 ;
-(BOOL)inputContextDidChange;
-(void)setTextFieldEntryTracker:(PETScalarEventTracker *)arg1 ;
-(void)setPredictionEngagementTracker:(PETGoalConversionEventTracker *)arg1 ;
@end

