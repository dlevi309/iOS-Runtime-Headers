/*
* Generated on Thursday, January 14, 2021 at 2:28:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <libobjc.A.dylib/REFeatureSetProperties.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@class NSArray;

@interface REFeatureSet : NSObject <REFeatureSetProperties, NSCopying, NSMutableCopying, NSFastEnumeration>

@property (nonatomic,readonly) NSArray * allFeatures; 
@property (nonatomic,readonly) unsigned long long count; 
+(id)featureSet;
+(id)featureSetWithFeatures:(id)arg1 ;
+(id)featureSetWithFeature:(id)arg1 ;
-(id)initWithFeatures:(id)arg1 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_RE24*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)init;
-(unsigned long long)count;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)initWithFeature:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)featureWithName:(id)arg1 ;
-(NSArray *)allFeatures;
-(void)enumerateFeaturesUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)containsFeature:(id)arg1 ;
-(BOOL)intersectsFeatureSet:(id)arg1 ;
-(BOOL)isEqualToFeatureSet:(id)arg1 ;
-(id)initWithFeatureSet:(id)arg1 ;
-(BOOL)isSubsetOfFeatureSet:(id)arg1 ;
@end

