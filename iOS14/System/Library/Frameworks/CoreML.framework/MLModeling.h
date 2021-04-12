/*
* Generated on Thursday, January 14, 2021 at 2:22:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
*/

@class MLModelDescription, MLModelInterface, MLModelMetadata;


@protocol MLModeling
@property (nonatomic,retain) MLModelDescription * modelDescription; 
@property (readonly) MLModelInterface * interface; 
@property (readonly) MLModelMetadata * metadata; 
@required
-(id)predictionsFromBatch:(id)arg1 options:(id)arg2 error:(id*)arg3;
-(id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id*)arg3;
-(id)modelPath;
-(id)predictionsFromBatch:(id)arg1 error:(id*)arg2;
-(MLModelInterface *)interface;
-(id)predictionFromFeatures:(id)arg1 error:(id*)arg2;
-(id)executionSchedule;
-(void)setModelDescription:(id)arg1;
-(MLModelDescription *)modelDescription;
-(void)setModelPath:(id)arg1 modelName:(id)arg2;
-(MLModelMetadata *)metadata;

@end

