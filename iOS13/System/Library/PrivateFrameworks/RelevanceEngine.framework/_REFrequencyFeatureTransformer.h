/*
* Generated on Monday, March 1, 2021 at 2:34:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <RelevanceEngine/REFrequencyFeatureTransformer.h>

@class REFeatureValueCounter;

@interface _REFrequencyFeatureTransformer : REFrequencyFeatureTransformer {

	REFeatureValueCounter* _counter;
	long long _validCount;

}
+(id)functionName;
+(BOOL)supportsPersistence;
+(BOOL)supportsInvalidation;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)writeToURL:(id)arg1 error:(id*)arg2 ;
-(unsigned long long)_outputType;
-(BOOL)readFromURL:(id)arg1 error:(id*)arg2 ;
-(void)_updateConfigurationForCount:(unsigned long long)arg1 ;
-(void)configureWithInvocation:(id)arg1 ;
-(long long)_bitCount;
-(unsigned long long)_featureCount;
-(unsigned long long)_createTransformFromValues:(unsigned long long*)arg1 count:(unsigned long long)arg2 ;
-(BOOL)_validateWithFeatures:(id)arg1 ;
-(void)increaseCountForFeatureValue:(id)arg1 ;
@end

