/*
* Generated on Monday, March 1, 2021 at 2:34:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/

#import <CameraEffectsKit/CameraEffectsKit-Structs.h>
#import <CameraEffectsKit/CFXEffectPickerView.h>

@protocol CFXFilterEffectPickerViewDataSource, CFXFilterEffectPickerViewDelegate;
@class UIView, JTCollectionView, JTCollectionViewFlowLayout, UILabel, UISelectionFeedbackGenerator, NSIndexPath;

@interface CFXFilterEffectPickerView : CFXEffectPickerView {

	BOOL _displayExpandedLayout;
	id<CFXFilterEffectPickerViewDataSource> dataSource;
	id<CFXFilterEffectPickerViewDelegate> delegate;
	UIView* _contentView;
	JTCollectionView* _collectionView;
	JTCollectionViewFlowLayout* _collectionViewLayout;
	UIView* _compactSelectionView;
	UILabel* _compactSelectedTitleView;
	unsigned long long _cachedEffectCount;
	UISelectionFeedbackGenerator* _selectionFeedbackGenerator;
	NSIndexPath* _lastScrollIndexPath;
	CGSize _lastViewSize;
	CGPoint _previousScrollOffset;

}

@property (assign,nonatomic,__weak) UIView * contentView;                                               //@synthesize contentView=_contentView - In the implementation block
@property (assign,nonatomic,__weak) JTCollectionView * collectionView;                                  //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,retain) JTCollectionViewFlowLayout * collectionViewLayout;                         //@synthesize collectionViewLayout=_collectionViewLayout - In the implementation block
@property (nonatomic,retain) UIView * compactSelectionView;                                             //@synthesize compactSelectionView=_compactSelectionView - In the implementation block
@property (nonatomic,retain) UILabel * compactSelectedTitleView;                                        //@synthesize compactSelectedTitleView=_compactSelectedTitleView - In the implementation block
@property (assign,nonatomic) unsigned long long cachedEffectCount;                                      //@synthesize cachedEffectCount=_cachedEffectCount - In the implementation block
@property (assign,getter=isDisplayingExpandedLayout,nonatomic) BOOL displayExpandedLayout;              //@synthesize displayExpandedLayout=_displayExpandedLayout - In the implementation block
@property (assign,nonatomic) CGSize lastViewSize;                                                       //@synthesize lastViewSize=_lastViewSize - In the implementation block
@property (nonatomic,retain) UISelectionFeedbackGenerator * selectionFeedbackGenerator;                 //@synthesize selectionFeedbackGenerator=_selectionFeedbackGenerator - In the implementation block
@property (nonatomic,retain) NSIndexPath * lastScrollIndexPath;                                         //@synthesize lastScrollIndexPath=_lastScrollIndexPath - In the implementation block
@property (assign,nonatomic) CGPoint previousScrollOffset;                                              //@synthesize previousScrollOffset=_previousScrollOffset - In the implementation block
@property (assign,nonatomic,__weak) id<CFXFilterEffectPickerViewDataSource> dataSource; 
@property (assign,nonatomic,__weak) id<CFXFilterEffectPickerViewDelegate> delegate; 
-(id<CFXFilterEffectPickerViewDelegate>)delegate;
-(void)setDelegate:(id<CFXFilterEffectPickerViewDelegate>)arg1 ;
-(id<CFXFilterEffectPickerViewDataSource>)dataSource;
-(void)setDataSource:(id<CFXFilterEffectPickerViewDataSource>)arg1 ;
-(UIView *)contentView;
-(void)setContentView:(UIView *)arg1 ;
-(void)layoutSubviews;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(JTCollectionView *)collectionView;
-(void)setCollectionViewLayout:(JTCollectionViewFlowLayout *)arg1 ;
-(void)reloadData;
-(void)setCollectionView:(JTCollectionView *)arg1 ;
-(JTCollectionViewFlowLayout *)collectionViewLayout;
-(unsigned long long)selectedIndex;
-(UISelectionFeedbackGenerator *)selectionFeedbackGenerator;
-(void)setSelectionFeedbackGenerator:(UISelectionFeedbackGenerator *)arg1 ;
-(void)configureCell:(id)arg1 ;
-(BOOL)isDisplayingExpandedLayout;
-(BOOL)isDisplayingCompactLayout;
-(void)subviewsDidLoad;
-(void)buildCompactSelectionViews;
-(void)removeCompactSelectionViews;
-(void)setCompactSelectionView:(UIView *)arg1 ;
-(UIView *)compactSelectionView;
-(void)setCompactSelectedTitleView:(UILabel *)arg1 ;
-(UILabel *)compactSelectedTitleView;
-(CGSize)lastViewSize;
-(void)setLastViewSize:(CGSize)arg1 ;
-(void)setDisplayExpandedLayout:(BOOL)arg1 ;
-(void)CFX_selectInitialItem;
-(void)configureCollectionViewLayout;
-(void)setCachedEffectCount:(unsigned long long)arg1 ;
-(void)updatePreviewEffectsWhenReloadComplete;
-(id)indexPathForCenterOfCollectionView;
-(void)setLastScrollIndexPath:(NSIndexPath *)arg1 ;
-(void)setPreviousScrollOffset:(CGPoint)arg1 ;
-(void)didScrollCollectionView;
-(id)layoutAttributesForNearestItemToCenterWithOffset:(CGPoint)arg1 ;
-(NSIndexPath *)lastScrollIndexPath;
-(CGPoint)previousScrollOffset;
-(void)CFX_updateTitleForCenterItemAtIndex:(long long)arg1 ;
-(void)selectCenterItem;
-(void)CFX_selectItemAtCellIndex:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(id)effectPickerNibName;
-(id)effectPickerCellNibName;
-(id)effectPickerCellReuseIdentifier;
-(void)didSelectItemAtCellIndex:(unsigned long long)arg1 ;
-(void)selectEffectWithIdentifier:(id)arg1 ;
-(void)orientationDidChange;
-(unsigned long long)cachedEffectCount;
@end

