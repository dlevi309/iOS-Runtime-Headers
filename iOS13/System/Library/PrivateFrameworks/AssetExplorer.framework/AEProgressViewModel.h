/*
* Generated on Monday, March 1, 2021 at 2:34:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AssetExplorer.framework/AssetExplorer
*/

#import <PhotosUICore/PXObservable.h>
#import <libobjc.A.dylib/PXAssetsDataSourceManagerObserver.h>

@class AEProgressViewModelSnapshot, PXAssetsDataSourceManager, NSDictionary, NSString;

@interface AEProgressViewModel : PXObservable <PXAssetsDataSourceManagerObserver> {

	AEProgressViewModelSnapshot* _currentSnapshot;
	PXAssetsDataSourceManager* __dataSourceManager;
	NSDictionary* __progressByAsset;

}

@property (nonatomic,readonly) PXAssetsDataSourceManager * _dataSourceManager;                         //@synthesize _dataSourceManager=__dataSourceManager - In the implementation block
@property (setter=_setProgressByAsset:,nonatomic,retain) NSDictionary * _progressByAsset;              //@synthesize _progressByAsset=__progressByAsset - In the implementation block
@property (nonatomic,readonly) AEProgressViewModelSnapshot * progressSnapshot; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
-(id)mutableChangeObject;
-(PXAssetsDataSourceManager *)_dataSourceManager;
-(id)initWithDataSourceManager:(id)arg1 ;
-(id)sectionedDataSourceManagerInterestingObjectReferences:(id)arg1 ;
-(AEProgressViewModelSnapshot *)progressSnapshot;
-(void)_setProgressByAsset:(id)arg1 ;
-(id)_createSnapshot;
-(void)setProgress:(id)arg1 forAssetReference:(id)arg2 ;
-(NSDictionary *)_progressByAsset;
@end

