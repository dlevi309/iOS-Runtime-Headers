/*
* Generated on Monday, March 1, 2021 at 2:33:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PowerUI.framework/PowerUI
*/


@class MLModel;

@interface gbtRegressor : NSObject {

	MLModel* _model;

}

@property (nonatomic,readonly) MLModel * model;              //@synthesize model=_model - In the implementation block
+(id)urlOfModelInThisBundle;
-(id)init;
-(id)initWithContentsOfURL:(id)arg1 error:(id*)arg2 ;
-(MLModel *)model;
-(id)predictionFromFeatures:(id)arg1 error:(id*)arg2 ;
-(id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)initWithContentsOfURL:(id)arg1 configuration:(id)arg2 error:(id*)arg3 ;
-(id)initWithConfiguration:(id)arg1 error:(id*)arg2 ;
-(id)predictionsFromInputs:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)predictionFromPlugin_hour:(double)arg1 plugin_battery_level:(double)arg2 hour:(double)arg3 time_from_plugin:(double)arg4 cnt_dur_1:(double)arg5 avg_dur_1:(double)arg6 error:(id*)arg7 ;
@end

