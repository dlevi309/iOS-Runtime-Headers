/*
* Generated on Thursday, January 14, 2021 at 2:21:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol CKAppStripPredictiveTypeTransition, CKBrowserSwitcherFooterViewDelegate, CKBrowserSwitcherFooterViewDataSource;
@class CKAppStripLayout, UICollectionView, UIView, NSTimer, UILongPressGestureRecognizer, NSString;

@interface CKBrowserSwitcherFooterView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UIGestureRecognizerDelegate> {

	CKAppStripLayout* _appStripLayout;
	UICollectionView* _collectionView;
	UIView* _predictiveTypeSnapshotView;
	UIView* _visibleView;
	id<CKAppStripPredictiveTypeTransition> _animator;
	UIEdgeInsets _minifiedContentInsets;
	BOOL _isMagnified;
	BOOL _isDoingMagnificationAnimation;
	BOOL _isMagnificationEnabled;
	BOOL _ignoreDataSourceChanges;
	NSTimer* _minificationTimer;
	UILongPressGestureRecognizer* _longPressRecognizer;
	UILongPressGestureRecognizer* _touchTracker;
	BOOL _hasTouches;
	BOOL _scrollsLastUsedAppIconIntoView;
	BOOL _hideShinyStatus;
	BOOL _toggleBordersOnInterfaceStyle;
	BOOL _minifiesOnSelection;
	BOOL _isMinifyingOnTranscriptScroll;
	id<CKBrowserSwitcherFooterViewDelegate> _delegate;
	id<CKBrowserSwitcherFooterViewDataSource> _dataSource;
	double _snapshotVerticalOffset;
	UIView* _grayLine;

}

@property (nonatomic,retain) UIView * grayLine;                                                        //@synthesize grayLine=_grayLine - In the implementation block
@property (assign,nonatomic,__weak) id<CKBrowserSwitcherFooterViewDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<CKBrowserSwitcherFooterViewDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic) BOOL isMagnified;                                                         //@synthesize isMagnified=_isMagnified - In the implementation block
@property (assign,nonatomic) BOOL scrollsLastUsedAppIconIntoView;                                      //@synthesize scrollsLastUsedAppIconIntoView=_scrollsLastUsedAppIconIntoView - In the implementation block
@property (assign,nonatomic) BOOL hideShinyStatus;                                                     //@synthesize hideShinyStatus=_hideShinyStatus - In the implementation block
@property (assign,nonatomic) BOOL showBorders; 
@property (assign,nonatomic) BOOL toggleBordersOnInterfaceStyle;                                       //@synthesize toggleBordersOnInterfaceStyle=_toggleBordersOnInterfaceStyle - In the implementation block
@property (nonatomic,retain) CKAppStripLayout * appStripLayout;                                        //@synthesize appStripLayout=_appStripLayout - In the implementation block
@property (assign,nonatomic) BOOL minifiesOnSelection;                                                 //@synthesize minifiesOnSelection=_minifiesOnSelection - In the implementation block
@property (assign,nonatomic) BOOL isMinifyingOnTranscriptScroll;                                       //@synthesize isMinifyingOnTranscriptScroll=_isMinifyingOnTranscriptScroll - In the implementation block
@property (assign,nonatomic) double snapshotVerticalOffset;                                            //@synthesize snapshotVerticalOffset=_snapshotVerticalOffset - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)willMoveToSuperview:(id)arg1 ;
-(id)collectionView:(id)arg1 targetIndexPathForMoveFromItemAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3 ;
-(BOOL)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(void)collectionView:(id)arg1 moveItemAtIndexPath:(id)arg2 toIndexPath:(id)arg3 ;
-(BOOL)collectionView:(id)arg1 canMoveItemAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(id)init;
-(UIView *)grayLine;
-(id<CKBrowserSwitcherFooterViewDelegate>)delegate;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)_dynamicUserInterfaceTraitDidChange;
-(id)collectionView;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id<CKBrowserSwitcherFooterViewDataSource>)dataSource;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(BOOL)showBorders;
-(void)setGrayLine:(UIView *)arg1 ;
-(void)appsLongPressed:(id)arg1 ;
-(void)touchTrackerTrackedTouches:(id)arg1 ;
-(void)setShowBorders:(BOOL)arg1 ;
-(void)visibleAppsChanges:(id)arg1 ;
-(void)updateCollectionView:(id)arg1 ;
-(void)installedAppsChanged:(id)arg1 ;
-(void)updateBrowserCell:(id)arg1 ;
-(UIEdgeInsets)insetsForAppStrip;
-(void)transcriptCollectionStartedScrolling:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 toggleBordersOnInterfaceStyle:(BOOL)arg2 ;
-(BOOL)hideShinyStatus;
-(double)contentHeightForCameraApps;
-(void)adjustMagnificationAtPoint:(CGPoint)arg1 minifyImmediately:(BOOL)arg2 ;
-(CGPoint)targetContentOffsetForFocusPoint:(CGPoint)arg1 initialLayoutMode:(unsigned long long)arg2 finalLayoutMode:(unsigned long long)arg3 ;
-(BOOL)scrollsLastUsedAppIconIntoView;
-(void)_updateVisibilityState;
-(double)snapshotVerticalOffset;
-(void)setInitiallySelectedPluginIfNeeded;
-(void)setIsMagnified:(BOOL)arg1 ;
-(void)setHideShinyStatus:(BOOL)arg1 ;
-(void)setAppStripLayout:(CKAppStripLayout *)arg1 ;
-(BOOL)toggleBordersOnInterfaceStyle;
-(void)setToggleBordersOnInterfaceStyle:(BOOL)arg1 ;
-(BOOL)minifiesOnSelection;
-(void)setMinifiesOnSelection:(BOOL)arg1 ;
-(BOOL)isMinifyingOnTranscriptScroll;
-(void)setIsMinifyingOnTranscriptScroll:(BOOL)arg1 ;
-(void)setDelegate:(id<CKBrowserSwitcherFooterViewDelegate>)arg1 ;
-(void)resetScrollPosition;
-(void)setDataSource:(id<CKBrowserSwitcherFooterViewDataSource>)arg1 ;
-(void)layoutSubviews;
-(void)reloadData;
-(void)willMoveToWindow:(id)arg1 ;
-(void)clearSelection;
-(BOOL)isMagnified;
-(void)setScrollsLastUsedAppIconIntoView:(BOOL)arg1 ;
-(void)setSnapshotVerticalOffset:(double)arg1 ;
-(CKAppStripLayout *)appStripLayout;
-(void)updatePredictiveTypeSnapshot:(id)arg1 ;
-(void)animateAppStripVisible:(BOOL)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)minifyImmediately:(BOOL)arg1 ;
-(void)selectPluginAtIndexPath:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)dealloc;
-(double)contentHeight;
@end

