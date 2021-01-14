/*
* Generated on Thursday, January 14, 2021 at 2:22:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <PhotosUI/PUTileViewController.h>
#import <libobjc.A.dylib/PUAccessoryContentViewControllerDelegate.h>

@protocol PUAccessoryTileViewControllerDelegate, PUAccessoryContentViewController;
@class PUAssetViewModel, PUAssetReference, UIViewController, UIView, NSString;

@interface PUAccessoryTileViewController : PUTileViewController <PUAccessoryContentViewControllerDelegate> {

	BOOL _isPerformingChanges;
	BOOL _isPerformingUpdates;
	BOOL _isUpdateScheduled;
	struct {
		BOOL respondsToViewHostingGestureRecognizers;
		BOOL respondsToWillHideToolbarWhenShowingAccessoryView;
	}  _delegateFlags;
	struct {
		BOOL contentViewController;
		BOOL loadedContentViewController;
		BOOL contentViewMetrics;
		BOOL contentBounds;
		BOOL masterContentOffset;
	}  _needsUpdateFlags;
	BOOL __wasActiveOnLastMasterContentOffsetChange;
	id<PUAccessoryTileViewControllerDelegate> _delegate;
	PUAssetViewModel* _assetViewModel;
	PUAssetReference* _assetReference;
	UIViewController*<PUAccessoryContentViewController> __contentViewController;
	UIViewController*<PUAccessoryContentViewController> __loadedContentViewController;
	UIView* __contentView;
	long long __contentInsetsChangeReason;
	double __minimumVisibleHeight;
	double __editorHeightDelta;
	CGRect __contentBounds;
	CGRect __untransformedMasterContentFrame;
	UIEdgeInsets __contentInsets;
	CGRect __keyboardFrame;

}

@property (setter=_setContentViewController:,nonatomic,retain) UIViewController*<PUAccessoryContentViewController> _contentViewController;                          //@synthesize _contentViewController=__contentViewController - In the implementation block
@property (setter=_setLoadedContentViewController:,nonatomic,retain) UIViewController*<PUAccessoryContentViewController> _loadedContentViewController;              //@synthesize _loadedContentViewController=__loadedContentViewController - In the implementation block
@property (setter=_setContentView:,nonatomic,retain) UIView * _contentView;                                                                                         //@synthesize _contentView=__contentView - In the implementation block
@property (assign,setter=_setContentBounds:,nonatomic) CGRect _contentBounds;                                                                                       //@synthesize _contentBounds=__contentBounds - In the implementation block
@property (assign,setter=_setUntransformedMasterContentFrame:,nonatomic) CGRect _untransformedMasterContentFrame;                                                   //@synthesize _untransformedMasterContentFrame=__untransformedMasterContentFrame - In the implementation block
@property (assign,setter=_setContentInsets:,nonatomic) UIEdgeInsets _contentInsets;                                                                                 //@synthesize _contentInsets=__contentInsets - In the implementation block
@property (assign,setter=_setKeyboardFrame:,nonatomic) CGRect _keyboardFrame;                                                                                       //@synthesize _keyboardFrame=__keyboardFrame - In the implementation block
@property (assign,setter=_setContentInsetsChangeReason:,nonatomic) long long _contentInsetsChangeReason;                                                            //@synthesize _contentInsetsChangeReason=__contentInsetsChangeReason - In the implementation block
@property (assign,setter=_setMinimumVisibleHeight:,nonatomic) double _minimumVisibleHeight;                                                                         //@synthesize _minimumVisibleHeight=__minimumVisibleHeight - In the implementation block
@property (assign,setter=_setWasActiveOnLastMasterContentOffsetChange:,nonatomic) BOOL _wasActiveOnLastMasterContentOffsetChange;                                   //@synthesize _wasActiveOnLastMasterContentOffsetChange=__wasActiveOnLastMasterContentOffsetChange - In the implementation block
@property (assign,setter=_setEditorHeightDelta:,nonatomic) double _editorHeightDelta;                                                                               //@synthesize _editorHeightDelta=__editorHeightDelta - In the implementation block
@property (assign,nonatomic,__weak) id<PUAccessoryTileViewControllerDelegate> delegate;                                                                             //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) PUAssetViewModel * assetViewModel;                                                                                                     //@synthesize assetViewModel=_assetViewModel - In the implementation block
@property (nonatomic,retain) PUAssetReference * assetReference;                                                                                                     //@synthesize assetReference=_assetReference - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(PUAssetViewModel *)assetViewModel;
-(void)setAssetViewModel:(PUAssetViewModel *)arg1 ;
-(void)setAssetReference:(PUAssetReference *)arg1 ;
-(void)becomeReusable;
-(void)_invalidateContentBounds;
-(void)_setContentViewController:(id)arg1 ;
-(id<PUAccessoryTileViewControllerDelegate>)delegate;
-(UIViewController*<PUAccessoryContentViewController>)_contentViewController;
-(UIView *)_contentView;
-(void)_updateIfNeeded;
-(void)_performChanges:(/*^block*/id)arg1 ;
-(void)applyLayoutInfo:(id)arg1 ;
-(void)setDelegate:(id<PUAccessoryTileViewControllerDelegate>)arg1 ;
-(void)_keyboardWillShow:(id)arg1 ;
-(void)viewDidLoad;
-(void)_handleScheduledUpdate;
-(BOOL)_needsUpdate;
-(void)_keyboardWillHide:(id)arg1 ;
-(double)_minimumVisibleHeight;
-(id)accessoryContentViewControllerViewHostingGestureRecognizers:(id)arg1 ;
-(void)didChangeActive;
-(UIEdgeInsets)_contentInsets;
-(void)accessoryContentViewControllerContentBoundsDidChange:(id)arg1 ;
-(void)accessoryContentViewController:(id)arg1 editorHeightDidChange:(double)arg2 ;
-(BOOL)isLocationFromProviderInContentArea:(id)arg1 ;
-(void)_setLoadedContentViewController:(id)arg1 ;
-(void)_setContentBounds:(CGRect)arg1 ;
-(void)_setUntransformedMasterContentFrame:(CGRect)arg1 ;
-(void)_setMinimumVisibleHeight:(double)arg1 ;
-(void)_invalidateContentViewController;
-(void)_updateContentViewControllerIfNeeded;
-(void)_invalidateLoadedContentViewController;
-(void)_invalidateContentViewMetrics;
-(void)_setContentInsets:(UIEdgeInsets)arg1 ;
-(void)_updateLoadedContentViewControllerIfNeeded;
-(void)_updateContentViewMetricsIfNeeded;
-(void)_updateContentBoundsIfNeeded;
-(void)_invalidateMasterContentOffset;
-(void)_updateMasterContentOffsetIfNeeded;
-(UIViewController*<PUAccessoryContentViewController>)_loadedContentViewController;
-(CGRect)_untransformedMasterContentFrame;
-(long long)_contentInsetsChangeReason;
-(void)_setContentInsetsChangeReason:(long long)arg1 ;
-(BOOL)_wasActiveOnLastMasterContentOffsetChange;
-(void)_setWasActiveOnLastMasterContentOffsetChange:(BOOL)arg1 ;
-(double)_editorHeightDelta;
-(void)_setEditorHeightDelta:(double)arg1 ;
-(PUAssetReference *)assetReference;
-(CGRect)_keyboardFrame;
-(void)_setNeedsUpdate;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(CGRect)_contentBounds;
-(void)_setContentView:(id)arg1 ;
-(void)dealloc;
-(void)_setKeyboardFrame:(CGRect)arg1 ;
@end

