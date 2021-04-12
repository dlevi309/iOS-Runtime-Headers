/*
* Generated on Thursday, January 14, 2021 at 2:22:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXObservable.h>

@class NSArray, NSDictionary, PXPhotosDataSource;

@interface PXPhotosDataSourceStressTest : PXObservable {

	BOOL _isPrepared;
	NSArray* _categories;
	NSDictionary* _assetsByCategory;
	unsigned long long _sampleLength;
	unsigned long long _sampleIndex;
	BOOL _running;
	unsigned long long _maximumAssetCount;
	double _updateInterval;
	PXPhotosDataSource* _dataSource;
	unsigned long long _dataSourceIndex;

}

@property (setter=_setDataSource:,nonatomic,retain) PXPhotosDataSource * dataSource;                      //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,setter=_setDataSourceIndex:,nonatomic) unsigned long long dataSourceIndex;              //@synthesize dataSourceIndex=_dataSourceIndex - In the implementation block
@property (assign,nonatomic) unsigned long long maximumAssetCount;                                        //@synthesize maximumAssetCount=_maximumAssetCount - In the implementation block
@property (assign,nonatomic) double updateInterval;                                                       //@synthesize updateInterval=_updateInterval - In the implementation block
@property (assign,getter=isRunning,nonatomic) BOOL running;                                               //@synthesize running=_running - In the implementation block
-(void)setRunning:(BOOL)arg1 ;
-(double)updateInterval;
-(void)setUpdateInterval:(double)arg1 ;
-(void)_updateDataSource;
-(id)init;
-(PXPhotosDataSource *)dataSource;
-(void)_setDataSource:(id)arg1 ;
-(void)_prepare;
-(id)_categoryForAsset:(id)arg1 ;
-(void)_setDataSourceIndex:(unsigned long long)arg1 ;
-(unsigned long long)maximumAssetCount;
-(void)setMaximumAssetCount:(unsigned long long)arg1 ;
-(unsigned long long)dataSourceIndex;
-(BOOL)isRunning;
-(id)mutableChangeObject;
@end

