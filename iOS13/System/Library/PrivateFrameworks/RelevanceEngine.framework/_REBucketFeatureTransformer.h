/*
* Generated on Monday, March 1, 2021 at 2:34:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <RelevanceEngine/REFeatureTransformer.h>

@interface _REBucketFeatureTransformer : REFeatureTransformer {

	unsigned long long _count;
	long long _bitCount;
	unsigned long long _min;
	unsigned long long _max;

}

@property (assign,nonatomic) unsigned long long min;              //@synthesize min=_min - In the implementation block
@property (assign,nonatomic) unsigned long long max;              //@synthesize max=_max - In the implementation block
+(id)functionName;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)setMax:(unsigned long long)arg1 ;
-(unsigned long long)max;
-(void)setMin:(unsigned long long)arg1 ;
-(unsigned long long)min;
-(unsigned long long)_outputType;
-(void)_updateConfigurationForCount:(unsigned long long)arg1 ;
-(void)configureWithInvocation:(id)arg1 ;
-(long long)_bitCount;
-(unsigned long long)_featureCount;
-(unsigned long long)_createTransformFromValues:(unsigned long long*)arg1 count:(unsigned long long)arg2 ;
-(BOOL)_validateWithFeatures:(id)arg1 ;
@end

