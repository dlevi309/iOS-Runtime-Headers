/*
* Generated on Thursday, January 14, 2021 at 2:28:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <RelevanceEngine/REFeatureTransformer.h>

@class NSDate;

@interface _REChangeFeatureTransformer : REFeatureTransformer {

	double _interval;
	NSDate* _lastChangeDate;
	unsigned long long _value;

}

@property (assign,nonatomic) unsigned long long value;              //@synthesize value=_value - In the implementation block
+(BOOL)supportsInvalidation;
+(id)functionName;
-(id)init;
-(void)setValue:(unsigned long long)arg1 ;
-(unsigned long long)hash;
-(unsigned long long)_outputType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)value;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(void)configureWithInvocation:(id)arg1 ;
-(long long)_bitCount;
-(unsigned long long)_featureCount;
-(unsigned long long)_createTransformFromValues:(unsigned long long*)arg1 count:(unsigned long long)arg2 ;
-(BOOL)_validateWithFeatures:(id)arg1 ;
-(void)_updateConfigurationForInterval:(double)arg1 ;
@end

