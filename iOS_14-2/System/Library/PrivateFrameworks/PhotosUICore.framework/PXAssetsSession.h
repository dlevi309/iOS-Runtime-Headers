/*
* Generated on Thursday, January 14, 2021 at 2:22:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXObservable.h>
#import <libobjc.A.dylib/PXSectionedDataSourceManagerObserver.h>

@class PXSectionedDataSource, PXSelectionSnapshot, PXSectionedDataSourceManager, PXUIMediaProvider, PXSectionedSelectionManager, NSString;

@interface PXAssetsSession : PXObservable <PXSectionedDataSourceManagerObserver> {

	PXSectionedDataSource* _dataSource;
	PXSelectionSnapshot* _selectionSnapshot;
	PXSectionedDataSourceManager* _dataSourceManager;
	PXUIMediaProvider* _mediaProvider;
	PXSectionedSelectionManager* _selectionManager;

}

@property (nonatomic,retain) PXSectionedDataSource * dataSource;                              //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,retain) PXSelectionSnapshot * selectionSnapshot;                         //@synthesize selectionSnapshot=_selectionSnapshot - In the implementation block
@property (nonatomic,readonly) PXSectionedDataSourceManager * dataSourceManager;              //@synthesize dataSourceManager=_dataSourceManager - In the implementation block
@property (nonatomic,readonly) PXUIMediaProvider * mediaProvider;                             //@synthesize mediaProvider=_mediaProvider - In the implementation block
@property (nonatomic,retain) PXSectionedSelectionManager * selectionManager;                  //@synthesize selectionManager=_selectionManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(PXSectionedSelectionManager *)selectionManager;
-(PXSelectionSnapshot *)selectionSnapshot;
-(PXUIMediaProvider *)mediaProvider;
-(id)init;
-(PXSectionedDataSource *)dataSource;
-(void)setDataSource:(PXSectionedDataSource *)arg1 ;
-(PXSectionedDataSourceManager *)dataSourceManager;
-(id)initWithDataSourceManager:(id)arg1 mediaProvider:(id)arg2 ;
-(id)initWithDataSourceManager:(id)arg1 mediaProvider:(id)arg2 selectionManager:(id)arg3 ;
-(void)_updateDataSourceDependentProperties;
-(void)setSelectionManager:(PXSectionedSelectionManager *)arg1 ;
-(id)mutableChangeObject;
-(void)setSelectionSnapshot:(PXSelectionSnapshot *)arg1 ;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
@end

