/*
* Generated on Thursday, January 14, 2021 at 2:22:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
*/


@class MLModel;

@interface MLModelVisionFeaturePrintInfo : NSObject {

	unsigned long long _version;
	id _featureExtractorParameters;
	MLModel* _postVisionFeaturePrintModel;

}

@property (nonatomic,retain) id featureExtractorParameters;                      //@synthesize featureExtractorParameters=_featureExtractorParameters - In the implementation block
@property (assign,nonatomic) unsigned long long version;                         //@synthesize version=_version - In the implementation block
@property (nonatomic,retain) MLModel * postVisionFeaturePrintModel;              //@synthesize postVisionFeaturePrintModel=_postVisionFeaturePrintModel - In the implementation block
-(id)featureExtractorParameters;
-(void)setFeatureExtractorParameters:(id)arg1 ;
-(MLModel *)postVisionFeaturePrintModel;
-(void)setPostVisionFeaturePrintModel:(MLModel *)arg1 ;
-(void)setVersion:(unsigned long long)arg1 ;
-(unsigned long long)version;
@end

