/*
* Generated on Thursday, January 14, 2021 at 2:20:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIKeyboardEmojiKeyView.h>
#import <UIKit/UIKeyboardMediaControllerDelegate.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>

@protocol UIKBEmojiHitTestResponder;
@class UIKeyboardEmojiCollectionView, UICollectionViewFlowLayout, UIKeyboardEmojiCategory, NSIndexPath, UIKeyboardEmojiGraphicsTraits, UIKBTree, UIResponder, NSString;

@interface UIKeyboardEmojiCollectionInputView : UIKeyboardEmojiKeyView <UIKeyboardMediaControllerDelegate, UICollectionViewDataSource, UICollectionViewDelegate> {

	UIKeyboardEmojiCollectionView* _collectionView;
	UICollectionViewFlowLayout* _flowLayout;
	UIKeyboardEmojiCategory* _category;
	NSIndexPath* _tappedSkinToneEmoji;
	UIKeyboardEmojiGraphicsTraits* _emojiGraphicsTraits;
	BOOL _isDraggingInputView;
	unsigned long long _currentSection;
	BOOL _inputDelegateCanSupportAnimoji;
	BOOL _hasShownAnimojiFirstTimeExperience;
	BOOL _shouldRetryFetchingAnimojiRecents;
	BOOL _useWideAnimojiCell;
	BOOL _hasShownAnimojiCell;
	double _frameInset;
	BOOL _showingVariants;
	long long _selectedVariant;
	long long _currentVariantRow;
	UIKBTree* _selectedPopupKey;
	BOOL _supportsMemoji;
	BOOL _hasCheckedMemojiPreference;
	BOOL _currentlyCheckingMemojiPreference;
	/*^block*/id _completionBlock;
	UIResponder*<UIKBEmojiHitTestResponder> _hitTestResponder;
	NSIndexPath* _selectedIndexPath;

}

