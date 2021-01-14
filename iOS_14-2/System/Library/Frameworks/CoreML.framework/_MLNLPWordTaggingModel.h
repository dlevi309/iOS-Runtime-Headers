/*
* Generated on Thursday, January 14, 2021 at 2:22:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
*/

#import <libobjc.A.dylib/MLCustomModel.h>

@class MLModelDescription;

@interface _MLNLPWordTaggingModel : NSObject <MLCustomModel> {

	void* _wordTaggingModel;
	MLModelDescription* _modelDescription;

}

@property (retain) MLModelDescription * modelDescription;              //@synthesize modelDescription=_modelDescription - In the implementation block
-(id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)initWithModelDescription:(id)arg1 parameterDictionary:(id)arg2 error:(id*)arg3 ;
-(void)setModelDescription:(MLModelDescription *)arg1 ;
-(MLModelDescription *)modelDescription;
-(void)dealloc;
@end

