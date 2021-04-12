/*
* Generated on Thursday, January 14, 2021 at 2:20:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKit/UIDragAnimating.h>

@class UIDragItem, NSMutableArray, NSString;

@interface _UITableViewDropAnimation : NSObject <UIDragAnimating> {

	BOOL _didBeginAnimation;
	UIDragItem* _dragItem;
	NSMutableArray* _animationsBlocks;
	NSMutableArray* _completionBlocks;

}

@property (nonatomic,retain) UIDragItem * dragItem;                                                                       //@synthesize dragItem=_dragItem - In the implementation block
@property (nonatomic,retain) NSMutableArray * animationsBlocks;                                                           //@synthesize animationsBlocks=_animationsBlocks - In the implementation block
@property (nonatomic,retain) NSMutableArray * completionBlocks;                                                           //@synthesize completionBlocks=_completionBlocks - In the implementation block
@property (assign,setter=_setDidBeginAnimation:,getter=_didBeginAnimation,nonatomic) BOOL didBeginAnimation;              //@synthesize didBeginAnimation=_didBeginAnimation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSMutableArray *)completionBlocks;
-(void)addAnimations:(/*^block*/id)arg1 ;
-(void)addCompletion:(/*^block*/id)arg1 ;
-(void)setCompletionBlocks:(NSMutableArray *)arg1 ;
-(UIDragItem *)dragItem;
-(id)initWithDragItem:(id)arg1 ;
-(BOOL)_didBeginAnimation;
-(NSMutableArray *)animationsBlocks;
-(void)_executeCompletionBlocks;
-(void)_addClientBlocksToAnimator:(id)arg1 ;
-(void)_setDidBeginAnimation:(BOOL)arg1 ;
-(void)setAnimationsBlocks:(NSMutableArray *)arg1 ;
-(void)setDragItem:(UIDragItem *)arg1 ;
@end

