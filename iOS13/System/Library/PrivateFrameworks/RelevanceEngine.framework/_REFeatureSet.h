/*
* Generated on Monday, March 1, 2021 at 2:34:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <RelevanceEngine/REFeatureSet.h>

@class NSSet;

@interface _REFeatureSet : REFeatureSet {

	NSSet* _features;

}
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)count;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_RE24*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)initWithFeature:(id)arg1 ;
-(id)initWithFeatures:(id)arg1 ;
-(id)featureWithName:(id)arg1 ;
-(BOOL)containsFeature:(id)arg1 ;
@end

