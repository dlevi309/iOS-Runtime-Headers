/*
* Generated on Thursday, January 14, 2021 at 2:28:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <RelevanceEngine/REFrequencyFeatureTransformer.h>

@class REFeatureValueCounter;

@interface _REFrequencyFeatureTransformer : REFrequencyFeatureTransformer {

	REFeatureValueCounter* _counter;
	long long _validCount;

}
+(BOOL)supportsInvalidation;
+(id)functionName;
+(BOOL)supportsPersistence;
-(BOOL)writeToURL:(id)arg1 error:(id*)arg2 ;
-(id)init;
-(unsigned long long)hash;
-(unsigned long long)_outputType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)readFromURL:(id)arg1 error:(id*)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)increaseCountForFeatureValue:(id)arg1 ;
-(void)_updateConfigurationForCount:(unsigned long long)arg1 ;
-(void)configureWithInvocation:(id)arg1 ;
-(long long)_bitCount;
-(unsigned long long)_featureCount;
-(unsigned long long)_createTransformFromValues:(unsigned long long*)arg1 count:(unsigned long long)arg2 ;
-(BOOL)_validateWithFeatures:(id)arg1 ;
@end

