/*
* Generated on Thursday, January 14, 2021 at 2:26:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
*/


@class NSDictionary;

@interface PHAPrivateFederatedLearningTransformersDecoder : NSObject {

	NSDictionary* _transformerNameToClass;

}

@property (nonatomic,readonly) NSDictionary * transformerNameToClass;              //@synthesize transformerNameToClass=_transformerNameToClass - In the implementation block
-(id)init;
-(BOOL)_generateError:(id*)arg1 errorCode:(long long)arg2 errorMessage:(id)arg3 ;
-(id)transformersForFeatureExtractorsFromDictionary:(id)arg1 error:(id*)arg2 ;
-(id)instancesForTransformerConfigList:(id)arg1 error:(id*)arg2 ;
-(id)instanceForTransformerConfig:(id)arg1 error:(id*)arg2 ;
-(NSDictionary *)transformerNameToClass;
@end

