/*
* Generated on Thursday, January 14, 2021 at 2:28:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <RelevanceEngine/REFeature.h>

@class NSString;

@interface _REConcreteFeature : REFeature {

	NSString* _name;
	unsigned long long _featureType;

}
-(unsigned long long)featureType;
-(id)name;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(long long)_bitCount;
-(id)initWithName:(id)arg1 featureType:(unsigned long long)arg2 ;
-(id)_rootFeatures;
@end

