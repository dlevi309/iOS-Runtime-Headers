/*
* Generated on Thursday, January 14, 2021 at 2:28:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setMin:(unsigned long long)arg1 ;
-(unsigned long long)min;
-(unsigned long long)max;
-(unsigned long long)hash;
-(void)setMax:(unsigned long long)arg1 ;
-(unsigned long long)_outputType;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(void)_updateConfigurationForCount:(unsigned long long)arg1 ;
-(void)configureWithInvocation:(id)arg1 ;
-(long long)_bitCount;
-(unsigned long long)_featureCount;
-(unsigned long long)_createTransformFromValues:(unsigned long long*)arg1 count:(unsigned long long)arg2 ;
-(BOOL)_validateWithFeatures:(id)arg1 ;
@end

