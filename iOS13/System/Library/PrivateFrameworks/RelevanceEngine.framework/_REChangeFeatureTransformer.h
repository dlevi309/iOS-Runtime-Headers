/*
* Generated on Monday, March 1, 2021 at 2:34:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)functionName;
+(BOOL)supportsInvalidation;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)value;
-(void)setValue:(unsigned long long)arg1 ;
-(unsigned long long)_outputType;
-(void)configureWithInvocation:(id)arg1 ;
-(long long)_bitCount;
-(unsigned long long)_featureCount;
-(unsigned long long)_createTransformFromValues:(unsigned long long*)arg1 count:(unsigned long long)arg2 ;
-(BOOL)_validateWithFeatures:(id)arg1 ;
-(void)_updateConfigurationForInterval:(double)arg1 ;
@end

