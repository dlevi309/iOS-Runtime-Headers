/*
* Generated on Thursday, January 14, 2021 at 2:22:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
*/

#import <CoreML/CoreML-Structs.h>
#import <CoreML/MLBackgroundTask.h>

@class NSURL, MLModelConfiguration, MLPredictionOptions;

@interface MLBackgroundPredictionTask : MLBackgroundTask {

	NSURL* _modelURL;
	MLModelConfiguration* _modelConfiguration;
	MLPredictionOptions* _predictionOptions;

}

@property (nonatomic,copy) NSURL * modelURL;                                       //@synthesize modelURL=_modelURL - In the implementation block
@property (nonatomic,copy) MLModelConfiguration * modelConfiguration;              //@synthesize modelConfiguration=_modelConfiguration - In the implementation block
@property (nonatomic,copy) MLPredictionOptions * predictionOptions;                //@synthesize predictionOptions=_predictionOptions - In the implementation block
+(BOOL)supportsSecureCoding;
+(Class)taskRunnerClass;
-(void)setModelURL:(NSURL *)arg1 ;
-(NSURL *)modelURL;
-(void)encodeWithCoder:(id)arg1 ;
-(MLModelConfiguration *)modelConfiguration;
-(void)setModelConfiguration:(MLModelConfiguration *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(MLPredictionOptions *)predictionOptions;
-(void)setPredictionOptions:(MLPredictionOptions *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

