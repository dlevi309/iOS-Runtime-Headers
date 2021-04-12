/*
* Generated on Monday, March 1, 2021 at 2:32:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/

#import <AvatarUI/AvatarUI-Structs.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>
#import <libobjc.A.dylib/AVTNotifyingContainerViewDelegate.h>
#import <libobjc.A.dylib/AVTStickerCollectionViewCellDelegate.h>
#import <libobjc.A.dylib/AVTObjectViewController.h>

@protocol AVTPresenterDelegate, AVTStickerSheetControllerDelegate, AVTStickerDisclosureValidationDelegate;
@class UIView, UICollectionView, AVTStickerSheetModel, UIImage, NSString;

@interface AVTStickerSheetController : NSObject <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, AVTNotifyingContainerViewDelegate, AVTStickerCollectionViewCellDelegate, AVTObjectViewController> {

	BOOL _allowsPeel;
	BOOL _isPageVisible;
	BOOL _showPrereleaseSticker;
	id<AVTPresenterDelegate> presenterDelegate;
	id<AVTStickerSheetControllerDelegate> _delegate;
	id<AVTStickerDisclosureValidationDelegate> _disclosureValidationDelegate;
	UIView* _view;
	UICollectionView* _collectionView;
	AVTStickerSheetModel* _model;
	UIImage* _placeholderImage;
	UIEdgeInsets _sectionInsets;

}

@property (nonatomic,retain) UIView * view;                                                                               //@synthesize view=_view - In the implementation block
@property (nonatomic,retain) UICollectionView * collectionView;                                                           //@synthesize collectionView=_collectionView - In the implementation block
@property (assign,nonatomic) BOOL isPageVisible;                                                                          //@synthesize isPageVisible=_isPageVisible - In the implementation block
@property (nonatomic,retain) AVTStickerSheetModel * model;                                                                //@synthesize model=_model - In the implementation block
@property (nonatomic,retain) UIImage * placeholderImage;                                                                  //@synthesize placeholderImage=_placeholderImage - In the implementation block
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
-(id<AVTStickerSheetControllerDelegate>)delegate;
-(void)setDelegate:(id<AVTStickerSheetControllerDelegate>)arg1 ;
-(AVTStickerSheetModel *)model;
-(void)setModel:(AVTStickerSheetModel *)arg1 ;
-(UIView *)view;
-(void)setView:(UIView *)arg1 ;
-(void)loadView;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(UICollectionView *)collectionView;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)setCollectionView:(UICollectionView *)arg1 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3 ;
-(void)setPlaceholderImage:(UIImage *)arg1 ;
-(UIImage *)placeholderImage;
-(void)scrollToContentOffset:(CGPoint)arg1 animated:(BOOL)arg2 ;
-(double)topPadding;
-(id<AVTAvatarRecord>)avatarRecord;
-(void)setPresenterDelegate:(id<AVTPresenterDelegate>)arg1 ;
-(id<AVTPresenterDelegate>)presenterDelegate;
-(/*^block*/id)placeholderProvider;
-(UIEdgeInsets)sectionInsets;
-(BOOL)isPageVisible;
-(void)lowerTaskPriority:(/*^block*/id)arg1 ;
-(void)setIsPageVisible:(BOOL)arg1 ;
-(void)discardStickerItems;
-(void)updateItem:(id)arg1 withStickerResource:(id)arg2 reloadCell:(BOOL)arg3 ;
-(void)startedTask:(/*^block*/id)arg1 forItem:(id)arg2 ;
-(void)clearStickerRendererIfNeeded;
-(void)reloadCollectionViewItemForStickerItem:(id)arg1 ;
-(BOOL)allowsPeel;
-(id<AVTStickerDisclosureValidationDelegate>)disclosureValidationDelegate;
-(void)setDisclosureValidationDelegate:(id<AVTStickerDisclosureValidationDelegate>)arg1 ;
-(BOOL)showPrereleaseSticker;
-(void)setShowPrereleaseSticker:(BOOL)arg1 ;
-(double)numberOfItemsPerRow;
-(CGPoint)maxedContentOffset:(CGPoint)arg1 ;
-(CGSize)minimumContentSizeForSize:(CGSize)arg1 ;
-(void)notifyingContainerViewWillChangeSize:(CGSize)arg1 ;
-(void)notifyingContainerViewDidChangeSize:(CGSize)arg1 ;
-(void)stickerCellDidTapSticker:(id)arg1 ;
-(void)stickerCellDidPeelSticker:(id)arg1 ;
-(id)initWithStickerSheetModel:(id)arg1 allowsPeel:(BOOL)arg2 ;
-(void)setSectionInsets:(UIEdgeInsets)arg1 ;
-(void)sheetWillDisappear;
-(void)sheetWillAppear;
-(id)firstStickerView;
@end

