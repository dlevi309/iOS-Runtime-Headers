/*
* Generated on Thursday, January 14, 2021 at 2:22:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXBrowserVisibleContentSnapshot.h>

@protocol PXDisplayAssetDataSource;
@class NSArray;

@interface _PXBrowserDataSourceVisibleContentSnapshot : PXBrowserVisibleContentSnapshot {

	NSArray* _indexPaths;
	id<PXDisplayAssetDataSource> _dataSource;
	unsigned long long _dateType;

}

@property (nonatomic,copy,readonly) NSArray * indexPaths;                            //@synthesize indexPaths=_indexPaths - In the implementation block
@property (nonatomic,readonly) id<PXDisplayAssetDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,readonly) unsigned long long dateType;                          //@synthesize dateType=_dateType - In the implementation block
-(id)dateInterval;
-(id<PXDisplayAssetDataSource>)dataSource;
-(unsigned long long)dateType;
-(id)initWithIndexPaths:(id)arg1 dataSource:(id)arg2 dateIntervalGranularity:(unsigned long long)arg3 dateType:(unsigned long long)arg4 ;
-(id)initWithDateIntervalGranularity:(unsigned long long)arg1 ;
-(NSArray *)indexPaths;
@end

