/*
* Generated on Thursday, January 14, 2021 at 2:25:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithDataSourceManager:(id)arg1 ;
-(PXAssetsDataSourceManager *)_dataSourceManager;
-(id)sectionedDataSourceManagerInterestingObjectReferences:(id)arg1 ;
-(id)mutableChangeObject;
-(void)dealloc;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
-(AEProgressViewModelSnapshot *)progressSnapshot;
-(void)_setProgressByAsset:(id)arg1 ;
-(id)_createSnapshot;
-(void)setProgress:(id)arg1 forAssetReference:(id)arg2 ;
-(void)cancelProgressForAssetUUIDs:(id)arg1 ;
-(NSDictionary *)_progressByAsset;
@end

