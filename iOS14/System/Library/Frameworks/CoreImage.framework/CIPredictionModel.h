/*
* Generated on Thursday, January 14, 2021 at 2:21:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/

#import <CoreImage/CoreImage-Structs.h>
#import <libobjc.A.dylib/MLFeatureProvider.h>

@class NSSet, MLModel;

@interface CIPredictionModel : NSObject <MLFeatureProvider> {

	CVBufferRef imageBuffer;
	MLModel* _model;
	CIPredictionModelImageFeatures _inputImageFeatures;
	CIPredictionModelImageFeatures _outputImageFeatures;

}

@property (nonatomic,retain) MLModel * model;                                                 //@synthesize model=_model - In the implementation block
@property (assign,nonatomic) CIPredictionModelImageFeatures inputImageFeatures;               //@synthesize inputImageFeatures=_inputImageFeatures - In the implementation block
@property (assign,nonatomic) CIPredictionModelImageFeatures outputImageFeatures;              //@synthesize outputImageFeatures=_outputImageFeatures - In the implementation block
@property (nonatomic,readonly) NSSet * featureNames; 
-(id)featureValueForName:(id)arg1 ;
-(MLModel *)model;
-(NSSet *)featureNames;
-(void)setModel:(MLModel *)arg1 ;
-(BOOL)processInputModel:(id)arg1 ;
-(BOOL)processInputFeatureWithName:(id)arg1 featureDescription:(id)arg2 ;
-(BOOL)processOutputFeatureWithName:(id)arg1 featureDescription:(id)arg2 ;
-(CIPredictionModelImageFeatures)outputImageFeatures;
-(CIPredictionModelImageFeatures)inputImageFeatures;
-(CVBufferRef)predictUsingInputBuffer:(CVBufferRef)arg1 error:(id*)arg2 ;
-(void)setInputImageFeatures:(CIPredictionModelImageFeatures)arg1 ;
-(void)setOutputImageFeatures:(CIPredictionModelImageFeatures)arg1 ;
-(id)initWithModel:(id)arg1 ;
-(void)dealloc;
@end

