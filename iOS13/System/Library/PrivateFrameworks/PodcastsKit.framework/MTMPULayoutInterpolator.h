/*
* Generated on Monday, March 1, 2021 at 2:35:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PodcastsKit.framework/PodcastsKit
*/

#import <PodcastsKit/PodcastsKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface MTMPULayoutInterpolator : NSObject <NSCopying> {

	vector<MTMPU::LayoutInterpolator::EntriesContainer, std::__1::allocator<MTMPU::LayoutInterpolator::EntriesContainer> >* _entriesContainers;
	BOOL _hasEntryWithSpecificSecondaryReferenceMetric;

}
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)addValue:(double)arg1 forReferenceMetric:(double)arg2 secondaryReferenceMetric:(double)arg3 ;
-(double)valueForReferenceMetric:(double)arg1 secondaryReferenceMetric:(double)arg2 ;
-(void)addValue:(double)arg1 forReferenceMetric:(double)arg2 ;
-(double)_interpolatedValueForPrimaryReferenceMetric:(double)arg1 secondaryReferenceMetric:(double)arg2 betweenFirstEntriesContainer:(EntriesContainer*)arg3 andSecondEntriesContainer:(EntriesContainer*)arg4 ;
-(double)valueForReferenceMetric:(double)arg1 ;
-(vector<MTMPU::Point3D, std::__1::allocator<MTMPU::Point3D> >*)_sortedPointsFor3DInterpolationFromEntriesContainer:(EntriesContainer*)arg1 usingQueriedPoint:(Point3D)arg2 fallbackSecondaryReferenceMetric:(double)arg3 ;
-(void)_sortPointsFor3DInterpolation:(vector<MTMPU::Point3D, std::__1::allocator<MTMPU::Point3D> >*)arg1 usingQueriedPoint:(Point3D)arg2 ;
-(Point3D)_pointForEntry:(Entry)arg1 andPrimaryReferenceMetric:(double)arg2 usingFallbackSecondaryReferenceMetric:(double)arg3 ;
@end

