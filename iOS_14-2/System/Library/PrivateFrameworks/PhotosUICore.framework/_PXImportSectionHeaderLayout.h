/*
* Generated on Thursday, January 14, 2021 at 2:22:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXGSingleViewLayout.h>
#import <libobjc.A.dylib/PXPhotosSectionedLayoutHeader.h>
#import <libobjc.A.dylib/PXImportHistorySectionHeaderViewDelegate.h>

@protocol _PXImportSectionHeaderLayoutInteractionDelegate, PXPhotosSectionHeaderLayoutViewProvider;
@class PXPhotosLayoutSpec, PXSelectionSnapshot, PXAssetsDataSource, NSString;

@interface _PXImportSectionHeaderLayout : PXGSingleViewLayout <PXPhotosSectionedLayoutHeader, PXImportHistorySectionHeaderViewDelegate> {

	BOOL _isInSelectMode;
	BOOL _areAllItemsSelected;
	BOOL _wantsBackground;
	PXPhotosLayoutSpec* _spec;
	PXSelectionSnapshot* _selectionSnapshot;
	id<_PXImportSectionHeaderLayoutInteractionDelegate> _interactionDelegate;
	id<PXPhotosSectionHeaderLayoutViewProvider> _viewProvider;
	PXAssetsDataSource* _dataSource;
	PXSimpleIndexPath _sectionIndexPath;

}

@property (assign,nonatomic,__weak) id<_PXImportSectionHeaderLayoutInteractionDelegate> interactionDelegate;              //@synthesize interactionDelegate=_interactionDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<PXPhotosSectionHeaderLayoutViewProvider> viewProvider;                             //@synthesize viewProvider=_viewProvider - In the implementation block
@property (nonatomic,retain) PXAssetsDataSource * dataSource;                                                             //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic) PXSimpleIndexPath sectionIndexPath;                                                          //@synthesize sectionIndexPath=_sectionIndexPath - In the implementation block
@property (nonatomic,readonly) BOOL areAllItemsSelected;                                                                  //@synthesize areAllItemsSelected=_areAllItemsSelected - In the implementation block
@property (nonatomic,readonly) BOOL wantsBackground;                                                                      //@synthesize wantsBackground=_wantsBackground - In the implementation block
@property (nonatomic,retain) PXPhotosLayoutSpec * spec;                                                                   //@synthesize spec=_spec - In the implementation block
@property (assign,nonatomic) BOOL isInSelectMode;                                                                         //@synthesize isInSelectMode=_isInSelectMode - In the implementation block
@property (nonatomic,retain) PXSelectionSnapshot * selectionSnapshot;                                                     //@synthesize selectionSnapshot=_selectionSnapshot - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(PXSelectionSnapshot *)selectionSnapshot;
-(id)initWithSpec:(id)arg1 ;
-(void)setSpec:(PXPhotosLayoutSpec *)arg1 ;
-(void)setInteractionDelegate:(id<_PXImportSectionHeaderLayoutInteractionDelegate>)arg1 ;
-(void)_setWantsBackground:(BOOL)arg1 ;
-(id)init;
-(id<_PXImportSectionHeaderLayoutInteractionDelegate>)interactionDelegate;
-(PXSimpleIndexPath)sectionIndexPath;
-(BOOL)wantsBackground;
-(PXAssetsDataSource *)dataSource;
-(BOOL)isInSelectMode;
-(BOOL)areAllItemsSelected;
-(PXPhotosLayoutSpec *)spec;
-(void)_setAreAllItemsSelected:(BOOL)arg1 ;
-(void)setDataSource:(PXAssetsDataSource *)arg1 ;
-(void)headerViewDidPressActionButton:(id)arg1 ;
-(void)setIsInSelectMode:(BOOL)arg1 ;
-(void)setViewProvider:(id<PXPhotosSectionHeaderLayoutViewProvider>)arg1 ;
-(void)floatingOffsetDidChange;
-(void)setSectionIndexPath:(PXSimpleIndexPath)arg1 ;
-(id<PXPhotosSectionHeaderLayoutViewProvider>)viewProvider;
-(void)setSelectionSnapshot:(PXSelectionSnapshot *)arg1 ;
@end

