/*
* Generated on Thursday, January 14, 2021 at 2:22:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
*/

#import <ShareSheet/ShareSheet-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <libobjc.A.dylib/LPLinkViewDelegate.h>

@protocol UIActivityContentDelegate;
@class UIViewController, NSArray, NSDictionary, NSMutableDictionary, _UIActivityContentCollectionView, UICollectionViewDiffableDataSource, NSDiffableDataSourceSnapshot, LPLinkView, _UIActivityContentTitleView, UIBarButtonItem, NSUUID, NSNumber, UIVisualEffectView, SFAirDropMagicHeadViewController, LPLinkMetadata, NSString;

@interface UIActivityContentViewController : UIViewController <UICollectionViewDelegate, LPLinkViewDelegate> {

	BOOL _configureForCloudSharing;
	BOOL _configureForPhotosEdit;
	BOOL _wantsObjectManipulation;
	BOOL _sharingCollapsed;
	BOOL _photosLandscapeMode;
	BOOL _contentInstalled;
	BOOL _ignorePersonTap;
	id<UIActivityContentDelegate> _delegate;
	UIViewController* _photosCarouselViewController;
	NSArray* _applicationActivities;
	NSDictionary* _activitiesByUUID;
	NSMutableDictionary* _identifierToProgress;
	NSMutableDictionary* _identifierToPulse;
	NSMutableDictionary* _identifierToSubtitle;
	_UIActivityContentCollectionView* _activityCollectionView;
	UICollectionViewDiffableDataSource* _dataSource;
	NSDiffableDataSourceSnapshot* _currentSnapshot;
	LPLinkView* _headerLinkView;
	NSMutableDictionary* _headerMetadataObservers;
	_UIActivityContentTitleView* _headerTitleView;
	UIBarButtonItem* _cancelButton;
	UIBarButtonItem* _nextButton;
	UIBarButtonItem* _closeButton;
	NSUUID* _photosCarouselUUID;
	NSArray* _airDropSlots;
	NSArray* _shareProxies;
	NSArray* _actionProxies;
	NSNumber* _nearbyCountSlotID;
	NSMutableDictionary* _peopleSlots;
	NSMutableDictionary* _shareSlots;
	NSMutableDictionary* _actionSlots;
	UIVisualEffectView* _backgroundView;
	NSUUID* _airDropUUID;
	SFAirDropMagicHeadViewController* _magicHeadViewController;

}

