/*
* Generated on Thursday, January 14, 2021 at 2:23:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/

#import <AvatarUI/AvatarUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>
#import <libobjc.A.dylib/AVTGroupPicker.h>

@protocol AVTGroupPickerDelegate;
@class NSArray, AVTUIEnvironment, UICollectionView, UICollectionViewFlowLayout, AVTCenteringCollectionViewDelegate, AVTGroupDialMaskingView, NSIndexPath, NSString;

@interface AVTGroupDial : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, AVTGroupPicker> {

	BOOL _isMoving;
	BOOL _hasFinalizedSelection;
	id<AVTGroupPickerDelegate> delegate;
	NSArray* _groupItems;
	AVTUIEnvironment* _environment;
	NSArray* _cachedGroupTitleSizes;
	UICollectionView* _collectionView;
	UICollectionViewFlowLayout* _collectionViewLayout;
	AVTCenteringCollectionViewDelegate* _centeringCollectionViewDelegate;
	unsigned long long _currentScrollDirection;
	long long _currentSelectedItemIndex;
	AVTGroupDialMaskingView* _maskingView;
	NSIndexPath* _shimmeringItemIndexPath;

}

@property (nonatomic,readonly) AVTUIEnvironment * environment;                                                    //@synthesize environment=_environment - In the implementation block
@property (nonatomic,readonly) NSArray * cachedGroupTitleSizes;                                                   //@synthesize cachedGroupTitleSizes=_cachedGroupTitleSizes - In the implementation block
@property (nonatomic,readonly) UICollectionView * collectionView;                                                 //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,retain) UICollectionViewFlowLayout * collectionViewLayout;                                   //@synthesize collectionViewLayout=_collectionViewLayout - In the implementation block
@property (nonatomic,readonly) AVTCenteringCollectionViewDelegate * centeringCollectionViewDelegate;              //@synthesize centeringCollectionViewDelegate=_centeringCollectionViewDelegate - In the implementation block
@property (assign,nonatomic) unsigned long long currentScrollDirection;                                           //@synthesize currentScrollDirection=_currentScrollDirection - In the implementation block
@property (assign,nonatomic) long long currentSelectedItemIndex;                                                  //@synthesize currentSelectedItemIndex=_currentSelectedItemIndex - In the implementation block
@property (assign,nonatomic) BOOL isMoving;                                                                       //@synthesize isMoving=_isMoving - In the implementation block
@property (assign,nonatomic) BOOL hasFinalizedSelection;                                                          //@synthesize hasFinalizedSelection=_hasFinalizedSelection - In the implementation block
@property (nonatomic,retain) AVTGroupDialMaskingView * maskingView;                                               //@synthesize maskingView=_maskingView - In the implementation block
@property (assign,nonatomic) NSIndexPath * shimmeringItemIndexPath;                                               //@synthesize shimmeringItemIndexPath=_shimmeringItemIndexPath - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSArray * groupItems;                                                              //@synthesize groupItems=_groupItems - In the implementation block
@property (assign,nonatomic,__weak) id<AVTGroupPickerDelegate> delegate; 
@property (assign,nonatomic) long long selectedGroupIndex; 
+(double)estimatedContentWidthForTitleSizes:(id)arg1 ;
+(BOOL)shouldScrollGivenTitleSizes:(id)arg1 fittingWidth:(double)arg2 ;
-(void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(id<AVTGroupPickerDelegate>)delegate;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(UICollectionView *)collectionView;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)setDelegate:(id<AVTGroupPickerDelegate>)arg1 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)layoutSubviews;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)reloadData;
-(void)setupDial;
-(void)cacheTitleSizes;
-(void)setupMasking;
-(NSArray *)groupItems;
-(CGSize)cellSizeForItemAtIndex:(long long)arg1 ;
-(NSArray *)cachedGroupTitleSizes;
-(AVTGroupDialMaskingView *)maskingView;
-(AVTCenteringCollectionViewDelegate *)centeringCollectionViewDelegate;
-(long long)currentSelectedItemIndex;
-(void)selectItemAtIndex:(long long)arg1 updateScrollPosition:(BOOL)arg2 animated:(BOOL)arg3 ;
-(void)setSelectedGroupIndex:(long long)arg1 animated:(BOOL)arg2 ;
-(void)setIsMoving:(BOOL)arg1 ;
-(void)setCurrentSelectedItemIndex:(long long)arg1 ;
-(long long)selectedGroupIndex;
-(NSIndexPath *)shimmeringItemIndexPath;
-(void)stopDiscoverability;
-(void)setShimmeringItemIndexPath:(NSIndexPath *)arg1 ;
-(void)updateSelectedState:(BOOL)arg1 forItemAtIndexPath:(id)arg2 animated:(BOOL)arg3 ;
-(BOOL)hasFinalizedSelection;
-(void)setHasFinalizedSelection:(BOOL)arg1 ;
-(void)updateForEndingScroll;
-(id)initWithGroupItems:(id)arg1 environment:(id)arg2 ;
-(void)setSelectedGroupIndex:(long long)arg1 ;
-(void)startDiscoverability;
-(unsigned long long)currentScrollDirection;
-(void)setCurrentScrollDirection:(unsigned long long)arg1 ;
-(void)setMaskingView:(AVTGroupDialMaskingView *)arg1 ;
-(BOOL)isMoving;
-(void)setContentPadding:(double)arg1 ;
-(void)setCollectionViewLayout:(UICollectionViewFlowLayout *)arg1 ;
-(AVTUIEnvironment *)environment;
-(void)scrollViewDidScroll:(id)arg1 ;
-(UICollectionViewFlowLayout *)collectionViewLayout;
@end

