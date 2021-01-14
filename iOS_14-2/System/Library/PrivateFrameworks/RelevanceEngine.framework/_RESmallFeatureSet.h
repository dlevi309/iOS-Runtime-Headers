/*
* Generated on Thursday, January 14, 2021 at 2:28:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <RelevanceEngine/REFeatureSet.h>

@class REFeature;

@interface _RESmallFeatureSet : REFeatureSet {

	REFeature* _features[3];

}
-(id)initWithFeatures:(id)arg1 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_RE24*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)init;
-(unsigned long long)count;
-(id)initWithFeature:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)featureWithName:(id)arg1 ;
-(id)allFeatures;
-(BOOL)containsFeature:(id)arg1 ;
@end

