/*
* Generated on Thursday, January 14, 2021 at 2:25:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <PhotosGraph/PGFeatureVectorGenerator.h>
#import <libobjc.A.dylib/CLLocationManagerDelegate.h>

@class NSString;

@interface PGFeatureVectorLiveGenerator : PGFeatureVectorGenerator <CLLocationManagerDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)enumerateFeatureVectorsByTypeUsingBlock:(/*^block*/id)arg1 ;
-(id)_nearestAssetsForCurrentDate:(id)arg1 atLocation:(id)arg2 ;
@end