@property (nonatomic,copy) id completionBlock;                                                      //@synthesize completionBlock=_completionBlock - In the implementation block
@property (nonatomic,retain) NSIndexPath * selectedIndexPath;                                       //@synthesize selectedIndexPath=_selectedIndexPath - In the implementation block
@property (assign) BOOL supportsMemoji;                                                             //@synthesize supportsMemoji=_supportsMemoji - In the implementation block
@property (assign) BOOL hasCheckedMemojiPreference;                                                 //@synthesize hasCheckedMemojiPreference=_hasCheckedMemojiPreference - In the implementation block
@property (assign) BOOL currentlyCheckingMemojiPreference;                                          //@synthesize currentlyCheckingMemojiPreference=_currentlyCheckingMemojiPreference - In the implementation block
@property (assign) UIKeyboardEmojiCategory * category;                                              //@synthesize category=_category - In the implementation block
@property (assign,nonatomic) UIResponder*<UIKBEmojiHitTestResponder> hitTestResponder;              //@synthesize hitTestResponder=_hitTestResponder - In the implementation block
@property (readonly) BOOL isDraggingInputView;                                                      //@synthesize isDraggingInputView=_isDraggingInputView - In the implementation block
@property (assign,nonatomic) NSIndexPath * tappedSkinToneEmoji;                                     //@synthesize tappedSkinToneEmoji=_tappedSkinToneEmoji - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)wantsScreenTraits;
+(BOOL)shouldHighlightEmoji:(id)arg1 ;
-(double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3 ;
-(void)dimKeys:(id)arg1 ;
-(BOOL)handleKeyEvent:(id)arg1 ;
-(void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(void)setCategory:(UIKeyboardEmojiCategory *)arg1 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(UIKeyboardEmojiCategory *)category;
-(void)setContentScaleFactor:(double)arg1 ;
-(id)subTreeHitTest:(CGPoint)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 keyplane:(id)arg2 key:(id)arg3 screenTraits:(id)arg4 ;
-(long long)didInputSubTree:(id)arg1 ;
-(void)willDisplayModalActionView:(id)arg1 withSubTreeKeyView:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3 ;
-(void)didMoveToWindow;
-(double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3 ;
-(id)itemInRect:(CGRect)arg1 ;
-(UIResponder*<UIKBEmojiHitTestResponder>)hitTestResponder;
-(void)updateToCategory:(long long)arg1 ;
-(void)updateMemojiPreference;
-(BOOL)supportsMemoji;
-(void)setTappedSkinToneEmoji:(NSIndexPath *)arg1 ;
-(void)resetSelectionIfNeeded;
-(BOOL)baseStringIsCoupleEmoji:(id)arg1 ;
-(BOOL)skinToneWasUsedForEmoji:(id)arg1 ;
-(NSIndexPath *)tappedSkinToneEmoji;
-(BOOL)_userHasSelectedSkinToneEmoji;
-(id)selectedChildSkinToneEmoji:(id)arg1 ;
-(id)emojiBaseString:(id)arg1 ;
-(void)_setUserHasSelectedSkinToneEmoji:(BOOL)arg1 ;
-(BOOL)hasCheckedMemojiPreference;
-(void)setSupportsMemoji:(BOOL)arg1 ;
-(void)shouldDismissModalDisplayView:(id)arg1 ;
-(void)setHasCheckedMemojiPreference:(BOOL)arg1 ;
-(BOOL)memojiSettingEnabled;
-(BOOL)_shouldShowRecentlyUsedMedia;
-(BOOL)handleSelectionEvent:(id)arg1 ;
-(BOOL)handleKeyInputForFamilySelector:(id)arg1 ;
-(BOOL)handleKeyInputForVariantSelector:(id)arg1 ;
-(BOOL)handleKeyInputForCollectionViewNavigation:(id)arg1 ;
-(long long)keyCodeForCurrentEnvironmentFromKeyCode:(long long)arg1 ;
-(void)updateHighlightForIndexPath:(id)arg1 scrollIfNeeded:(BOOL)arg2 animateScroll:(BOOL)arg3 ;
-(BOOL)_handleInitialSelectionEvent:(id)arg1 ;
-(void)insertSelectedEmoji:(id)arg1 shouldDismissPopover:(BOOL)arg2 ;
-(BOOL)keySupportsVariants:(id)arg1 ;
-(BOOL)_handleVariantSelectionEvent:(id)arg1 ;
-(BOOL)_handleBaseKeySelectionEvent:(id)arg1 ;
-(BOOL)cellShouldScrollWhenSelectedAtIndexPath:(id)arg1 ;
-(void)updateLastSeenItemForIndexPath:(id)arg1 ;
-(long long)indexForPrettyCategoryDisplay:(id)arg1 ;
-(void)updatePreferencesForSelectedEmoji:(id)arg1 ;
-(BOOL)currentlyCheckingMemojiPreference;
-(id)firstFullyVisibleHeader;
-(void)setCurrentlyCheckingMemojiPreference:(BOOL)arg1 ;
-(double)snappedXOffsetForOffset:(double)arg1 scrubbing:(BOOL)arg2 ;
-(double)_recentlyUsedMediaRoundedOffset:(double)arg1 recentlyUsedMediaCellWidth:(double)arg2 ;
-(id)emojiBaseFirstCharacterString:(id)arg1 ;
-(BOOL)genderEmojiBaseStringNeedVariantSelector:(id)arg1 ;
-(BOOL)isDraggingInputView;
-(long long)updateToCategoryWithOffsetPercentage:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 keyplane:(id)arg2 key:(id)arg3 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)preferencesControllerChanged:(id)arg1 ;
-(id)treeForCell:(id)arg1 ;
-(void)setHitTestResponder:(UIResponder*<UIKBEmojiHitTestResponder>)arg1 ;
-(void)didDismissCardForKeyboardMediaController:(id)arg1 ;
-(void)didTearDownRecentsViewForKeyboardMediaController:(id)arg1 ;
-(void)didPresentCardForKeyboardMediaController:(id)arg1 ;
-(void)didInsertMediaForKeyboardMediaController:(id)arg1 ;
-(void)dealloc;
-(void)setSelectedIndexPath:(NSIndexPath *)arg1 ;
-(NSIndexPath *)selectedIndexPath;
@end

