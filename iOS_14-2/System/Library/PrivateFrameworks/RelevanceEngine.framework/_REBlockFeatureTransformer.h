/*
* Generated on Thursday, January 14, 2021 at 2:28:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <RelevanceEngine/REFeatureTransformer.h>

@interface _REBlockFeatureTransformer : REFeatureTransformer {

	unsigned long long _featureCount;
	unsigned long long _outputFeatureType;
	/*^block*/id _block;

}
-(unsigned long long)hash;
-(unsigned long long)_outputType;
-(BOOL)isEqual:(id)arg1 ;
-(long long)_bitCount;
-(unsigned long long)_featureCount;
-(unsigned long long)_createTransformFromValues:(unsigned long long*)arg1 count:(unsigned long long)arg2 ;
-(BOOL)_validateWithFeatures:(id)arg1 ;
-(id)initWithFeatureCount:(unsigned long long)arg1 outputFeatureType:(unsigned long long)arg2 transformation:(/*^block*/id)arg3 ;
@end

