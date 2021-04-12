/*
* Generated on Thursday, January 14, 2021 at 2:22:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXMemoriesFeedDataSourceManagerBase.h>

@interface PXMemoriesFeedWidgetDataSourceManager : PXMemoriesFeedDataSourceManagerBase {

	BOOL _onlyFavorites;
	unsigned long long _maxCount;

}

@property (assign,nonatomic) unsigned long long maxCount;              //@synthesize maxCount=_maxCount - In the implementation block
@property (assign,nonatomic) BOOL onlyFavorites;                       //@synthesize onlyFavorites=_onlyFavorites - In the implementation block
-(void)setMaxCount:(unsigned long long)arg1 ;
-(unsigned long long)maxCount;
-(id)fetchOptions;
-(unsigned long long)_extendedMaxCount;
-(id)_generateEntryFromMemories:(id)arg1 ;
-(void)_regenerateMemoriesWithChange:(id)arg1 ;
-(BOOL)onlyFavorites;
-(void)setOnlyFavorites:(BOOL)arg1 ;
-(void)startGeneratingMemories;
-(void)generateAdditionalEntriesIfPossible;
-(void)handleNonIncrementalFetchResultChange:(id)arg1 ;
-(void)handleIncrementalFetchResultChange:(id)arg1 updatedFetchResultsForMemoriesWithChangedKeyAssets:(id)arg2 ;
-(void)handleChangedKeyAssetsForMemories:(id)arg1 ;
@end

