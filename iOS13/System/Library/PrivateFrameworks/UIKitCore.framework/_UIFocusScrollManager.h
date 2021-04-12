/*
* Generated on Monday, March 1, 2021 at 2:30:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class UIScreen, _UIFocusDisplayLinkScrollAnimator, NSHashTable;

@interface _UIFocusScrollManager : NSObject {

	UIScreen* _screen;
	_UIFocusDisplayLinkScrollAnimator* _scrollAnimator;
	NSHashTable* _activelyScrollingContainers;

}

@property (nonatomic,readonly) _UIFocusDisplayLinkScrollAnimator * scrollAnimator;              //@synthesize scrollAnimator=_scrollAnimator - In the implementation block
@property (nonatomic,readonly) NSHashTable * activelyScrollingContainers;                       //@synthesize activelyScrollingContainers=_activelyScrollingContainers - In the implementation block
@property (nonatomic,__weak,readonly) UIScreen * screen;                                        //@synthesize screen=_screen - In the implementation block
-(UIScreen *)screen;
-(BOOL)isScrollingScrollableContainer:(id)arg1 ;
-(CGPoint)contentOffsetForScrollableContainer:(id)arg1 toShowRect:(CGRect)arg2 targetOffset:(CGPoint)arg3 targetBounds:(CGRect)arg4 ;
-(CGPoint)targetContentOffsetForScrollableContainer:(id)arg1 ;
-(void)cancelScrollingForScrollableContainer:(id)arg1 ;
-(void)animateOffsetOfScrollableContainer:(id)arg1 toShowFocusItem:(id)arg2 ;
-(void)performScrollingIfNeededForFocusUpdateInContext:(id)arg1 ;
-(id)initWithScreen:(id)arg1 ;
-(CGPoint)currentVelocityForScrollableContainer:(id)arg1 ;
-(CGPoint)_contentOffsetForScrollableContainer:(id)arg1 toShowFocusItemWithInfo:(id)arg2 ;
-(void)_ensureFocusItemIsOnscreen:(id)arg1 inScrollableContainer:(id)arg2 ;
-(void)_scrollToFocusItemWithInfo:(id)arg1 offset:(CGPoint)arg2 inScrollableContainer:(id)arg3 ;
-(CGPoint)_contentOffsetForScrollableContainer:(id)arg1 toShowFocusItemWithInfo:(id)arg2 itemFrame:(CGRect)arg3 targetOffset:(CGPoint)arg4 targetBounds:(CGRect)arg5 ;
-(CGPoint)_contentOffsetForPagingContainer:(id)arg1 itemFrame:(CGRect)arg2 targetOffset:(CGPoint)arg3 ;
-(CGPoint)_contentOffsetForNonPagingContainer:(id)arg1 toShowFocusItemWithInfo:(id)arg2 itemFrame:(CGRect)arg3 targetOffset:(CGPoint)arg4 targetBounds:(CGRect)arg5 ;
-(CGPoint)contentOffsetForScrollableContainer:(id)arg1 toShowFocusItem:(id)arg2 targetOffset:(CGPoint)arg3 targetBounds:(CGRect)arg4 ;
-(_UIFocusDisplayLinkScrollAnimator *)scrollAnimator;
-(NSHashTable *)activelyScrollingContainers;
@end

