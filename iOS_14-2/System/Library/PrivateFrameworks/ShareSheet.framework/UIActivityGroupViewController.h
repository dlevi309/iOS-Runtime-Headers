/*
* Generated on Thursday, January 14, 2021 at 2:22:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
*/

#import <ShareSheet/ShareSheet-Structs.h>
#import <UIKitCore/UICollectionViewController.h>
#import <libobjc.A.dylib/_UIActivityGroupViewDelegateFlowLayout.h>
#import <UIKit/UICollectionViewDataSourcePrefetching.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol UIActivityGroupViewControllerDelegate, UIActivityGroupViewControllerDataSource;
@class NSArray, _UIActivityUserDefaults, _UIUserDefaultsActivity, UILongPressGestureRecognizer, NSIndexPath, NSString;

@interface UIActivityGroupViewController : UICollectionViewController <_UIActivityGroupViewDelegateFlowLayout, UICollectionViewDataSourcePrefetching, UIGestureRecognizerDelegate> {

	BOOL _hasActivities;
	BOOL _activityIndexDidChangeWhileDragging;
	BOOL _allowsUserCustomization;
	BOOL _embedded;
	BOOL _picker;
	id<UIActivityGroupViewControllerDelegate> _delegate;
	long long _activityCategory;
	NSArray* _activities;
	NSArray* _visibleActivities;
	_UIActivityUserDefaults* _userDefaults;
	_UIUserDefaultsActivity* _userDefaultsActivity;
	UILongPressGestureRecognizer* _editingGestureRecognizer;
	NSIndexPath* _indexPathForMenuActivity;
	NSArray* _visibleActivityProxies;
	id<UIActivityGroupViewControllerDataSource> _dataSource;
	CGPoint _initialDraggingLocation;
	UIEdgeInsets _externalSafeInset;

}

