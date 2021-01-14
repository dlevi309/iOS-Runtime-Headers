/*
* Generated on Thursday, January 14, 2021 at 2:22:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
*/

#import <libobjc.A.dylib/MLCustomModel.h>

@class MLModelDescription, NSDictionary, MLModelConfiguration;

@interface _MLVNDetectionPrintCustomModel : NSObject <MLCustomModel> {

	MLModelDescription* _modelDescription;
	unsigned long long _detectionPrintRequestRevision;
	NSDictionary* _expectedOutputShapeV1;
	MLModelConfiguration* _configuration;

}

@property (nonatomic,readonly) MLModelDescription * modelDescription;                         //@synthesize modelDescription=_modelDescription - In the implementation block
@property (nonatomic,readonly) unsigned long long detectionPrintRequestRevision;              //@synthesize detectionPrintRequestRevision=_detectionPrintRequestRevision - In the implementation block
@property (nonatomic,readonly) NSDictionary * expectedOutputShapeV1;                          //@synthesize expectedOutputShapeV1=_expectedOutputShapeV1 - In the implementation block
@property (nonatomic,readonly) MLModelConfiguration * configuration;                          //@synthesize configuration=_configuration - In the implementation block
-(id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)featureValueFromDetectionPrint:(id)arg1 featureName:(id)arg2 ;
-(unsigned long long)detectionPrintRequestRevision;
-(NSDictionary *)expectedOutputShapeV1;
-(id)initWithModelDescription:(id)arg1 parameterDictionary:(id)arg2 error:(id*)arg3 ;
-(MLModelConfiguration *)configuration;
-(MLModelDescription *)modelDescription;
@end

