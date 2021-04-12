/*
* Generated on Monday, March 1, 2021 at 2:30:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
*/

#import <libobjc.A.dylib/MLCustomModel.h>

@class MLModelDescription, MLModelConfiguration;

@interface _MLVNScenePrintCustomModel : NSObject <MLCustomModel> {

	int _scenePrintRequestRevision;
	MLModelDescription* _modelDescription;
	MLModelConfiguration* _configuration;

}

@property (nonatomic,readonly) MLModelDescription * modelDescription;              //@synthesize modelDescription=_modelDescription - In the implementation block
@property (nonatomic,readonly) int scenePrintRequestRevision;                      //@synthesize scenePrintRequestRevision=_scenePrintRequestRevision - In the implementation block
@property (nonatomic,readonly) MLModelConfiguration * configuration;               //@synthesize configuration=_configuration - In the implementation block
-(MLModelDescription *)modelDescription;
-(MLModelConfiguration *)configuration;
-(id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)initWithModelDescription:(id)arg1 parameterDictionary:(id)arg2 error:(id*)arg3 ;
-(id)featureValueFromScenePrint:(id)arg1 elementSize:(unsigned long long)arg2 ;
-(int)scenePrintRequestRevision;
@end

