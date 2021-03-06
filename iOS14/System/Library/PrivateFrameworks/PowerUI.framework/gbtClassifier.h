/*
* Generated on Thursday, January 14, 2021 at 2:26:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PowerUI.framework/PowerUI
*/


@class MLModel;

@interface gbtClassifier : NSObject {

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
-(id)predictionFromPlugin_hour:(double)arg1 plugin_battery_level:(double)arg2 device_activity:(double)arg3 hour:(double)arg4 battery_level:(double)arg5 heuristic_bin:(double)arg6 plugin_location:(double)arg7 hour_bin_id:(double)arg8 time_from_plugin:(double)arg9 avg_dur:(double)arg10 cnt_dur:(double)arg11 error:(id*)arg12 ;
@end

