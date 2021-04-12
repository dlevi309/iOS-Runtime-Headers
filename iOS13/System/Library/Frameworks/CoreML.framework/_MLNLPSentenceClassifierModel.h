/*
* Generated on Monday, March 1, 2021 at 2:30:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
*/

#import <libobjc.A.dylib/MLCustomModel.h>

@class MLModelDescription;

@interface _MLNLPSentenceClassifierModel : NSObject <MLCustomModel> {

	void* _sentenceClassifierModel;
	MLModelDescription* _modelDescription;

}

@property (retain) MLModelDescription * modelDescription;              //@synthesize modelDescription=_modelDescription - In the implementation block
-(MLModelDescription *)modelDescription;
-(id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(void)setModelDescription:(MLModelDescription *)arg1 ;
-(id)initWithModelDescription:(id)arg1 parameterDictionary:(id)arg2 error:(id*)arg3 ;
@end

