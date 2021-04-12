/*
* Generated on Thursday, January 14, 2021 at 2:22:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
*/

#import <CoreML/MLClassifier.h>

@class MLPipeline;

@interface MLPipelineClassifier : MLClassifier {

	MLPipeline* _engine;

}

@property (retain) MLPipeline * engine;                  //@synthesize engine=_engine - In the implementation block
@property (readonly) MLPipeline * pipeline; 
-(MLPipeline *)engine;
-(void)setEngine:(MLPipeline *)arg1 ;
-(MLPipeline *)pipeline;
-(id)initWithEngine:(id)arg1 interface:(id)arg2 metadata:(id)arg3 configuration:(id)arg4 error:(id*)arg5 ;
-(id)classify:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
@end

