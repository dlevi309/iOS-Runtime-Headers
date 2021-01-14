/*
* Generated on Thursday, January 14, 2021 at 2:27:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
*/

@class MLModelDescription;


@protocol SNMLModel <NSObject>
@property (readonly) MLModelDescription * modelDescription; 
@required
-(id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id*)arg3;
-(MLModelDescription *)modelDescription;

@end

