/*
* Generated on Thursday, January 14, 2021 at 2:22:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/PXBrowserSummaryControllerDataSource.h>
#import <libobjc.A.dylib/PXChangeObserver.h>

@protocol PXLibrarySummaryDataSource, PXLibrarySummaryOutputPresenter, PXDisplayAssetCollection;
@class PXBrowserSummaryController, NSString;

@interface PXCuratedLibrarySummaryHelper : NSObject <PXBrowserSummaryControllerDataSource, PXChangeObserver> {

	BOOL _isPerformingUpdates;
	BOOL _isPerformingChanges;
	SCD_Struct_PX24 _needsUpdateFlags;
	SCD_Struct_PX24 _dataSourceRespondsTo;
	SCD_Struct_PX94 _outputPresenterRespondsTo;
	BOOL _shouldUseAbbreviatedDates;
	id<PXLibrarySummaryDataSource> _dataSource;
	id<PXLibrarySummaryOutputPresenter> _outputPresenter;
	PXBrowserSummaryController* _summaryController;
	id<PXDisplayAssetCollection> _topmostAssetCollection;

}

@property (nonatomic,readonly) PXBrowserSummaryController * summaryController;                                                    //@synthesize summaryController=_summaryController - In the implementation block
@property (setter=_setTopmostAssetCollection:,nonatomic,retain) id<PXDisplayAssetCollection> topmostAssetCollection;              //@synthesize topmostAssetCollection=_topmostAssetCollection - In the implementation block
@property (assign,nonatomic,__weak) id<PXLibrarySummaryDataSource> dataSource;                                                    //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic,__weak) id<PXLibrarySummaryOutputPresenter> outputPresenter;                                          //@synthesize outputPresenter=_outputPresenter - In the implementation block
@property (assign,nonatomic) BOOL shouldUseAbbreviatedDates;                                                                      //@synthesize shouldUseAbbreviatedDates=_shouldUseAbbreviatedDates - In the implementation block
@property (nonatomic,readonly) BOOL shouldShowImportDates; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_updateTitle;
-(id)init;
-(void)_invalidateTitle;
-(void)setOutputPresenter:(id<PXLibrarySummaryOutputPresenter>)arg1 ;
-(id<PXLibrarySummaryDataSource>)dataSource;
-(void)_updateIfNeeded;
-(PXBrowserSummaryController *)summaryController;
-(void)visibleContentDidChange;
-(void)_performChanges:(/*^block*/id)arg1 ;
-(void)_updateTitleFromSummaryController;
-(void)_invalidateSubtitle;
-(void)setDataSource:(id<PXLibrarySummaryDataSource>)arg1 ;
-(id<PXDisplayAssetCollection>)topmostAssetCollection;
-(BOOL)_needsUpdate;
-(id)visibleContentSnapshotForBrowserSummaryController:(id)arg1 ;
-(void)setShouldUseAbbreviatedDates:(BOOL)arg1 ;
-(BOOL)browserSummaryControllerShouldUpdateImmediately:(id)arg1 ;
-(id<PXLibrarySummaryOutputPresenter>)outputPresenter;
-(void)_updateSubtitleFromSummaryController;
-(BOOL)shouldUseAbbreviatedDates;
-(void)_setNeedsUpdate;
-(void)_updateTopmostAssetCollection;
-(void)_updateSubtitle;
-(void)_setTopmostAssetCollection:(id)arg1 ;
-(void)_invalidateTopmostAssetCollection;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
@end

