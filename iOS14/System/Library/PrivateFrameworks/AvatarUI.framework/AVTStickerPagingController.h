/*
* Generated on Thursday, January 14, 2021 at 2:23:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/

#import <AvatarUI/AvatarUI-Structs.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>
#import <libobjc.A.dylib/AVTStickerSheetControllerDelegate.h>
#import <libobjc.A.dylib/AVTNotifyingContainerViewDelegate.h>
#import <libobjc.A.dylib/AVTAvatarActionsViewControllerDelegate.h>
#import <libobjc.A.dylib/AVTObjectViewController.h>
#import <libobjc.A.dylib/AVTAvatarPicker.h>
#import <UIKit/UICollectionViewDataSourcePrefetching.h>

@protocol AVTPresenterDelegate, AVTAvatarPickerDelegate, AVTStickerPagingControllerDelegate, AVTStickerDisclosureValidationDelegate, OS_dispatch_queue, AVTStickerTaskScheduler, AVTResourceCache;
@class NSObject, AVTAvatarRecordDataSource, AVTUIStickerGeneratorPool, AVTUIEnvironment, NSMutableDictionary, _AVTAvatarRecordImageProvider, NSString, AVTStickerConfigurationProvider, NSArray, UIView, UICollectionView, UICollectionViewCell;

@interface AVTStickerPagingController : NSObject <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, AVTStickerSheetControllerDelegate, AVTNotifyingContainerViewDelegate, AVTAvatarActionsViewControllerDelegate, AVTObjectViewController, AVTAvatarPicker, UICollectionViewDataSourcePrefetching> {

	BOOL _allowsPeel;
	BOOL _isResizing;
	id<AVTPresenterDelegate> presenterDelegate;
	id<AVTAvatarPickerDelegate> avatarPickerDelegate;
	id<AVTStickerPagingControllerDelegate> _delegate;
	id<AVTStickerDisclosureValidationDelegate> _disclosureValidationDelegate;
	NSObject*<OS_dispatch_queue> _renderingQueue;
	NSObject*<OS_dispatch_queue> _encodingQueue;
	AVTAvatarRecordDataSource* _dataSource;
	AVTUIStickerGeneratorPool* _stickerGeneratorPool;
	AVTUIEnvironment* _environment;
	NSMutableDictionary* _pageForRecords;
	id<AVTStickerTaskScheduler> _taskScheduler;
	id<AVTResourceCache> _cache;
	_AVTAvatarRecordImageProvider* _imageProvider;
	NSString* _focusedPageRecordIdentifier;
	AVTStickerConfigurationProvider* _stickerConfigurationProvider;
	NSArray* _memojiStickerConfigurations;
	UIView* _view;
	UICollectionView* _collectionView;
	UICollectionViewCell* _lastDeletedCell;
	CGPoint _pageContentOffset;
	CGPoint _endDraggingTargetContentOffset;
	UIEdgeInsets _pageContentInsets;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> renderingQueue;                                                 //@synthesize renderingQueue=_renderingQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> encodingQueue;                                                  //@synthesize encodingQueue=_encodingQueue - In the implementation block
@property (nonatomic,retain) AVTAvatarRecordDataSource * dataSource;                                                      //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,retain) AVTUIStickerGeneratorPool * stickerGeneratorPool;                                            //@synthesize stickerGeneratorPool=_stickerGeneratorPool - In the implementation block
@property (nonatomic,retain) AVTUIEnvironment * environment;                                                              //@synthesize environment=_environment - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * pageForRecords;                                                        //@synthesize pageForRecords=_pageForRecords - In the implementation block
@property (nonatomic,readonly) BOOL allowsPeel;                                                                           //@synthesize allowsPeel=_allowsPeel - In the implementation block
@property (nonatomic,readonly) id<AVTStickerTaskScheduler> taskScheduler;                                                 //@synthesize taskScheduler=_taskScheduler - In the implementation block
@property (nonatomic,readonly) id<AVTResourceCache> cache;                                                                //@synthesize cache=_cache - In the implementation block
@property (nonatomic,readonly) _AVTAvatarRecordImageProvider * imageProvider;                                             //@synthesize imageProvider=_imageProvider - In the implementation block
@property (nonatomic,retain) NSString * focusedPageRecordIdentifier;                                                      //@synthesize focusedPageRecordIdentifier=_focusedPageRecordIdentifier - In the implementation block
@property (nonatomic,readonly) AVTStickerConfigurationProvider * stickerConfigurationProvider;                            //@synthesize stickerConfigurationProvider=_stickerConfigurationProvider - In the implementation block
@property (nonatomic,retain) NSArray * memojiStickerConfigurations;                                                       //@synthesize memojiStickerConfigurations=_memojiStickerConfigurations - In the implementation block
@property (nonatomic,retain) UIView * view;                                                                               //@synthesize view=_view - In the implementation block
@property (nonatomic,retain) UICollectionView * collectionView;                                                           //@synthesize collectionView=_collectionView - In the implementation block
@property (assign,nonatomic) CGPoint endDraggingTargetContentOffset;                                                      //@synthesize endDraggingTargetContentOffset=_endDraggingTargetContentOffset - In the implementation block
@property (assign,nonatomic) BOOL isResizing;                                                                             //@synthesize isResizing=_isResizing - In the implementation block
@property (nonatomic,retain) UICollectionViewCell * lastDeletedCell;                                                      //@synthesize lastDeletedCell=_lastDeletedCell - In the implementation block
@property (assign,nonatomic) UIEdgeInsets pageContentInsets;                                                              //@synthesize pageContentInsets=_pageContentInsets - In the implementation block
@property (assign,nonatomic) CGPoint pageContentOffset;                                                                   //@synthesize pageContentOffset=_pageContentOffset - In the implementation block
@property (assign,nonatomic,__weak) id<AVTStickerPagingControllerDelegate> delegate;                                      //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<AVTStickerDisclosureValidationDelegate> disclosureValidationDelegate;              //@synthesize disclosureValidationDelegate=_disclosureValidationDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<AVTPresenterDelegate> presenterDelegate; 
@property (assign,nonatomic,__weak) id<AVTAvatarPickerDelegate> avatarPickerDelegate; 
+(id)stickerCacheWithEnvironment:(id)arg1 ;
-(void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(void)collectionView:(id)arg1 cancelPrefetchingForItemsAtIndexPaths:(id)arg2 ;
-(id<AVTStickerTaskScheduler>)taskScheduler;
-(void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(void)collectionView:(id)arg1 prefetchItemsAtIndexPaths:(id)arg2 ;
-(CGPoint)collectionView:(id)arg1 targetContentOffsetForProposedContentOffset:(CGPoint)arg2 ;
-(BOOL)collectionView:(id)arg1 canFocusItemAtIndexPath:(id)arg2 ;
-(void)setCollectionView:(UICollectionView *)arg1 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(id<AVTResourceCache>)cache;
-(id<AVTStickerPagingControllerDelegate>)delegate;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(UICollectionView *)collectionView;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(AVTAvatarRecordDataSource *)dataSource;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(void)didEndDisplaying;
-(void)setView:(UIView *)arg1 ;
-(NSObject*<OS_dispatch_queue>)renderingQueue;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)setDelegate:(id<AVTStickerPagingControllerDelegate>)arg1 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)setDataSource:(AVTAvatarRecordDataSource *)arg1 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(UIView *)view;
-(void)scrollToPageAtIndex:(long long)arg1 animated:(BOOL)arg2 ;
-(void)reloadData;
-(BOOL)allowsPeel;
-(void)setEnvironment:(AVTUIEnvironment *)arg1 ;
-(BOOL)isResizing;
-(void)stickerSheetController:(id)arg1 didFinishRenderingStickersForRecord:(id)arg2 ;
-(id<AVTStickerDisclosureValidationDelegate>)disclosureValidationDelegate;
-(void)setDisclosureValidationDelegate:(id<AVTStickerDisclosureValidationDelegate>)arg1 ;
-(void)stickerSheetController:(id)arg1 didScrollToContentOffset:(CGPoint)arg2 ;
-(void)stickerSheetController:(id)arg1 scrollView:(id)arg2 willEndDraggingWithTargetContentOffset:(inout CGPoint*)arg3 ;
-(void)stickerSheetController:(id)arg1 didInteractWithStickerAtIndex:(long long)arg2 byPeeling:(BOOL)arg3 ;
-(void)notifyingContainerViewWillChangeSize:(CGSize)arg1 ;
-(void)notifyingContainerViewDidChangeSize:(CGSize)arg1 ;
-(void)setIsResizing:(BOOL)arg1 ;
-(AVTUIEnvironment *)environment;
-(_AVTAvatarRecordImageProvider *)imageProvider;
-(void)setPresenterDelegate:(id<AVTPresenterDelegate>)arg1 ;
-(id<AVTPresenterDelegate>)presenterDelegate;
-(void)loadView;
-(void)setRenderingQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)encodingQueue;
-(void)setEncodingQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)centeredPageWithOffset:(CGPoint)arg1 ;
-(id)sheetControllerForRecord:(id)arg1 ;
-(void)setPageForRecords:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)pageForRecords;
-(NSArray *)memojiStickerConfigurations;
-(AVTStickerConfigurationProvider *)stickerConfigurationProvider;
-(void)setMemojiStickerConfigurations:(NSArray *)arg1 ;
-(AVTUIStickerGeneratorPool *)stickerGeneratorPool;
-(id)reloadSheetControllerForRecord:(id)arg1 ;
-(void)setLastDeletedCell:(UICollectionViewCell *)arg1 ;
-(id)sheetControllerAtIndex:(long long)arg1 ;
-(long long)pageIndexForAvatarRecordIdentifier:(id)arg1 ;
-(void)setFocusedPageRecordIdentifier:(NSString *)arg1 ;
-(id<AVTAvatarPickerDelegate>)avatarPickerDelegate;
-(UIEdgeInsets)pageContentInsets;
-(CGPoint)pageContentOffset;
-(UICollectionViewCell *)lastDeletedCell;
-(void)prefetchDataForRecord:(id)arg1 ;
-(void)cancelPrefetchingDataForRecord:(id)arg1 ;
-(void)setEndDraggingTargetContentOffset:(CGPoint)arg1 ;
-(void)updateForEndingScrollWithTargetContentOffset:(CGPoint)arg1 ;
-(CGPoint)endDraggingTargetContentOffset;
-(void)scrollToAvatarWithIdentifier:(id)arg1 animated:(BOOL)arg2 ;
-(NSString *)focusedPageRecordIdentifier;
-(void)avatarActionsViewControllerDidFinish:(id)arg1 ;
-(id)avatarActionsViewController:(id)arg1 recordUpdateForDeletingRecord:(id)arg2 ;
-(void)selectAvatarRecordWithIdentifier:(id)arg1 animated:(BOOL)arg2 ;
-(void)setAvatarPickerDelegate:(id<AVTAvatarPickerDelegate>)arg1 ;
-(void)setPageContentInsets:(UIEdgeInsets)arg1 ;
-(void)setPageContentOffset:(CGPoint)arg1 ;
-(id)initWithRecordDataSource:(id)arg1 recordImageProvider:(id)arg2 stickerConfigurationProvider:(id)arg3 taskScheduler:(id)arg4 environment:(id)arg5 allowsPeel:(BOOL)arg6 ;
-(void)insertPageForRecord:(id)arg1 atIndex:(long long)arg2 ;
-(void)deletePageForRecord:(id)arg1 atIndex:(long long)arg2 ;
-(void)reloadPageForRecord:(id)arg1 atIndex:(long long)arg2 ;
-(void)willStartDisplaying;
-(void)wrapAndPresentViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)willEndDisplaying;
-(id)firstPageItemView;
-(void)setStickerGeneratorPool:(AVTUIStickerGeneratorPool *)arg1 ;
-(id)collectionViewForPPT;
-(long long)pageIndexForAvatarRecordIdentifierForPPT:(id)arg1 ;
@end

