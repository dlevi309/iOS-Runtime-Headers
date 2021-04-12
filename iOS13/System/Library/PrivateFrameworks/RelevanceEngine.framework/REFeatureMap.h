/*
* Generated on Monday, March 1, 2021 at 2:34:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <libobjc.A.dylib/MLFeatureProvider.h>
#import <libobjc.A.dylib/_REFeatureMapLoggingProperties.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSSet, NSArray, NSDictionary;

@interface REFeatureMap : NSObject <MLFeatureProvider, _REFeatureMapLoggingProperties, NSCopying> {

	unsigned long long _hash;
	unsigned long long* _values;
	NSDictionary* _indices;

}

@property (nonatomic,readonly) unsigned long long featureCount; 
@property (nonatomic,readonly) NSSet * featureNames; 
@property (nonatomic,readonly) NSSet * allFeatures; 
@property (nonatomic,readonly) NSArray * loggingValues; 
+(id)defaultFeatureName;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)_count;
-(id)featureValueForName:(id)arg1 ;
-(NSSet *)featureNames;
-(unsigned long long)valueForFeature:(id)arg1 ;
-(void)removeAllValues;
-(id)initWithFeatureMap:(id)arg1 ;
-(void)setValue:(unsigned long long)arg1 forFeature:(id)arg2 ;
-(void)enumerateFeaturesUsingBlock:(/*^block*/id)arg1 ;
-(unsigned long long)featureCount;
-(void)enumerateFeatureValuesUsingBlock:(/*^block*/id)arg1 ;
-(NSArray *)loggingValues;
-(void)setFeatureValue:(id)arg1 forFeature:(id)arg2 ;
-(void)removeValueForFeature:(id)arg1 ;
-(id)featureValueForFeature:(id)arg1 ;
-(BOOL)hasValueForFeature:(id)arg1 ;
-(void)enumerateBoolFeaturesUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateInt64FeaturesUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateDoubleFeaturesUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateStringFeaturesUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateEmptyFeaturesUsingBlock:(/*^block*/id)arg1 ;
-(NSSet *)allFeatures;
-(void)enumerateInt64FeaturesUsingIndexedBlock:(/*^block*/id)arg1 emptyFeatureBlock:(/*^block*/id)arg2 ;
@end

