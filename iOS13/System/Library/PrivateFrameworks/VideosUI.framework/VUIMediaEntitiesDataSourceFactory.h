/*
* Generated on Monday, March 1, 2021 at 2:35:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/


@interface VUIMediaEntitiesDataSourceFactory : NSObject
+(id)dataSourceForCategoryType:(long long)arg1 withLibrary:(id)arg2 withOwnerIdentifier:(id)arg3 ;
+(id)_fetchRequestForGenre:(id)arg1 ;
+(id)_dataSourceForShelfType:(long long)arg1 withLibrary:(id)arg2 withOwnerIdentifier:(id)arg3 ;
+(id)dataSourceForCategoryType:(long long)arg1 ;
+(id)dataSourceForFetchRequest:(id)arg1 withLibrary:(id)arg2 ;
+(id)seasonsDataSourceForShowIdentifier:(id)arg1 withFamilyMember:(id)arg2 ;
+(id)episodesDataSourceForShowIdentifier:(id)arg1 withFamilyMember:(id)arg2 ;
+(id)seasonsDataSourceForSeasonIdentifier:(id)arg1 showIdentifier:(id)arg2 withFamilyMember:(id)arg3 ;
+(id)episodesDataSourceForSeasonIdentifier:(id)arg1 showIdentifier:(id)arg2 withFamilyMember:(id)arg3 ;
+(id)dataSourceForCategoryType:(long long)arg1 withFamilyMember:(id)arg2 ;
+(id)dataSourceForCategoryType:(long long)arg1 withLibrary:(id)arg2 ;
+(id)dataSourceForGenre:(id)arg1 withFamilyMember:(id)arg2 ;
+(id)dataSourceForGenre:(id)arg1 withLibrary:(id)arg2 ;
+(id)dataSourceForShelf:(long long)arg1 withLibrary:(id)arg2 ;
+(id)dataSourceForShelf:(long long)arg1 withFamilyMember:(id)arg2 ;
@end

