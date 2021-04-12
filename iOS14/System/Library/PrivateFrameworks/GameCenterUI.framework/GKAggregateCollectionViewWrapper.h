/*
* Generated on Thursday, January 14, 2021 at 2:23:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/


#import <GameCenterUI/GameCenterUI-Structs.h>
@class UICollectionView, GKAggregateMapping;

@interface GKAggregateCollectionViewWrapper : NSObject {

	UICollectionView* _wrappedView;
	GKAggregateMapping* _mapping;

}

@property (nonatomic,retain) UICollectionView * wrappedView;              //@synthesize wrappedView=_wrappedView - In the implementation block
@property (nonatomic,retain) GKAggregateMapping * mapping;                //@synthesize mapping=_mapping - In the implementation block
+(id)instanceMethodSignatureForSelector:(SEL)arg1 ;
+(id)wrapperForView:(id)arg1 mapping:(id)arg2 ;
+(BOOL)instancesRespondToSelector:(SEL)arg1 ;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(id)dequeueReusableSupplementaryViewOfKind:(id)arg1 withReuseIdentifier:(id)arg2 forIndexPath:(id)arg3 ;
-(void)setWrappedView:(UICollectionView *)arg1 ;
-(void)_gkRegisterClass:(Class)arg1 forSupplementaryViewOfKind:(id)arg2 ;
-(void)_gkRegisterCellClass:(Class)arg1 ;
-(id)dequeueReusableCellWithReuseIdentifier:(id)arg1 forIndexPath:(id)arg2 ;
-(long long)numberOfItemsInSection:(long long)arg1 ;
-(id)initWithView:(id)arg1 mapping:(id)arg2 ;
-(void)scrollToItemAtIndexPath:(id)arg1 atScrollPosition:(unsigned long long)arg2 animated:(BOOL)arg3 ;
-(id)_gkDequeueSupplementaryViewForClass:(Class)arg1 ofKind:(id)arg2 forIndexPath:(id)arg3 ;
-(id)valueForUndefinedKey:(id)arg1 ;
-(void)selectItemAtIndexPath:(id)arg1 animated:(BOOL)arg2 scrollPosition:(unsigned long long)arg3 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(id)indexPathsForSelectedItems;
-(id)_gkDequeueCellForClass:(Class)arg1 forIndexPath:(id)arg2 ;
-(void)insertSections:(id)arg1 ;
-(void)setMapping:(GKAggregateMapping *)arg1 ;
-(void)_gkPerformWithoutViewReuse:(/*^block*/id)arg1 ;
-(void)reloadSections:(id)arg1 ;
-(void)deleteSections:(id)arg1 ;
-(void)insertItemsAtIndexPaths:(id)arg1 ;
-(void)reloadItemsAtIndexPaths:(id)arg1 ;
-(void)deleteItemsAtIndexPaths:(id)arg1 ;
-(void)moveSection:(long long)arg1 toSection:(long long)arg2 ;
-(void)moveItemAtIndexPath:(id)arg1 toIndexPath:(id)arg2 ;
-(GKAggregateMapping *)mapping;
-(id)indexPathForItemAtPoint:(CGPoint)arg1 ;
-(id)indexPathForCell:(id)arg1 ;
-(id)indexPathsForVisibleItems;
-(id)layoutAttributesForSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(UICollectionView *)wrappedView;
-(id)cellForItemAtIndexPath:(id)arg1 ;
-(void)deselectItemAtIndexPath:(id)arg1 animated:(BOOL)arg2 ;
-(void)dealloc;
@end

