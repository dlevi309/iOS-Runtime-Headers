/*
* Generated on Thursday, January 14, 2021 at 2:22:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <PhotosUI/PUGridZoomLevelInfo.h>
#import <libobjc.A.dylib/PUSectionedGridLayoutDelegate.h>

@class PHFetchResult, NSMutableDictionary, NSString;

@interface PUCollectionsZoomLevelInfo : PUGridZoomLevelInfo <PUSectionedGridLayoutDelegate> {

	PHFetchResult* _collectionsFetchResult;
	NSMutableDictionary* _resultsForCollectionList;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)numberOfVisualSectionsForSectionedGridLayout:(id)arg1 ;
-(id)sectionedGridLayout:(id)arg1 sectionsForVisualSection:(long long)arg2 ;
-(double)sectionedGridLayout:(id)arg1 sectionHeaderHeightForVisualSection:(long long)arg2 ;
-(double)sectionedGridLayout:(id)arg1 accessibilitySectionHeaderHeightForVisualSection:(long long)arg2 ;
-(id)_collectionsFetchResult;
-(id)initWithZoomLevel:(unsigned long long)arg1 zoomLevelManager:(id)arg2 baseZoomLevelInfo:(id)arg3 ;
-(id)momentsInCollectionList:(id)arg1 ;
-(CFStringRef)aggregateLevelKey;
-(id)newCollectionViewLayout;
-(long long)cellFillMode;
-(id)renderedStripsElementKind;
-(id)sectionHeaderElementKind;
-(long long)maxRowsPerSection;
-(CGSize)thumbnailImageSize;
-(void)updateLayoutMetricsForWidth:(double)arg1 safeAreaInsets:(UIEdgeInsets)arg2 ;
-(CGSize)imageRequestItemSize;
-(void)configureSectionHeaderView:(id)arg1 forVisualSection:(long long)arg2 ;
-(void)_getDataForVisualSection:(long long)arg1 title:(id*)arg2 locations:(id*)arg3 startDate:(id*)arg4 endDate:(id*)arg5 ;
-(void)getPhotosDataSource:(id*)arg1 displayTitleInfo:(id*)arg2 forDetailsForVisualSection:(long long)arg3 ;
-(id)assetsToDisplayInMapForVisualSection:(long long)arg1 ;
-(id)diagnosticsProviderForVisualSection:(long long)arg1 ;
-(long long)imageDeliveryMode;
-(double)cellAspectRatioHint;
-(BOOL)supportsIncrementalChangeNotifications;
-(void)modelDidChange:(id)arg1 ;
@end

