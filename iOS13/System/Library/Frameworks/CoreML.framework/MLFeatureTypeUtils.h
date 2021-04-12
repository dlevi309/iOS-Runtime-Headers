/*
* Generated on Monday, March 1, 2021 at 2:30:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
*/


@interface MLFeatureTypeUtils : NSObject
+(long long)featureTypeForObject:(id)arg1 ;
+(long long)featureTypeForValuesInArray:(id)arg1 error:(id*)arg2 ;
+(id)featureDescriptionWithName:(id)arg1 consistentWithFeatureValues:(id)arg2 error:(id*)arg3 ;
+(id)featureValuesWithConsistentTypeFromArray:(id)arg1 error:(id*)arg2 ;
+(id)descriptionForType:(long long)arg1 ;
+(BOOL)canShapeArrayBePromotedFrom:(id)arg1 to:(id)arg2 ;
@end

