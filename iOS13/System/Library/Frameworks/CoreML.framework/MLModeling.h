/*
* Generated on Monday, March 1, 2021 at 2:30:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
*/

@class MLModelDescription, MLModelInterface, MLModelMetadata;


@protocol MLModeling
@property (nonatomic,retain) MLModelDescription * modelDescription; 
@property (readonly) MLModelInterface * interface; 
@property (readonly) MLModelMetadata * metadata; 
@required
-(MLModelInterface *)interface;
-(MLModelDescription *)modelDescription;
-(id)predictionFromFeatures:(id)arg1 error:(id*)arg2;
-(MLModelMetadata *)metadata;
-(id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id*)arg3;
-(id)predictionsFromBatch:(id)arg1 error:(id*)arg2;
-(id)predictionsFromBatch:(id)arg1 options:(id)arg2 error:(id*)arg3;
-(void)setModelDescription:(id)arg1;

@end

