/*
* Generated on Thursday, January 14, 2021 at 2:26:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Messages.framework/Messages
*/

#import <Messages/Messages-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDataSourcePrefetching.h>

@protocol MSStickerBrowserViewDataSource, MSStickerBrowserViewDisplayDelegate;
@class UICollectionView, UICollectionViewFlowLayout, MSStickerBrowserViewLayoutSpec, NSMutableArray, NSTimer, NSMutableDictionary, CKDispatchQueue, NSDictionary, NSString;

@interface MSStickerBrowserView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDataSourcePrefetching> {

	BOOL _isRestoringContentOffset;
	BOOL _animating;
	long long _stickerSize;
	id<MSStickerBrowserViewDataSource> _dataSource;
	UICollectionView* _collectionView;
	UICollectionViewFlowLayout* _flowLayout;
	MSStickerBrowserViewLayoutSpec* _layoutSpec;
	NSMutableArray* _cellsToAnimate;
	NSTimer* _animationTimer;
	unsigned long long _currentlyAnimatingIndex;
	NSMutableDictionary* _stickerCache;
	CKDispatchQueue* _stickerCacheQueue;
	id<MSStickerBrowserViewDisplayDelegate> _displayDelegate;
	CGPoint _restoredContentOffset;
	CGSize _browserSizeToRestoreFrom;

}

@property (nonatomic,retain) UICollectionView * collectionView;                                    //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,retain) UICollectionViewFlowLayout * flowLayout;                              //@synthesize flowLayout=_flowLayout - In the implementation block
@property (nonatomic,retain) MSStickerBrowserViewLayoutSpec * layoutSpec;                          //@synthesize layoutSpec=_layoutSpec - In the implementation block
@property (nonatomic,retain) NSMutableArray * cellsToAnimate;                                      //@synthesize cellsToAnimate=_cellsToAnimate - In the implementation block
@property (nonatomic,retain) NSTimer * animationTimer;                                             //@synthesize animationTimer=_animationTimer - In the implementation block
@property (assign,nonatomic) unsigned long long currentlyAnimatingIndex;                           //@synthesize currentlyAnimatingIndex=_currentlyAnimatingIndex - In the implementation block
@property (assign,nonatomic) CGPoint restoredContentOffset;                                        //@synthesize restoredContentOffset=_restoredContentOffset - In the implementation block
@property (assign,nonatomic) CGSize browserSizeToRestoreFrom;                                      //@synthesize browserSizeToRestoreFrom=_browserSizeToRestoreFrom - In the implementation block
@property (assign,nonatomic) BOOL isRestoringContentOffset;                                        //@synthesize isRestoringContentOffset=_isRestoringContentOffset - In the implementation block
@property (assign,getter=isAnimating,nonatomic) BOOL animating;                                    //@synthesize animating=_animating - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * stickerCache;                                   //@synthesize stickerCache=_stickerCache - In the implementation block
@property (nonatomic,retain) CKDispatchQueue * stickerCacheQueue;                                  //@synthesize stickerCacheQueue=_stickerCacheQueue - In the implementation block
@property (assign,nonatomic) id<MSStickerBrowserViewDisplayDelegate> displayDelegate;              //@synthesize displayDelegate=_displayDelegate - In the implementation block
@property (nonatomic,readonly) NSDictionary * stateRestorationInfo; 
@property (nonatomic,readonly) long long stickerSize;                                              //@synthesize stickerSize=_stickerSize - In the implementation block
@property (assign,nonatomic,__weak) id<MSStickerBrowserViewDataSource> dataSource;                 //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic) CGPoint contentOffset; 
@property (assign,nonatomic) UIEdgeInsets contentInset; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(void)collectionView:(id)arg1 prefetchItemsAtIndexPaths:(id)arg2 ;
-(void)setContentOffset:(CGPoint)arg1 animated:(BOOL)arg2 ;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(void)setCollectionView:(UICollectionView *)arg1 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setAnimating:(BOOL)arg1 ;
-(void)setUserInteractionEnabled:(BOOL)arg1 ;
-(UIEdgeInsets)contentInset;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(UICollectionView *)collectionView;
-(void)setDisplayDelegate:(id<MSStickerBrowserViewDisplayDelegate>)arg1 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id<MSStickerBrowserViewDataSource>)dataSource;
-(void)setAnimationTimer:(NSTimer *)arg1 ;
-(void)setDataSource:(id<MSStickerBrowserViewDataSource>)arg1 ;
-(void)layoutSubviews;
-(NSTimer *)animationTimer;
-(void)didMoveToWindow;
-(id<MSStickerBrowserViewDisplayDelegate>)displayDelegate;
-(void)reloadData;
-(UICollectionViewFlowLayout *)flowLayout;
-(void)invalidateFlowLayout;
-(id)initWithFrame:(CGRect)arg1 stickerSize:(long long)arg2 ;
-(NSMutableDictionary *)stickerCache;
-(void)setStickerCache:(NSMutableDictionary *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CGPoint)contentOffset;
-(void)_stopAnimating;
-(void)_startAnimating;
-(BOOL)isAnimating;
-(void)setContentOffset:(CGPoint)arg1 ;
-(void)prepareForSnapshotting;
-(void)dealloc;
-(void)setFlowLayout:(UICollectionViewFlowLayout *)arg1 ;
-(long long)stickerSize;
-(void)restoreFromState:(id)arg1 ;
-(NSDictionary *)stateRestorationInfo;
-(void)configureStickerView;
-(void)_updateCollectionViewSpecIfNeeded;
-(void)setCellsToAnimate:(NSMutableArray *)arg1 ;
-(void)setStickerCacheQueue:(CKDispatchQueue *)arg1 ;
-(NSMutableArray *)cellsToAnimate;
-(unsigned long long)currentlyAnimatingIndex;
-(void)animateNextCell;
-(void)setCurrentlyAnimatingIndex:(unsigned long long)arg1 ;
-(void)setLayoutSpec:(MSStickerBrowserViewLayoutSpec *)arg1 ;
-(BOOL)isRestoringContentOffset;
-(CGSize)browserSizeToRestoreFrom;
-(CGPoint)restoredContentOffset;
-(void)setIsRestoringContentOffset:(BOOL)arg1 ;
-(id)_stickerAtIndexPath:(id)arg1 ;
-(CKDispatchQueue *)stickerCacheQueue;
-(MSStickerBrowserViewLayoutSpec *)layoutSpec;
-(void)setRestoredContentOffset:(CGPoint)arg1 ;
-(void)setBrowserSizeToRestoreFrom:(CGSize)arg1 ;
-(void)_reloadStickersAtIndexes:(id)arg1 ;
@end

