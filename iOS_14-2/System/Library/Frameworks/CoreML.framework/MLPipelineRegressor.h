/*
* Generated on Thursday, January 14, 2021 at 2:22:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
*/

#import <CoreML/MLRegressor.h>

@class MLPipeline;

@interface MLPipelineRegressor : MLRegressor {

	MLPipeline* _engine;

}

@property (retain) MLPipeline * engine;                  //@synthesize engine=_engine - In the implementation block
@property (readonly) MLPipeline * pipeline; 
-(MLPipeline *)engine;
-(void)setEngine:(MLPipeline *)arg1 ;
-(id)initWithEngine:(id)arg1 interface:(id)arg2 metadata:(id)arg3 error:(id*)arg4 ;
-(id)regress:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(MLPipeline *)pipeline;
@end

