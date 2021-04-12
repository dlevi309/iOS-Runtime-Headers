/*
* Generated on Monday, March 1, 2021 at 2:30:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSURL *)modelURL;
-(void)setModelURL:(NSURL *)arg1 ;
-(MLModelConfiguration *)modelConfiguration;
-(void)setModelConfiguration:(MLModelConfiguration *)arg1 ;
-(MLPredictionOptions *)predictionOptions;
-(void)setPredictionOptions:(MLPredictionOptions *)arg1 ;
@end

