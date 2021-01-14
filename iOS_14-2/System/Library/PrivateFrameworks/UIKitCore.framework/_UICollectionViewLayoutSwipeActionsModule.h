/*
* Generated on Thursday, January 14, 2021 at 2:20:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKit/UISwipeActionHost_Internal.h>

@class UICollectionViewLayout, UISwipeActionController, NSString;

@interface _UICollectionViewLayoutSwipeActionsModule : NSObject <UISwipeActionHost_Internal> {

	BOOL _layoutUpdatePending;
	UICollectionViewLayout* _host;
	UISwipeActionController* _swipeActionController;

}

@property (assign,nonatomic,__weak) UICollectionViewLayout * host;                         //@synthesize host=_host - In the implementation block
@property (nonatomic,retain) UISwipeActionController * swipeActionController;              //@synthesize swipeActionController=_swipeActionController - In the implementation block
@property (assign,nonatomic) BOOL layoutUpdatePending;                                     //@synthesize layoutUpdatePending=_layoutUpdatePending - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setHost:(UICollectionViewLayout *)arg1 ;
-(UICollectionViewLayout *)host;
-(id)itemContainerViewForSwipeActionController:(id)arg1 ;
-(BOOL)swipeActionController:(id)arg1 mayBeginSwipeForItemAtIndexPath:(id)arg2 ;
-(id)gestureRecognizerViewForSwipeActionController:(id)arg1 ;
-(id)propertyAnimatorForCollectionViewUpdates:(id)arg1 withCustomAnimator:(id)arg2 ;
-(void)swipeActionController:(id)arg1 didBeginSwipeForItemAtIndexPath:(id)arg2 ;
-(void)transformDecorationLayoutAttributes:(id)arg1 isDisappearing:(BOOL)arg2 ;
-(UIEdgeInsets)swipeActionController:(id)arg1 extraInsetsForItemAtIndexPath:(id)arg2 ;
-(void)transformCellLayoutAttributes:(id)arg1 isDisappearing:(BOOL)arg2 ;
-(id)swipeActionController:(id)arg1 viewForItemAtIndexPath:(id)arg2 ;
-(id)swipeActionController:(id)arg1 leadingSwipeConfigurationForItemAtIndexPath:(id)arg2 ;
-(id)initWithHost:(id)arg1 ;
-(long long)layoutDirectionForSwipeActionController:(id)arg1 ;
-(BOOL)hasActiveSwipe;
-(void)processLayoutInvalidationWithContext:(id)arg1 ;
-(void)updateWithUpdateItems:(id)arg1 ;
-(void)teardown;
-(void)editingStateDidChange;
-(id)swipeActionController:(id)arg1 indexPathForTouchLocation:(CGPoint)arg2 ;
-(BOOL)_canSwipeItemAtIndexPath:(id)arg1 ;
-(void)swipeItemAtIndexPath:(id)arg1 direction:(unsigned long long)arg2 animated:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)_updateSwipeActionsConfiguration:(id)arg1 forIndexPath:(id)arg2 ;
-(id)_cellWithCustomGroupingAtIndexPath:(id)arg1 ;
-(void)_invalidateSwipeActionsLayout;
-(BOOL)layoutUpdatePending;
-(UISwipeActionController *)swipeActionController;
-(void)swipeActionController:(id)arg1 insertActionsView:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(void)swipeActionController:(id)arg1 cleanupActionsView:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(id)swipeViewManipulatorForSwipeActionController:(id)arg1 ;
-(void)swipeActionController:(id)arg1 swipeOccurrence:(id)arg2 didChangeStateFrom:(long long)arg3 to:(long long)arg4 ;
-(void)setSwipeActionController:(UISwipeActionController *)arg1 ;
-(void)setLayoutUpdatePending:(BOOL)arg1 ;
-(void)revealTrailingSwipeActionsForIndexPath:(id)arg1 ;
-(void)swipeActionController:(id)arg1 willBeginSwipeForItemAtIndexPath:(id)arg2 ;
-(id)swipeActionController:(id)arg1 trailingSwipeConfigurationForItemAtIndexPath:(id)arg2 ;
-(void)swipeActionController:(id)arg1 didEndSwipeForItemAtIndexPath:(id)arg2 ;
@end

