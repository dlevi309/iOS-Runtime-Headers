/*
* Generated on Thursday, January 14, 2021 at 2:25:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextRecognition.framework/TextRecognition
*/


#import <TextRecognition/TextRecognition-Structs.h>
@class MLModel;

@interface CRTextDetectorModel : NSObject {

	MLModel* _model;

}

@property (nonatomic,readonly) MLModel * model;              //@synthesize model=_model - In the implementation block
+(id)defaultURLOfModelInThisBundle;
-(MLModel *)model;
-(id)init;
-(id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)predictionsFromInputs:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)predictionFromFeatures:(id)arg1 error:(id*)arg2 ;
-(id)initWithContentsOfURL:(id)arg1 error:(id*)arg2 ;
-(id)initWithConfiguration:(id)arg1 error:(id*)arg2 ;
-(id)initWithContentsOfURL:(id)arg1 configuration:(id)arg2 error:(id*)arg3 ;
-(id)predictionFromData:(CVBufferRef)arg1 error:(id*)arg2 ;
@end

