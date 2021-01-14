/*
* Generated on Thursday, January 14, 2021 at 2:27:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
*/

#import <libobjc.A.dylib/SNMLModel.h>

@protocol MLCustomModel;
@class MLModelDescription, NSString;

@interface SNMLCustomModel : NSObject <SNMLModel> {

	id<MLCustomModel> _customModel;
	MLModelDescription* _modelDescription;

}

@property (readonly) MLModelDescription * modelDescription;              //@synthesize modelDescription=_modelDescription - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(MLModelDescription *)modelDescription;
-(id)initWithMLCustomModel:(id)arg1 modelDescription:(id)arg2 ;
@end

