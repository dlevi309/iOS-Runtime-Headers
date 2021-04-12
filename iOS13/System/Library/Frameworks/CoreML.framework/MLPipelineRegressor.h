/*
* Generated on Monday, March 1, 2021 at 2:30:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)regress:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(MLPipeline *)pipeline;
-(id)initWithEngine:(id)arg1 interface:(id)arg2 metadata:(id)arg3 error:(id*)arg4 ;
@end

