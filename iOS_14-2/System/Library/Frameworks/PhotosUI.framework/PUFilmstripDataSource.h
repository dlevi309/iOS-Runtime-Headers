/*
* Generated on Thursday, January 14, 2021 at 2:22:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PUTilingDataSource.h>

@class NSMutableDictionary, NSMapTable, AVAsset, NSArray;

@interface PUFilmstripDataSource : PUTilingDataSource {

	NSMutableDictionary* _assetByIndexPath;
	NSMapTable* _indexPathByAsset;
	AVAsset* _asset;
	long long _numberOfIndexes;
	NSArray* _indicatorInfos;

}

@property (nonatomic,readonly) AVAsset * asset;                        //@synthesize asset=_asset - In the implementation block
@property (nonatomic,readonly) long long numberOfIndexes;              //@synthesize numberOfIndexes=_numberOfIndexes - In the implementation block
@property (nonatomic,copy) NSArray * indicatorInfos;                   //@synthesize indicatorInfos=_indicatorInfos - In the implementation block
-(id)init;
-(long long)numberOfSubItemsAtIndexPath:(id)arg1 ;
-(AVAsset *)asset;
-(void)setIndicatorInfos:(NSArray *)arg1 ;
-(NSArray *)indicatorInfos;
-(long long)numberOfIndexes;
-(id)initWithAsset:(id)arg1 numberOfIndexes:(long long)arg2 indicatorInfos:(id)arg3 ;
-(double)_normalizedTimeForIndexPath:(id)arg1 ;
-(id)indexPathForAsset:(id)arg1 ;
-(id)assetAtIndexPath:(id)arg1 ;
@end

