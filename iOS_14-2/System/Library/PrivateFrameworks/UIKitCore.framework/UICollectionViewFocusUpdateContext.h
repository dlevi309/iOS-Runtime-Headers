/*
* Generated on Thursday, January 14, 2021 at 2:20:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIFocusUpdateContext.h>

@class NSIndexPath, UICollectionView;

@interface UICollectionViewFocusUpdateContext : UIFocusUpdateContext {

	BOOL _didSetPreviouslyFocusedIndexPath;
	BOOL _didSetNextFocusedIndexPath;
	NSIndexPath* _previouslyFocusedIndexPath;
	NSIndexPath* _nextFocusedIndexPath;
	UICollectionView* _collectionView;

}

@property (nonatomic,__weak,readonly) UICollectionView * collectionView;              //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,readonly) NSIndexPath * previouslyFocusedIndexPath;              //@synthesize previouslyFocusedIndexPath=_previouslyFocusedIndexPath - In the implementation block
@property (nonatomic,readonly) NSIndexPath * nextFocusedIndexPath;                    //@synthesize nextFocusedIndexPath=_nextFocusedIndexPath - In the implementation block
+(id)_contextWithContext:(id)arg1 collectionView:(id)arg2 cachedPreviouslyFocusedIndexPath:(id)arg3 ;
+(id)_contextWithContext:(id)arg1 collectionView:(id)arg2 ;
-(id)_initWithContext:(id)arg1 collectionView:(id)arg2 cachedPreviouslyFocusedIndexPath:(id)arg3 ;
-(UICollectionView *)collectionView;
-(NSIndexPath *)nextFocusedIndexPath;
-(NSIndexPath *)previouslyFocusedIndexPath;
@end

