/*
* Generated on Monday, March 1, 2021 at 2:35:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/


#import <PhotosGraph/PhotosGraph-Structs.h>
@interface PGCommonTitleUtility : NSObject
+(id)addressNodesFromMomentNodes:(id)arg1 ;
+(BOOL)isLargeCountryForAddressNode:(id)arg1 ;
+(BOOL)locationIsInSupersetCategoryForAddressNode:(id)arg1 dimension:(unsigned long long)arg2 ;
+(BOOL)locationIsInSupersetCategoryForLocationNode:(id)arg1 ;
+(id)closestLocationNodeFromNode:(id)arg1 withDimension:(unsigned long long)arg2 remapMatchingDimensionBlock:(/*^block*/id)arg3 ;
+(id)closestLocationNodeFromNode:(id)arg1 withDimension:(unsigned long long)arg2 reverse:(BOOL)arg3 ;
+(id)locationNodeWithDimension:(unsigned long long)arg1 rootNode:(id)arg2 ;
+(BOOL)containsCelebrationForDateNodes:(id)arg1 holidayName:(id*)arg2 ;
+(id)holidayNameForDateNodes:(id)arg1 ;
+(id)dateNodesFromMomentNodes:(id)arg1 ;
+(id)bestAddressNodeForMomentNodes:(id)arg1 ;
+(void)startAndEndDateNodeFromDateNodes:(id)arg1 startDateNode:(id*)arg2 endDateNode:(id*)arg3 ;
+(NSRange)_closestSpaceMatchFromMatches:(id)arg1 withUsedNameRange:(NSRange)arg2 searchForward:(BOOL)arg3 ;
+(id)titleWithNoLineBreakSpaceForTitle:(id)arg1 andUsedNames:(id)arg2 ;
+(id)titleWithLineBreakForTitle:(id)arg1 andUsedNames:(id)arg2 ;
+(id)titleWithLineBreakForTitle:(id)arg1 ;
+(id)_closestLocationNodeFromNode:(id)arg1 withDimension:(unsigned long long)arg2 remapMatchingDimensionBlock:(/*^block*/id)arg3 reverse:(BOOL)arg4 ;
+(id)_locationLabelForDimension:(unsigned long long)arg1 ;
+(unsigned long long)dimensionForLabel:(id)arg1 ;
@end

