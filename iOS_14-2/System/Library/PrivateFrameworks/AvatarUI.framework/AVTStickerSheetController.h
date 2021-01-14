/*
* Generated on Thursday, January 14, 2021 at 2:23:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/

#import <AvatarUI/AvatarUI-Structs.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>
#import <libobjc.A.dylib/AVTNotifyingContainerViewDelegate.h>
#import <libobjc.A.dylib/AVTStickerCollectionViewCellDelegate.h>
#import <libobjc.A.dylib/AVTObjectViewController.h>

@protocol AVTPresenterDelegate, AVTStickerSheetControllerDelegate, AVTStickerDisclosureValidationDelegate, AVTStickerTaskScheduler;
@class UIView, UICollectionView, AVTStickerSheetModel, UIImage, NSString;

@interface AVTStickerSheetController : NSObject <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, AVTNotifyingContainerViewDelegate, AVTStickerCollectionViewCellDelegate, AVTObjectViewController> {

	BOOL _allowsPeel;
	BOOL _isPageVisible;
	BOOL _areAllStickersRendered;
	BOOL _showPrereleaseSticker;
	id<AVTPresenterDelegate> presenterDelegate;
	id<AVTStickerSheetControllerDelegate> _delegate;
	id<AVTStickerDisclosureValidationDelegate> _disclosureValidationDelegate;
	UIView* _view;
	UICollectionView* _collectionView;
	AVTStickerSheetModel* _model;
	UIImage* _placeholderImage;
	id<AVTStickerTaskScheduler> _taskScheduler;
	UIEdgeInsets _sectionInsets;

}

@property (nonatomic,retain) UIView * view;                                                                               //@synthesize view=_view - In the implementation block
@property (nonatomic,retain) UICollectionView * collectionView;                                                           //@synthesize collectionView=_collectionView - In the implementation block
@property (assign,nonatomic) BOOL isPageVisible;                                                                          //@synthesize isPageVisible=_isPageVisible - In the implementation block
@property (assign,nonatomic) BOOL areAllStickersRendered;                                                                 //@synthesize areAllStickersRendered=_areAllStickersRendered - In the implementation block
@property (nonatomic,retain) AVTStickerSheetModel * model;                                                                //@synthesize model=_model - In the implementation block
@property (nonatomic,retain) UIImage * placeholderImage;                                                                  //@synthesize placeholderImage=_placeholderImage - In the implementation block
@property (nonatomic,readonly) id<AVTStickerTaskScheduler> taskScheduler;                                                 //@synthesize taskScheduler=_taskScheduler - In the implementation block
@property (assign,nonatomic) BOOL showPrereleaseSticker;                                                                  //@synthesize showPrereleaseSticker=_showPrereleaseSticker - In the implementation block
@property (assign,nonatomic) UIEdgeInsets sectionInsets;                                                                  //@synthesize sectionInsets=_sectionInsets - In the implementation block
@property (assign,nonatomic,__weak) id<AVTStickerSheetControllerDelegate> delegate;                                       //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<AVTStickerDisclosureValidationDelegate> disclosureValidationDelegate;              //@synthesize disclosureValidationDelegate=_disclosureValidationDelegate - In the implementation block
@property (nonatomic,readonly) id<AVTAvatarRecord> avatarRecord; 
@property (nonatomic,readonly) BOOL allowsPeel;                                                                           //@synthesize allowsPeel=_allowsPeel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<AVTPresenterDelegate> presenterDelegate; 
-(void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(id<AVTStickerTaskScheduler>)taskScheduler;
-(double)topPadding;
-(BOOL)collectionView:(id)arg1 canFocusItemAtIndexPath:(id)arg2 ;
-(AVTStickerSheetModel *)model;
-(void)setCollectionView:(UICollectionView *)arg1 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(id<AVTStickerSheetControllerDelegate>)delegate;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(UICollectionView *)collectionView;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(void)setView:(UIView *)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)setDelegate:(id<AVTStickerSheetControllerDelegate>)arg1 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(void)setModel:(AVTStickerSheetModel *)arg1 ;
-(UIView *)view;
-(void)scrollToContentOffset:(CGPoint)arg1 animated:(BOOL)arg2 ;
-(UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3 ;
-(id<AVTAvatarRecord>)avatarRecord;
-(double)numberOfItemsPerRow;
-(/*^block*/id)placeholderProvider;
-(BOOL)allowsPeel;
-(UIImage *)placeholderImage;
-(void)setIsPageVisible:(BOOL)arg1 ;
-(void)discardStickerItems;
-(BOOL)isPageVisible;
-(void)startAllSchedulerTasksExcludingVisibleIndexPaths:(id)arg1 ;
-(BOOL)areAllStickersRendered;
-(void)updateItem:(id)arg1 withStickerResource:(id)arg2 reloadCell:(BOOL)arg3 ;
-(void)scheduleSheetStickerTask:(/*^block*/id)arg1 withIndexPath:(id)arg2 ;
-(void)clearStickerRendererIfNeeded;
-(void)reloadCollectionViewItemForStickerItem:(id)arg1 ;
-(id<AVTStickerDisclosureValidationDelegate>)disclosureValidationDelegate;
-(void)sheetWillAppear;
-(void)setDisclosureValidationDelegate:(id<AVTStickerDisclosureValidationDelegate>)arg1 ;
-(BOOL)showPrereleaseSticker;
-(void)setShowPrereleaseSticker:(BOOL)arg1 ;
-(void)scheduleSheetPlaceholderTask:(/*^block*/id)arg1 ;
-(CGPoint)maxedContentOffset:(CGPoint)arg1 ;
-(void)setSectionInsets:(UIEdgeInsets)arg1 ;
-(CGSize)minimumContentSizeForSize:(CGSize)arg1 ;
-(void)notifyingContainerViewWillChangeSize:(CGSize)arg1 ;
-(void)notifyingContainerViewDidChangeSize:(CGSize)arg1 ;
-(void)stickerCellDidTapSticker:(id)arg1 ;
-(void)stickerCellDidPeelSticker:(id)arg1 ;
-(id)initWithStickerSheetModel:(id)arg1 taskScheduler:(id)arg2 allowsPeel:(BOOL)arg3 ;
-(void)sheetDidDisappear;
-(void)startAllSchedulerTasks;
-(id)firstStickerView;
-(void)setAreAllStickersRendered:(BOOL)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)setPlaceholderImage:(UIImage *)arg1 ;
-(void)setPresenterDelegate:(id<AVTPresenterDelegate>)arg1 ;
-(id<AVTPresenterDelegate>)presenterDelegate;
-(void)loadView;
-(UIEdgeInsets)sectionInsets;
-(void)dealloc;
@end

