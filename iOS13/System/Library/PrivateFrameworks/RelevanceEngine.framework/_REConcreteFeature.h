/*
* Generated on Monday, March 1, 2021 at 2:34:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <RelevanceEngine/REFeature.h>

@class NSString;

@interface _REConcreteFeature : REFeature {

	NSString* _name;
	unsigned long long _featureType;

}
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)featureType;
-(long long)_bitCount;
-(id)initWithName:(id)arg1 featureType:(unsigned long long)arg2 ;
-(id)_rootFeatures;
@end

