/*
* Generated on Thursday, January 14, 2021 at 2:23:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <SafariServices/SafariServices-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <libobjc.A.dylib/_SFStartPageDataSourceObserving.h>

@protocol SFStartPageCollectionDataSource, SFStartPageCollectionDelegate_SFStartPagePreviewProviding;
@class NSSet, UICollectionViewDiffableDataSource, UICollectionView, NSArray, NSMapTable, NSString;

@interface SFStartPageCollectionViewController : UIViewController <UICollectionViewDelegate, _SFStartPageDataSourceObserving> {

	NSSet* _collapsibleSectionIdentifiers;
	UICollectionViewDiffableDataSource* _collectionDataSource;
	UICollectionView* _collectionView;
	NSSet* _expandedSectionIdentifiers;
	double _lastLayoutWidth;
	NSArray* _sections;
	NSMapTable* _contextMenuToIndexPathMap;
	BOOL _displaysSectionHeaders;
	id<SFStartPageCollectionDataSource> _dataSource;
	id<SFStartPageCollectionDataSource> _strongDataSource;
	id<SFStartPageCollectionDelegate><_SFStartPagePreviewProviding> _delegate;

}

@property (assign,nonatomic,__weak) id<SFStartPageCollectionDataSource> dataSource;                                        //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,retain) id<SFStartPageCollectionDataSource> strongDataSource;                                         //@synthesize strongDataSource=_strongDataSource - In the implementation block
@property (assign,nonatomic,__weak) id<SFStartPageCollectionDelegate><_SFStartPagePreviewProviding> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL displaysSectionHeaders;                                                                  //@synthesize displaysSectionHeaders=_displaysSectionHeaders - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)collectionView:(id)arg1 contextMenuConfigurationForItemAtIndexPath:(id)arg2 point:(CGPoint)arg3 ;
-(void)collectionView:(id)arg1 willPerformPreviewActionForMenuWithConfiguration:(id)arg2 animator:(id)arg3 ;
-(id)collectionView:(id)arg1 previewForHighlightingContextMenuWithConfiguration:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(id)_currentSnapshot;
-(id)collectionView:(id)arg1 previewForDismissingContextMenuWithConfiguration:(id)arg2 ;
-(id)_makeCollectionViewLayout;
-(void)_setUpDataSource:(id)arg1 ;
-(void)_updateSections;
-(BOOL)_updateExpandedSectionIdentifiers;
-(void)_applyCurrentSnapshotAnimatingDifferences:(BOOL)arg1 ;
-(id)_collectionView:(id)arg1 cellForIdentifier:(id)arg2 indexPath:(id)arg3 ;
-(id)_collectionView:(id)arg1 supplementaryViewWithKind:(id)arg2 forIndexPath:(id)arg3 ;
-(void)_configureHeader:(id)arg1 forSection:(id)arg2 atIndexPath:(id)arg3 ;
-(id)_toggleExpandedActionForSection:(id)arg1 atIndexPath:(id)arg2 ;
-(id<SFStartPageCollectionDelegate><_SFStartPagePreviewProviding>)delegate;
-(long long)_numberOfColumnsForSectionItemType:(long long)arg1 containerWidth:(double)arg2 ;
-(BOOL)_isSectionExpanded:(id)arg1 ;
-(void)_toggleSectionExpanded:(id)arg1 ;
-(NSDirectionalEdgeInsets)_sectionContentInsetsWithYAxisPadding:(double)arg1 ;
-(CGPoint)_siteIconLayoutValuesForTraitCollection:(id)arg1 ;
-(id)_bannerSectionLayoutForEnvironment:(id)arg1 ;
-(id)_siteIconSectionLayoutForEnvironment:(id)arg1 ;
-(id)_siteCardSectionLayoutForEnvironment:(id)arg1 ;
-(id)_layoutForSectionAtIndex:(long long)arg1 inEnvironment:(id)arg2 ;
-(id<SFStartPageCollectionDataSource>)strongDataSource;
-(BOOL)displaysSectionHeaders;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)presentViewController:(id)arg1 fromItemWithIdentifier:(id)arg2 ;
-(id<SFStartPageCollectionDataSource>)dataSource;
-(void)setDelegate:(id<SFStartPageCollectionDelegate><_SFStartPagePreviewProviding>)arg1 ;
-(void)setDataSource:(id<SFStartPageCollectionDataSource>)arg1 ;
-(void)viewLayoutMarginsDidChange;
-(void)setDisplaysSectionHeaders:(BOOL)arg1 ;
-(void)setStrongDataSource:(id<SFStartPageCollectionDataSource>)arg1 ;
-(void)reloadDataAnimatingDifferences:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidLayoutSubviews;
-(void)_updateNavigationItemAnimated:(BOOL)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
@end

