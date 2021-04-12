/*
* Generated on Monday, March 1, 2021 at 2:30:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
*/


@protocol MLWritable;
@class MLUpdateTask, MLModel, NSDictionary, NSError;

@interface MLUpdateContext : NSObject {

	MLUpdateTask* _task;
	MLModel*<MLWritable> _model;
	long long _event;
	NSDictionary* _metrics;
	NSDictionary* _parameters;
	NSError* _error;

}

@property (nonatomic,retain) MLUpdateTask * task;                     //@synthesize task=_task - In the implementation block
@property (nonatomic,retain) MLModel*<MLWritable> model;              //@synthesize model=_model - In the implementation block
@property (assign,nonatomic) long long event;                         //@synthesize event=_event - In the implementation block
@property (nonatomic,retain) NSDictionary * metrics;                  //@synthesize metrics=_metrics - In the implementation block
@property (nonatomic,retain) NSDictionary * parameters;               //@synthesize parameters=_parameters - In the implementation block
@property (nonatomic,retain) NSError * error;                         //@synthesize error=_error - In the implementation block
+(id)updateContextWithTask:(id)arg1 model:(id)arg2 event:(long long)arg3 metrics:(id)arg4 parameters:(id)arg5 ;
+(id)updateContextForEvent:(long long)arg1 metrics:(id)arg2 parameters:(id)arg3 error:(id)arg4 ;
-(id)description;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(MLModel*<MLWritable>)model;
-(NSDictionary *)parameters;
-(void)setModel:(MLModel*<MLWritable>)arg1 ;
-(long long)event;
-(void)setEvent:(long long)arg1 ;
-(NSDictionary *)metrics;
-(void)setParameters:(NSDictionary *)arg1 ;
-(MLUpdateTask *)task;
-(void)setTask:(MLUpdateTask *)arg1 ;
-(void)setMetrics:(NSDictionary *)arg1 ;
@end

