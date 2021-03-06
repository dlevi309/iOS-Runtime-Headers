/*
* Generated on Thursday, January 14, 2021 at 2:26:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PowerUI.framework/PowerUI
*/


@class MLModel;

@interface audioAccessory_higher_usage_reg : NSObject {

	MLModel* _model;

}

@property (nonatomic,readonly) MLModel * model;              //@synthesize model=_model - In the implementation block
+(id)URLOfModelInThisBundle;
+(void)loadContentsOfURL:(id)arg1 configuration:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
+(void)loadWithConfiguration:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(MLModel *)model;
-(id)init;
-(id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)predictionsFromInputs:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)predictionFromFeatures:(id)arg1 error:(id*)arg2 ;
-(id)initWithContentsOfURL:(id)arg1 error:(id*)arg2 ;
-(id)initWithConfiguration:(id)arg1 error:(id*)arg2 ;
-(id)initWithMLModel:(id)arg1 ;
-(id)initWithContentsOfURL:(id)arg1 configuration:(id)arg2 error:(id*)arg3 ;
-(id)predictionFromClassic_time_between_uses_med_dur_1:(double)arg1 classic_time_between_uses_med_dur_2:(double)arg2 classic_time_between_uses_med_dur_4:(double)arg3 classic_time_between_uses_med_dur_24:(double)arg4 classic_time_between_uses_std_dur_1:(double)arg5 classic_time_between_uses_std_dur_2:(double)arg6 classic_time_between_uses_std_dur_4:(double)arg7 classic_time_between_uses_std_dur_24:(double)arg8 hour:(double)arg9 is_weekend:(double)arg10 hour_plus_0:(double)arg11 hour_plus_1:(double)arg12 hour_plus_2:(double)arg13 hour_plus_3:(double)arg14 hour_plus_4:(double)arg15 hour_plus_5:(double)arg16 hours_until_use:(double)arg17 meaningful_undercharge_rolling_average:(double)arg18 error:(id*)arg19 ;
@end

