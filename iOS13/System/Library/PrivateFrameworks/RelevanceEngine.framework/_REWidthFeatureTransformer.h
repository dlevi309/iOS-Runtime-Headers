/*
* Generated on Monday, March 1, 2021 at 2:34:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <RelevanceEngine/REFeatureTransformer.h>

@interface _REWidthFeatureTransformer : REFeatureTransformer {

	unsigned long long _mask;
	unsigned long long _width;
	unsigned long long _shift;

}
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(unsigned long long)_outputType;
-(long long)_bitCount;
-(unsigned long long)_featureCount;
-(unsigned long long)_createTransformFromValues:(unsigned long long*)arg1 count:(unsigned long long)arg2 ;
-(BOOL)_validateWithFeatures:(id)arg1 ;
-(id)initWithWidth:(unsigned long long)arg1 shift:(unsigned long long)arg2 ;
@end

