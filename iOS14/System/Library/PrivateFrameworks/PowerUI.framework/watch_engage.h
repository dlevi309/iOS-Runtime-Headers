/*
* Generated on Thursday, January 14, 2021 at 2:26:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PowerUI.framework/PowerUI
*/


@class MLModel;

@interface watch_engage : NSObject {

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
-(id)predictionFromPlugin_hour:(double)arg1 plugin_battery_level:(double)arg2 time_from_plugin:(double)arg3 med_dur_1:(double)arg4 med_dur_2:(double)arg5 med_dur_4:(double)arg6 med_dur_8:(double)arg7 med_dur_16:(double)arg8 med_dur_24:(double)arg9 cnt_dur_1:(double)arg10 cnt_dur_2:(double)arg11 cnt_dur_4:(double)arg12 cnt_dur_8:(double)arg13 cnt_dur_16:(double)arg14 cnt_dur_24:(double)arg15 std_dur_1:(double)arg16 std_dur_2:(double)arg17 std_dur_4:(double)arg18 std_dur_8:(double)arg19 std_dur_16:(double)arg20 std_dur_24:(double)arg21 error:(id*)arg22 ;
@end

