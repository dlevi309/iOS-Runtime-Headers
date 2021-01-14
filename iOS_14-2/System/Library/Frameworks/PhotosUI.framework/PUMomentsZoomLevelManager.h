/*
* Generated on Thursday, January 14, 2021 at 2:22:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <libobjc.A.dylib/PXPhotosDataSourceChangeObserver.h>

@class NSMutableArray, PXPhotosDataSource, PUZoomableGridViewControllerSpec, PUSessionInfo, PUCollectionViewIntermediateDataSource, NSString;

@interface PUMomentsZoomLevelManager : NSObject <PXPhotosDataSourceChangeObserver> {

	NSMutableArray* _allLevelInfos;
	PXPhotosDataSource* _momentsDataSource;
	BOOL _isInvalidatingLayoutOfZoomLevels;
	PUZoomableGridViewControllerSpec* _zoomableGridSpec;
	PUSessionInfo* _sessionInfo;
	PUCollectionViewIntermediateDataSource* _sharedIntermediateDataSource;

}

@property (nonatomic,readonly) PUZoomableGridViewControllerSpec * zoomableGridSpec;                                //@synthesize zoomableGridSpec=_zoomableGridSpec - In the implementation block
@property (nonatomic,retain) PUSessionInfo * sessionInfo;                                                          //@synthesize sessionInfo=_sessionInfo - In the implementation block
@property (nonatomic,readonly) unsigned long long lowestZoomLevel; 
@property (nonatomic,readonly) unsigned long long highestZoomLevel; 
@property (nonatomic,readonly) unsigned long long preferredDefaultZoomLevel; 
@property (nonatomic,readonly) PUCollectionViewIntermediateDataSource * sharedIntermediateDataSource;              //@synthesize sharedIntermediateDataSource=_sharedIntermediateDataSource - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithSpec:(id)arg1 ;
-(unsigned long long)preferredDefaultZoomLevel;
-(void)updateZoomableGridSpecForTraitCollection:(id)arg1 referenceSize:(CGSize)arg2 ;
-(void)_defaultsDidChange:(id)arg1 ;
-(id)momentsDataSource;
-(PUZoomableGridViewControllerSpec *)zoomableGridSpec;
-(unsigned long long)lowestZoomLevel;
-(void)markZoomInfosInvalidWithWidth:(double)arg1 ;
-(BOOL)zoomLevel:(unsigned long long)arg1 isHigherThanZoomLevel:(unsigned long long)arg2 ;
-(id)newViewControllerForZoomLevel:(unsigned long long)arg1 ;
-(void)photosDataSource:(id)arg1 didReceivePhotoLibraryChange:(id)arg2 ;
-(void)zoomLevelInfo:(id)arg1 didInvalidateLayoutWithContext:(id)arg2 ;
-(unsigned long long)zoomLevelAboveZoomLevel:(unsigned long long)arg1 ;
-(id)zoomLevelInfoForZoomLevel:(unsigned long long)arg1 ;
-(PUCollectionViewIntermediateDataSource *)sharedIntermediateDataSource;
-(void)_updateSummarizeSectionsOnZoomLevelInfos;
-(PUSessionInfo *)sessionInfo;
-(unsigned long long)zoomLevelBelowZoomLevel:(unsigned long long)arg1 ;
-(void)setSessionInfo:(PUSessionInfo *)arg1 ;
-(unsigned long long)highestZoomLevel;
-(id)jumpToZoomLevel:(unsigned long long)arg1 inNavigationController:(id)arg2 usingTopControllerConfigurationBlock:(/*^block*/id)arg3 ;
-(void)dealloc;
-(id)existingViewControllerForZoomLevel:(unsigned long long)arg1 inNavigationController:(id)arg2 ;
@end

