/*
* Generated on Thursday, January 14, 2021 at 2:22:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <PhotosUI/PUGridZoomLevelInfo.h>
#import <libobjc.A.dylib/PUSectionedGridLayoutDelegate.h>
#import <libobjc.A.dylib/PUPhotosSectionHeaderViewDelegate.h>

@class PUGridZoomLevelInfo, NSString;

@interface PUFullMomentsZoomLevelInfo : PUGridZoomLevelInfo <PUSectionedGridLayoutDelegate, PUPhotosSectionHeaderViewDelegate> {

	PUGridZoomLevelInfo* _transitionOtherLevelInfo;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)headerView:(id)arg1 actionButtonPressed:(id)arg2 ;
-(BOOL)supportsEditMode;
-(BOOL)configureGridCell:(id)arg1 forIndexPath:(id)arg2 ;
-(BOOL)wantsMagnifierNavigation;
-(BOOL)wantsAssetCountsVisible;
-(BOOL)wantsCloudStatusVisible;
-(BOOL)wantsAutomaticContentOffsetAdjustment;
-(void)prepareForTransitionToZoomLevelInfo:(id)arg1 animated:(BOOL)arg2 interactive:(BOOL)arg3 ;
-(void)prepareForTransitionFromZoomLevelInfo:(id)arg1 animated:(BOOL)arg2 interactive:(BOOL)arg3 ;
-(void)didFinishZoomLevelTransition;
-(void)_prepareTransitionSubviewsForCell:(id)arg1 atIndexPath:(id)arg2 isAppearing:(BOOL)arg3 ;
-(UIEdgeInsets)_fillerViewInsetsForItemAtIndexPath:(id)arg1 ;
-(void)_prepareTransitionImageContentForCell:(id)arg1 atIndexPath:(id)arg2 appearingZoomLevelInfo:(id)arg3 ;
-(void)_getDataForVisualSection:(long long)arg1 hasActionButton:(BOOL*)arg2 locations:(id*)arg3 title:(id*)arg4 startDate:(id*)arg5 endDate:(id*)arg6 ;
-(void)sectionedGridLayout:(id)arg1 didFinalizePrepareTransitionIsAppearing:(BOOL)arg2 ;
-(double)sectionedGridLayout:(id)arg1 sectionHeaderHeightForVisualSection:(long long)arg2 ;
-(double)sectionedGridLayout:(id)arg1 accessibilitySectionHeaderHeightForVisualSection:(long long)arg2 ;
-(CFStringRef)aggregateLevelKey;
-(id)newCollectionViewLayout;
-(long long)cellFillMode;
-(id)sectionHeaderElementKind;
-(CGSize)thumbnailImageSize;
-(void)updateLayoutMetricsForWidth:(double)arg1 safeAreaInsets:(UIEdgeInsets)arg2 ;
-(CGSize)imageRequestItemSize;
-(void)configureSectionHeaderView:(id)arg1 forVisualSection:(long long)arg2 ;
-(void)getPhotosDataSource:(id*)arg1 displayTitleInfo:(id*)arg2 forDetailsForVisualSection:(long long)arg3 ;
-(id)assetsToDisplayInMapForVisualSection:(long long)arg1 ;
-(id)diagnosticsProviderForVisualSection:(long long)arg1 ;
-(BOOL)supportsIncrementalChangeNotifications;
@end

