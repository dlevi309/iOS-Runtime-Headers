/*
* Generated on Thursday, January 14, 2021 at 2:25:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PodcastsUI.framework/PodcastsUI
*/

#import <PodcastsUI/PodcastsUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface MTMPULayoutInterpolator : NSObject <NSCopying> {

	vector<MTMPU::LayoutInterpolator::EntriesContainer, std::__1::allocator<MTMPU::LayoutInterpolator::EntriesContainer> >* _entriesContainers;
	BOOL _hasEntryWithSpecificSecondaryReferenceMetric;

}
-(vector<MTMPU::Point3D, std::__1::allocator<MTMPU::Point3D> >*)_sortedPointsFor3DInterpolationFromEntriesContainer:(EntriesContainer*)arg1 usingQueriedPoint:(Point3D)arg2 fallbackSecondaryReferenceMetric:(double)arg3 ;
-(void)addValue:(double)arg1 forReferenceMetric:(double)arg2 secondaryReferenceMetric:(double)arg3 ;
-(double)valueForReferenceMetric:(double)arg1 secondaryReferenceMetric:(double)arg2 ;
-(void)addValue:(double)arg1 forReferenceMetric:(double)arg2 ;
-(id)description;
-(void)_sortPointsFor3DInterpolation:(vector<MTMPU::Point3D, std::__1::allocator<MTMPU::Point3D> >*)arg1 usingQueriedPoint:(Point3D)arg2 ;
-(double)valueForReferenceMetric:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)_interpolatedValueForPrimaryReferenceMetric:(double)arg1 secondaryReferenceMetric:(double)arg2 betweenFirstEntriesContainer:(EntriesContainer*)arg3 andSecondEntriesContainer:(EntriesContainer*)arg4 ;
-(Point3D)_pointForEntry:(Entry)arg1 andPrimaryReferenceMetric:(double)arg2 usingFallbackSecondaryReferenceMetric:(double)arg3 ;
@end

