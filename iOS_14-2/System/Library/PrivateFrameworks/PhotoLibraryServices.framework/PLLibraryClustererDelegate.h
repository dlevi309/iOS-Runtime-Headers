/*
* Generated on Thursday, January 14, 2021 at 2:22:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@protocol PLLibraryClustererDelegate <NSObject>
@required
-(id)dataManager;
-(id)libraryClusterer:(id)arg1 createMonthListForMoments:(id)arg2 month:(long long)arg3 year:(long long)arg4;
-(id)libraryClusterer:(id)arg1 createYearListForMoments:(id)arg2 year:(long long)arg3;
-(id)libraryClusterer:(id)arg1 createMomentClustersForAssetClusters:(id)arg2 existingMomentDataForAssets:(id)arg3;
-(void)logRoutineInformation;

@end

