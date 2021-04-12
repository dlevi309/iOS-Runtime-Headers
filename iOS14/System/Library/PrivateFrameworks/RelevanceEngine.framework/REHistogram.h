/*
* Generated on Thursday, January 14, 2021 at 2:28:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class REFeature;

@interface REHistogram : NSObject <NSCopying> {

	REFeature* _feature;

}

@property (nonatomic,readonly) REFeature * feature;                               //@synthesize feature=_feature - In the implementation block
@property (nonatomic,readonly) unsigned long long count; 
@property (nonatomic,readonly) unsigned long long mean; 
@property (nonatomic,readonly) unsigned long long standardDeviation; 
-(void)addValue:(unsigned long long)arg1 ;
-(REFeature *)feature;
-(unsigned long long)mean;
-(unsigned long long)count;
-(unsigned long long)countForValue:(unsigned long long)arg1 ;
-(id)initWithFeature:(id)arg1 ;
-(unsigned long long)hash;
-(void)enumerateValuesUsingBlock:(/*^block*/id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)removeValue:(unsigned long long)arg1 ;
-(unsigned long long)standardDeviation;
-(id)initWithFeature:(id)arg1 binningSize:(unsigned long long)arg2 ;
-(unsigned long long)countOfValuesBetweenMinValue:(unsigned long long)arg1 maxValue:(unsigned long long)arg2 ;
@end