@property (nonatomic,retain) NSDictionary * activitiesByUUID;                                         //@synthesize activitiesByUUID=_activitiesByUUID - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * identifierToProgress;                              //@synthesize identifierToProgress=_identifierToProgress - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * identifierToPulse;                                 //@synthesize identifierToPulse=_identifierToPulse - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * identifierToSubtitle;                              //@synthesize identifierToSubtitle=_identifierToSubtitle - In the implementation block
@property (nonatomic,retain) _UIActivityContentCollectionView * activityCollectionView;               //@synthesize activityCollectionView=_activityCollectionView - In the implementation block
@property (nonatomic,retain) UICollectionViewDiffableDataSource * dataSource;                         //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,retain) NSDiffableDataSourceSnapshot * currentSnapshot;                          //@synthesize currentSnapshot=_currentSnapshot - In the implementation block
@property (nonatomic,retain) LPLinkView * headerLinkView;                                             //@synthesize headerLinkView=_headerLinkView - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * headerMetadataObservers;                           //@synthesize headerMetadataObservers=_headerMetadataObservers - In the implementation block
@property (nonatomic,retain) _UIActivityContentTitleView * headerTitleView;                           //@synthesize headerTitleView=_headerTitleView - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * cancelButton;                                          //@synthesize cancelButton=_cancelButton - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * nextButton;                                            //@synthesize nextButton=_nextButton - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * closeButton;                                           //@synthesize closeButton=_closeButton - In the implementation block
@property (nonatomic,retain) NSUUID * photosCarouselUUID;                                             //@synthesize photosCarouselUUID=_photosCarouselUUID - In the implementation block
@property (assign,nonatomic) BOOL photosLandscapeMode;                                                //@synthesize photosLandscapeMode=_photosLandscapeMode - In the implementation block
@property (nonatomic,retain) NSArray * airDropSlots;                                                  //@synthesize airDropSlots=_airDropSlots - In the implementation block
@property (nonatomic,retain) NSArray * shareProxies;                                                  //@synthesize shareProxies=_shareProxies - In the implementation block
@property (nonatomic,retain) NSArray * actionProxies;                                                 //@synthesize actionProxies=_actionProxies - In the implementation block
@property (nonatomic,retain) NSNumber * nearbyCountSlotID;                                            //@synthesize nearbyCountSlotID=_nearbyCountSlotID - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * peopleSlots;                                       //@synthesize peopleSlots=_peopleSlots - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * shareSlots;                                        //@synthesize shareSlots=_shareSlots - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * actionSlots;                                       //@synthesize actionSlots=_actionSlots - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * backgroundView;                                     //@synthesize backgroundView=_backgroundView - In the implementation block
@property (assign,nonatomic) BOOL contentInstalled;                                                   //@synthesize contentInstalled=_contentInstalled - In the implementation block
@property (nonatomic,retain) NSUUID * airDropUUID;                                                    //@synthesize airDropUUID=_airDropUUID - In the implementation block
@property (nonatomic,retain) SFAirDropMagicHeadViewController * magicHeadViewController;              //@synthesize magicHeadViewController=_magicHeadViewController - In the implementation block
@property (assign,nonatomic) BOOL ignorePersonTap;                                                    //@synthesize ignorePersonTap=_ignorePersonTap - In the implementation block
@property (assign,nonatomic,__weak) id<UIActivityContentDelegate> delegate;                           //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL configureForCloudSharing;                                           //@synthesize configureForCloudSharing=_configureForCloudSharing - In the implementation block
@property (assign,nonatomic) BOOL configureForPhotosEdit;                                             //@synthesize configureForPhotosEdit=_configureForPhotosEdit - In the implementation block
@property (assign,nonatomic) BOOL wantsObjectManipulation;                                            //@synthesize wantsObjectManipulation=_wantsObjectManipulation - In the implementation block
@property (assign,nonatomic) BOOL sharingCollapsed;                                                   //@synthesize sharingCollapsed=_sharingCollapsed - In the implementation block
@property (nonatomic,retain) UIViewController * photosCarouselViewController;                         //@synthesize photosCarouselViewController=_photosCarouselViewController - In the implementation block
@property (nonatomic,retain) NSArray * applicationActivities;                                         //@synthesize applicationActivities=_applicationActivities - In the implementation block
@property (nonatomic,readonly) LPLinkMetadata * headerMetadata; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)collectionView:(id)arg1 contextMenuConfigurationForItemAtIndexPath:(id)arg2 point:(CGPoint)arg3 ;
-(void)collectionView:(id)arg1 willEndContextMenuInteractionWithConfiguration:(id)arg2 animator:(id)arg3 ;
-(UIBarButtonItem *)cancelButton;
-(id)collectionView:(id)arg1 previewForHighlightingContextMenuWithConfiguration:(id)arg2 ;
-(void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)setCancelButton:(UIBarButtonItem *)arg1 ;
-(NSDiffableDataSourceSnapshot *)currentSnapshot;
-(id)collectionView:(id)arg1 previewForDismissingContextMenuWithConfiguration:(id)arg2 ;
-(id)init;
-(UIBarButtonItem *)nextButton;
-(id<UIActivityContentDelegate>)delegate;
-(void)setCloseButton:(UIBarButtonItem *)arg1 ;
-(void)setBackgroundView:(UIVisualEffectView *)arg1 ;
-(void)setNextButton:(UIBarButtonItem *)arg1 ;
-(UIVisualEffectView *)backgroundView;
-(UICollectionViewDiffableDataSource *)dataSource;
-(void)setCurrentSnapshot:(NSDiffableDataSourceSnapshot *)arg1 ;
-(void)linkViewNeedsResize:(id)arg1 ;
-(void)setDelegate:(id<UIActivityContentDelegate>)arg1 ;
-(void)setActivitiesByUUID:(NSDictionary *)arg1 ;
-(void)setApplicationActivities:(NSArray *)arg1 ;
-(void)setDataSource:(UICollectionViewDiffableDataSource *)arg1 ;
-(NSDictionary *)activitiesByUUID;
-(void)viewDidLoad;
-(LPLinkView *)headerLinkView;
-(void)configureHeaderViewIfNeeded;
-(void)configureCollectionViewIfNeeded;
-(void)_updatePhotosCarouselViewContent;
-(NSUUID *)airDropUUID;
-(BOOL)configureForCloudSharing;
-(_UIActivityContentCollectionView *)activityCollectionView;
-(UIViewController *)photosCarouselViewController;
-(_UIActivityContentTitleView *)headerTitleView;
-(BOOL)wantsObjectManipulation;
-(void)_closeButtonTapped;
-(void)setHeaderTitleView:(_UIActivityContentTitleView *)arg1 ;
-(void)setHeaderLinkView:(LPLinkView *)arg1 ;
-(BOOL)photosLandscapeMode;
-(BOOL)contentInstalled;
-(void)setContentInstalled:(BOOL)arg1 ;
-(id)activityCollectionViewLayout;
-(void)setActivityCollectionView:(_UIActivityContentCollectionView *)arg1 ;
-(NSMutableDictionary *)peopleSlots;
-(void)scrollViewDidScroll:(id)arg1 ;
-(NSMutableDictionary *)identifierToSubtitle;
-(NSMutableDictionary *)identifierToProgress;
-(id)_activityWithActivityUUID:(id)arg1 ;
-(NSMutableDictionary *)shareSlots;
-(NSMutableDictionary *)actionSlots;
-(NSNumber *)nearbyCountSlotID;
-(void)_editActionsTapped;
-(SFAirDropMagicHeadViewController *)magicHeadViewController;
-(void)setMagicHeadViewController:(SFAirDropMagicHeadViewController *)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)configureMagicHeadCell:(id)arg1 withProxy:(id)arg2 ;
-(void)setPhotosLandscapeMode:(BOOL)arg1 ;
-(void)overrideLayoutConfigurationWithSafeAreaInsets:(BOOL)arg1 ;
-(void)layoutContentCollectionView:(BOOL)arg1 ;
-(void)setNearbyCountSlotID:(NSNumber *)arg1 ;
-(void)setAirDropSlots:(NSArray *)arg1 ;
-(void)setShareProxies:(NSArray *)arg1 ;
-(void)setActionProxies:(NSArray *)arg1 ;
-(NSArray *)airDropSlots;
-(NSArray *)shareProxies;
-(NSArray *)actionProxies;
-(NSUUID *)photosCarouselUUID;
-(void)setPhotosCarouselUUID:(NSUUID *)arg1 ;
-(BOOL)configureForPhotosEdit;
-(void)setAirDropUUID:(NSUUID *)arg1 ;
-(void)setIgnorePersonTap:(BOOL)arg1 ;
-(id)_contextMenuPreviewForCollectionView:(id)arg1 collectionViewCell:(id)arg2 ;
-(BOOL)ignorePersonTap;
-(void)_cancelButtonTapped;
-(void)_nextButtonTapped;
-(void)updateHeaderMetadata;
-(void)updateHeaderSize;
-(void)setWantsObjectManipulation:(BOOL)arg1 ;
-(LPLinkMetadata *)headerMetadata;
-(void)setPhotosCarouselViewController:(UIViewController *)arg1 ;
-(void)refreshContent;
-(BOOL)_presentedInFormSheet;
-(void)setConfigureForCloudSharing:(BOOL)arg1 ;
-(void)updateContentWithPeopleProxies:(id)arg1 shareProxies:(id)arg2 actionProxies:(id)arg3 activitiesByUUID:(id)arg4 nearbyCountSlotID:(id)arg5 animated:(BOOL)arg6 ;
-(void)updateProgress:(double)arg1 withTopText:(id)arg2 bottomText:(id)arg3 forNodeWithIdentifier:(id)arg4 shouldPulse:(BOOL)arg5 animated:(BOOL)arg6 ;
-(void)setConfigureForPhotosEdit:(BOOL)arg1 ;
-(BOOL)sharingCollapsed;
-(void)setSharingCollapsed:(BOOL)arg1 ;
-(void)setIdentifierToProgress:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)identifierToPulse;
-(void)setIdentifierToPulse:(NSMutableDictionary *)arg1 ;
-(void)setIdentifierToSubtitle:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)headerMetadataObservers;
-(void)setHeaderMetadataObservers:(NSMutableDictionary *)arg1 ;
-(void)setPeopleSlots:(NSMutableDictionary *)arg1 ;
-(void)setShareSlots:(NSMutableDictionary *)arg1 ;
-(void)setActionSlots:(NSMutableDictionary *)arg1 ;
-(UIBarButtonItem *)closeButton;
-(void)viewDidLayoutSubviews;
-(NSArray *)applicationActivities;
@end