@property (assign,nonatomic) BOOL hasActivities;                                                         //@synthesize hasActivities=_hasActivities - In the implementation block
@property (nonatomic,copy) NSArray * visibleActivities;                                                  //@synthesize visibleActivities=_visibleActivities - In the implementation block
@property (nonatomic,retain) _UIActivityUserDefaults * userDefaults;                                     //@synthesize userDefaults=_userDefaults - In the implementation block
@property (nonatomic,retain) _UIUserDefaultsActivity * userDefaultsActivity;                             //@synthesize userDefaultsActivity=_userDefaultsActivity - In the implementation block
@property (nonatomic,retain) UILongPressGestureRecognizer * editingGestureRecognizer;                    //@synthesize editingGestureRecognizer=_editingGestureRecognizer - In the implementation block
@property (assign,nonatomic) CGPoint initialDraggingLocation;                                            //@synthesize initialDraggingLocation=_initialDraggingLocation - In the implementation block
@property (assign,nonatomic) BOOL activityIndexDidChangeWhileDragging;                                   //@synthesize activityIndexDidChangeWhileDragging=_activityIndexDidChangeWhileDragging - In the implementation block
@property (nonatomic,copy) NSIndexPath * indexPathForMenuActivity;                                       //@synthesize indexPathForMenuActivity=_indexPathForMenuActivity - In the implementation block
@property (assign,nonatomic) BOOL allowsUserCustomization;                                               //@synthesize allowsUserCustomization=_allowsUserCustomization - In the implementation block
@property (nonatomic,copy) NSArray * visibleActivityProxies;                                             //@synthesize visibleActivityProxies=_visibleActivityProxies - In the implementation block
@property (assign,getter=isEmbedded,nonatomic) BOOL embedded;                                            //@synthesize embedded=_embedded - In the implementation block
@property (assign,getter=isPicker,nonatomic) BOOL picker;                                                //@synthesize picker=_picker - In the implementation block
@property (assign,nonatomic) UIEdgeInsets externalSafeInset;                                             //@synthesize externalSafeInset=_externalSafeInset - In the implementation block
@property (assign,nonatomic,__weak) id<UIActivityGroupViewControllerDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic,__weak) id<UIActivityGroupViewControllerDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long activityCategory;                                                 //@synthesize activityCategory=_activityCategory - In the implementation block
@property (nonatomic,copy) NSArray * activities;                                                         //@synthesize activities=_activities - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSArray *)activities;
-(BOOL)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(void)collectionView:(id)arg1 prefetchItemsAtIndexPaths:(id)arg2 ;
-(BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)setUserDefaults:(_UIActivityUserDefaults *)arg1 ;
-(void)setActivities:(NSArray *)arg1 ;
-(BOOL)isPicker;
-(id<UIActivityGroupViewControllerDelegate>)delegate;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id<UIActivityGroupViewControllerDataSource>)dataSource;
-(_UIActivityUserDefaults *)userDefaults;
-(BOOL)canBecomeFirstResponder;
-(void)setDelegate:(id<UIActivityGroupViewControllerDelegate>)arg1 ;
-(void)setActivityCategory:(long long)arg1 ;
-(long long)activityCategory;
-(void)setDataSource:(id<UIActivityGroupViewControllerDataSource>)arg1 ;
-(void)setPicker:(BOOL)arg1 ;
-(BOOL)hasActivities;
-(void)viewDidLoad;
-(id)initWithCollectionViewLayout:(id)arg1 ;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)isEmbedded;
-(id)initWithCoder:(id)arg1 ;
-(UIEdgeInsets)externalSafeInset;
-(UILongPressGestureRecognizer *)editingGestureRecognizer;
-(void)handleEditingGesture:(id)arg1 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 preferredSizeForItemAtIndexPath:(id)arg3 ;
-(id)collectionView:(id)arg1 layout:(id)arg2 moveItemAtIndexPath:(id)arg3 toIndexPath:(id)arg4 ;
-(id)collectionView:(id)arg1 layout:(id)arg2 needsContainerViewForDraggingItemAtIndexPath:(id)arg3 ;
-(void)setEditingGestureRecognizer:(UILongPressGestureRecognizer *)arg1 ;
-(void)setExternalSafeInset:(UIEdgeInsets)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(id)initWithActivityCategory:(long long)arg1 userDefaults:(id)arg2 ;
-(void)setVisibleActivityProxies:(NSArray *)arg1 ;
-(id)initWithActivityCategory:(long long)arg1 userDefaults:(id)arg2 userDefaultsIdentifier:(id)arg3 ;
-(void)setAllowsUserCustomization:(BOOL)arg1 ;
-(BOOL)allowsUserCustomization;
-(void)setUserDefaultsActivity:(_UIUserDefaultsActivity *)arg1 ;
-(void)setHasActivities:(BOOL)arg1 ;
-(void)registerClassForContentSizeCategoryChanges;
-(void)unregisterForActivityUserDefaultsChanges;
-(id)activityGroupViewLayout;
-(void)registerForActivityUserDefaultsChanges;
-(void)setActivities:(id)arg1 animated:(BOOL)arg2 ;
-(_UIUserDefaultsActivity *)userDefaultsActivity;
-(void)_setActivities:(id)arg1 animated:(BOOL)arg2 ;
-(void)_updateVisibleActivitiesAnimated:(BOOL)arg1 ;
-(void)_setVisibleActivities:(id)arg1 animated:(BOOL)arg2 ;
-(NSIndexPath *)indexPathForMenuActivity;
-(void)hideItemAtIndexPath:(id)arg1 ;
-(NSArray *)visibleActivityProxies;
-(id)activityForItemAtIndexPath:(id)arg1 ;
-(id)_titleTextForActivity:(id)arg1 ;
-(NSArray *)visibleActivities;
-(void)_updateItemSizeIfNeeded;
-(void)_dismissPresentedMenuControllers;
-(void)setIndexPathForMenuActivity:(NSIndexPath *)arg1 ;
-(void)setActivityIndexDidChangeWhileDragging:(BOOL)arg1 ;
-(void)setEmbedded:(BOOL)arg1 ;
-(BOOL)activityIndexDidChangeWhileDragging;
-(void)_performHideActivityForMenuController:(id)arg1 ;
-(id)targetIndexPathForMoveFromRowAtIndexPath:(id)arg1 toProposedIndexPath:(id)arg2 ;
-(void)ignoreUserDefaultsChangesWhileUsingBlock:(/*^block*/id)arg1 ;
-(void)activityUserDefaultsDidChange:(id)arg1 ;
-(id)initWithActivityCategory:(long long)arg1 activityProxies:(id)arg2 ;
-(void)updateActivityProxies:(id)arg1 ;
-(void)setVisibleActivities:(NSArray *)arg1 ;
-(CGPoint)initialDraggingLocation;
-(void)setInitialDraggingLocation:(CGPoint)arg1 ;
-(void)dealloc;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
@end

