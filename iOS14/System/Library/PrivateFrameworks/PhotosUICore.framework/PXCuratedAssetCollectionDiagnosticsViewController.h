/*
* Generated on Thursday, January 14, 2021 at 2:22:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <libobjc.A.dylib/PXDiagnosticsHighlightCurationSettingsViewControllerDelegate.h>

@protocol OS_dispatch_queue;
@class UIView, UISegmentedControl, UICollectionView, UITableView, NSArray, NSDictionary, PHCachingImageManager, PHImageRequestOptions, NSMutableArray, PHFetchResult, NSString, NSObject, NSURL, PXDiagnosticsHighlightCurationSettingsViewController, UIActivityIndicatorView;

@interface PXCuratedAssetCollectionDiagnosticsViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, UICollectionViewDataSource, UICollectionViewDelegate, PXDiagnosticsHighlightCurationSettingsViewControllerDelegate> {

	UIView* _contentView;
	UISegmentedControl* _segmentedControl;
	UICollectionView* _collectionView;
	UITableView* _tableView;
	NSArray* _sectionTitles;
	NSDictionary* _tableContent;
	PHCachingImageManager* _imageManager;
	CGSize _thumbnailSize;
	long long _thumbnailContentMode;
	PHImageRequestOptions* _thumbnailOptions;
	CGRect _previousPreheatRect;
	NSMutableArray* _addedAssets;
	NSMutableArray* _removedAssets;
	NSArray* _visibleAssets;
	PHFetchResult* _allAssets;
	NSString* _keyAssetUUID;
	NSDictionary* _assetByUUID;
	NSArray* _sortedVisibleAssetUUIDs;
	NSDictionary* _curationDebugInformation;
	BOOL _curationComparisonEnabled;
	NSObject*<OS_dispatch_queue> _curationDebugFetchQueue;
	BOOL _isReady;
	UIView* _curationSettingsView;
	UIView* _curationTypeView;
	UIView* _itemDetailsView;
	NSDictionary* _dedupedSymbolIndexByItemIdentifier;
	NSURL* _screenshotURL;
	PXDiagnosticsHighlightCurationSettingsViewController* _editSettingsViewController;
	UIActivityIndicatorView* _progressView;
	BOOL _initiallyShowCuration;
	BOOL _shouldPresentTapToRadar;
	long long _currentCurationType;
	NSString* _hostLayoutDiagnosticDescription;
	NSString* _hostViewDiagnosticDescription;

}

@property (assign,nonatomic) BOOL initiallyShowCuration;                            //@synthesize initiallyShowCuration=_initiallyShowCuration - In the implementation block
@property (assign,nonatomic) long long currentCurationType;                         //@synthesize currentCurationType=_currentCurationType - In the implementation block
@property (assign,nonatomic) BOOL shouldPresentTapToRadar;                          //@synthesize shouldPresentTapToRadar=_shouldPresentTapToRadar - In the implementation block
@property (nonatomic,copy) NSString * hostLayoutDiagnosticDescription;              //@synthesize hostLayoutDiagnosticDescription=_hostLayoutDiagnosticDescription - In the implementation block
@property (nonatomic,copy) NSString * hostViewDiagnosticDescription;                //@synthesize hostViewDiagnosticDescription=_hostViewDiagnosticDescription - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidAppear:(BOOL)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(void)_editSettings:(id)arg1 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(id)init;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3 ;
-(void)showInfo:(id)arg1 ;
-(void)viewDidLoad;
-(id)radarRoutes;
-(void)applySettings:(id)arg1 globally:(BOOL)arg2 ;
-(void)showToolbarItems;
-(void)_tapToRadar:(id)arg1 ;
-(void)hideToolbarItems;
-(void)toggleCurationComparison:(id)arg1 ;
-(void)presentTapToRadarIfNeeded;
-(void)_updateCachedAssets;
-(void)_enumerateDifferencesBetweenRect:(CGRect)arg1 andRect:(CGRect)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)_updateUIElementsVisibility;
-(id)_tapToRadarViewControllerWithScreenshot:(BOOL)arg1 ;
-(void)displayCurrentCurationType;
-(void)reloadCuration;
-(void)changeCurationType:(id)arg1 ;
-(void)addAssetUUIDsTo:(id)arg1 from:(id)arg2 ;
-(void)showCurationSettings:(id)arg1 ;
-(void)hideCurationSettings:(id)arg1 ;
-(void)showItemDetailsWithDebugInfo:(id)arg1 ;
-(void)hideItemDetails:(id)arg1 ;
-(id)_curationTypeKeys;
-(id)assetsForCurationType:(long long)arg1 ;
-(id)curationDebugInformationForCurationType:(long long)arg1 ;
-(id)fullCurationDebugInformation;
-(void)requestCurationDebugInfoWithOptions:(id)arg1 setGlobally:(BOOL)arg2 ;
-(id)curationDebugInformationWithOptions:(id)arg1 ;
-(BOOL)generateSectionTitles:(out id*)arg1 andTableContent:(out id*)arg2 forIndex:(long long)arg3 ;
-(id)radarAttachmentURLs;
-(id)radarComponentInfoForRoute:(id)arg1 ;
-(id)radarTitleTemplate;
-(id)radarDescriptionTemplate;
-(BOOL)initiallyShowCuration;
-(long long)currentCurationType;
-(BOOL)shouldPresentTapToRadar;
-(void)setShouldPresentTapToRadar:(BOOL)arg1 ;
-(NSString *)hostViewDiagnosticDescription;
-(NSString *)hostLayoutDiagnosticDescription;
-(void)setHostLayoutDiagnosticDescription:(NSString *)arg1 ;
-(void)setHostViewDiagnosticDescription:(NSString *)arg1 ;
-(void)setCurrentCurationType:(long long)arg1 ;
-(void)setInitiallyShowCuration:(BOOL)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)_switchLogsAction:(id)arg1 ;
-(void)_closeAction:(id)arg1 ;
@end

