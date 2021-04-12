/*
* Generated on Monday, March 1, 2021 at 2:34:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)count;
-(REFeature *)feature;
-(unsigned long long)countForValue:(unsigned long long)arg1 ;
-(void)addValue:(unsigned long long)arg1 ;
-(void)removeValue:(unsigned long long)arg1 ;
-(id)initWithFeature:(id)arg1 ;
-(unsigned long long)standardDeviation;
-(unsigned long long)mean;
-(void)enumerateValuesUsingBlock:(/*^block*/id)arg1 ;
-(id)initWithFeature:(id)arg1 binningSize:(unsigned long long)arg2 ;
-(unsigned long long)countOfValuesBetweenMinValue:(unsigned long long)arg1 maxValue:(unsigned long long)arg2 ;
@end

