/*
* Generated on Thursday, January 14, 2021 at 2:22:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <UIKitCore/UICollectionViewController.h>
#import <UIKit/UICollectionViewDataSourcePrefetching.h>
#import <libobjc.A.dylib/PXDiagnosticsEnvironment.h>
#import <libobjc.A.dylib/PXGadget.h>

@protocol PXGadgetDelegate, OS_dispatch_queue;
@class PXGadgetSpec, PUSearchZeroKeywordDataSource, PUSearchHomeThumbnailManager, NSObject, PHCachingImageManager, PUSearchZeroKeywordGadgetLayout, NSString;

@interface PUSearchZeroKeywordGadget : UICollectionViewController <UICollectionViewDataSourcePrefetching, PXDiagnosticsEnvironment, PXGadget> {

	long long _priority;
	id<PXGadgetDelegate> _delegate;
	PXGadgetSpec* _gadgetSpec;
	unsigned long long _placeTileFetchCounter;
	PUSearchZeroKeywordDataSource* _zeroKeywordDataSource;
	unsigned long long _dataSourceSection;
	long long _sectionType;
	PUSearchHomeThumbnailManager* _thumbnailManager;
	unsigned long long _cellLabelNumberOfLinesPermitted;
	NSObject*<OS_dispatch_queue> _placeTileFetchCounterQueue;
	PHCachingImageManager* _imageManager;

}

@property (nonatomic,retain) PUSearchHomeThumbnailManager * thumbnailManager;                          //@synthesize thumbnailManager=_thumbnailManager - In the implementation block
@property (nonatomic,readonly) PUSearchZeroKeywordGadgetLayout * zeroKeywordGadgetLayout; 
@property (assign,nonatomic) unsigned long long cellLabelNumberOfLinesPermitted;                       //@synthesize cellLabelNumberOfLinesPermitted=_cellLabelNumberOfLinesPermitted - In the implementation block
@property (assign,nonatomic) unsigned long long placeTileFetchCounter;                                 //@synthesize placeTileFetchCounter=_placeTileFetchCounter - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> placeTileFetchCounterQueue;                  //@synthesize placeTileFetchCounterQueue=_placeTileFetchCounterQueue - In the implementation block
@property (nonatomic,retain) PHCachingImageManager * imageManager;                                     //@synthesize imageManager=_imageManager - In the implementation block
@property (nonatomic,readonly) PUSearchZeroKeywordDataSource * zeroKeywordDataSource;                  //@synthesize zeroKeywordDataSource=_zeroKeywordDataSource - In the implementation block
@property (nonatomic,readonly) unsigned long long dataSourceSection;                                   //@synthesize dataSourceSection=_dataSourceSection - In the implementation block
@property (nonatomic,readonly) long long sectionType;                                                  //@synthesize sectionType=_sectionType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long gadgetType; 
@property (nonatomic,readonly) unsigned long long gadgetCapabilities; 
@property (nonatomic,retain) PXGadgetSpec * gadgetSpec;                                                //@synthesize gadgetSpec=_gadgetSpec - In the implementation block
@property (assign,nonatomic,__weak) id<PXGadgetDelegate> delegate;                                     //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSString * localizedTitle; 
@property (nonatomic,readonly) unsigned long long accessoryButtonType; 
@property (nonatomic,readonly) NSString * accessoryButtonTitle; 
@property (nonatomic,readonly) unsigned long long headerStyle; 
@property (assign,nonatomic) long long priority;                                                       //@synthesize priority=_priority - In the implementation block
@property (nonatomic,readonly) Class collectionViewItemClass; 
@property (assign,nonatomic) CGRect visibleContentRect; 
-(PXGadgetSpec *)gadgetSpec;
-(void)collectionView:(id)arg1 prefetchItemsAtIndexPaths:(id)arg2 ;
-(NSString *)localizedTitle;
-(unsigned long long)gadgetCapabilities;
-(unsigned long long)gadgetType;
-(id)px_diagnosticsItemProvidersForPoint:(CGPoint)arg1 inCoordinateSpace:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)contentSizeCategoryDidChangeNotification:(id)arg1 ;
-(void)setGadgetSpec:(PXGadgetSpec *)arg1 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(void)setThumbnailManager:(PUSearchHomeThumbnailManager *)arg1 ;
-(PUSearchZeroKeywordDataSource *)zeroKeywordDataSource;
-(id<PXGadgetDelegate>)delegate;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(PHCachingImageManager *)imageManager;
-(id)debugURLsForDiagnostics;
-(id)contentViewController;
-(void)setDelegate:(id<PXGadgetDelegate>)arg1 ;
-(long long)sectionType;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(void)reloadData;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)viewDidLoad;
-(void)scrollViewDidScroll:(id)arg1 ;
-(PUSearchHomeThumbnailManager *)thumbnailManager;
-(CGSize)getCellSize;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(id)initWithDataSource:(id)arg1 dataSourceSection:(unsigned long long)arg2 sectionType:(long long)arg3 ;
-(BOOL)hasLoadedContentData;
-(void)_configureCollectionView;
-(PUSearchZeroKeywordGadgetLayout *)zeroKeywordGadgetLayout;
-(void)_configureCellLabelNumberOfLinesWithScreenSize:(CGSize)arg1 ;
-(void)_fetchPlaceThumbnailForCell:(id)arg1 itemType:(long long)arg2 key:(id)arg3 currentTag:(unsigned long long)arg4 ;
-(unsigned long long)placeTileFetchCounter;
-(void)setPlaceTileFetchCounter:(unsigned long long)arg1 ;
-(void)_updateCurrentContentOffsetWithProposedOffset:(CGPoint)arg1 ;
-(CGSize)getCellSizeWithScreenWidth:(double)arg1 ;
-(CGSize)getCellThumbnailSize;
-(void)layoutPeopleViews;
-(void)updateCellLabelNumberOfLinesWithScreenSize:(CGSize)arg1 ;
-(unsigned long long)dataSourceSection;
-(unsigned long long)cellLabelNumberOfLinesPermitted;
-(void)setCellLabelNumberOfLinesPermitted:(unsigned long long)arg1 ;
-(NSObject*<OS_dispatch_queue>)placeTileFetchCounterQueue;
-(void)setPlaceTileFetchCounterQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(long long)priority;
-(void)setImageManager:(PHCachingImageManager *)arg1 ;
-(void)setPriority:(long long)arg1 ;
@end
