/*
* Generated on Thursday, January 14, 2021 at 2:22:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXCuratedLibraryStatistics.h>

@interface PXMutableCuratedLibraryStatistics : PXCuratedLibraryStatistics {

	long long* _counts;

}
-(long long)numberOfAssetsWithPlaybackStyle:(long long)arg1 displayProminence:(long long)arg2 autoPlaybackEligibility:(long long)arg3 ;
-(void)_incrementCountForPlaybackStyle:(long long)arg1 displayProminence:(long long)arg2 autoPlaybackEligibility:(long long)arg3 ;
-(long long)_coutIndexForPlaybackStyle:(long long)arg1 displayProminence:(long long)arg2 autoPlaybackEligibility:(long long)arg3 ;
-(void)appendStatisticsForSection:(long long)arg1 assetsDataSource:(id)arg2 playbackController:(id)arg3 visibleItems:(id)arg4 heroItems:(id)arg5 keyItem:(long long)arg6 ;
-(id)init;
-(void)dealloc;
@end

