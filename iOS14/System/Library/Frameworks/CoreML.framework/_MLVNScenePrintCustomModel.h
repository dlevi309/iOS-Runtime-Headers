/*
* Generated on Thursday, January 14, 2021 at 2:22:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
*/

#import <libobjc.A.dylib/MLCustomModel.h>

@class MLModelDescription, MLModelConfiguration;

@interface _MLVNScenePrintCustomModel : NSObject <MLCustomModel> {

	MLModelDescription* _modelDescription;
	unsigned long long _scenePrintRequestRevision;
	MLModelConfiguration* _configuration;

}

@property (nonatomic,readonly) MLModelDescription * modelDescription;                     //@synthesize modelDescription=_modelDescription - In the implementation block
@property (nonatomic,readonly) unsigned long long scenePrintRequestRevision;              //@synthesize scenePrintRequestRevision=_scenePrintRequestRevision - In the implementation block
@property (nonatomic,readonly) MLModelConfiguration * configuration;                      //@synthesize configuration=_configuration - In the implementation block
-(id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)initWithModelDescription:(id)arg1 parameterDictionary:(id)arg2 error:(id*)arg3 ;
-(MLModelConfiguration *)configuration;
-(MLModelDescription *)modelDescription;
-(id)featureValueFromScenePrint:(id)arg1 elementSize:(unsigned long long)arg2 ;
-(unsigned long long)scenePrintRequestRevision;
@end

