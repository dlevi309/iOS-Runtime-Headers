/*
* Generated on Thursday, January 14, 2021 at 2:20:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKit/UIDragAnimating.h>

@class NSIndexPath, UIDragItem, UIDragPreviewTarget, _UIDropAnimationHandlers, NSString;

@interface _UICollectionViewDropCoordinatorItem : NSObject <UIDragAnimating> {

	BOOL _shouldRemainInHierarchy;
	int _kind;
	NSIndexPath* _destinationIndexPath;
	UIDragItem* _dragItem;
	UIDragPreviewTarget* _target;
	_UIDropAnimationHandlers* _animationHandlers;
	/*^block*/id _previewParametersProvider;

}

@property (assign,nonatomic,__weak) UIDragItem * dragItem;                              //@synthesize dragItem=_dragItem - In the implementation block
@property (nonatomic,copy) UIDragPreviewTarget * target;                                //@synthesize target=_target - In the implementation block
@property (assign,nonatomic) int kind;                                                  //@synthesize kind=_kind - In the implementation block
@property (nonatomic,retain) _UIDropAnimationHandlers * animationHandlers;              //@synthesize animationHandlers=_animationHandlers - In the implementation block
@property (nonatomic,copy) id previewParametersProvider;                                //@synthesize previewParametersProvider=_previewParametersProvider - In the implementation block
@property (nonatomic,retain) NSIndexPath * destinationIndexPath;                        //@synthesize destinationIndexPath=_destinationIndexPath - In the implementation block
@property (assign,nonatomic) BOOL shouldRemainInHierarchy;                              //@synthesize shouldRemainInHierarchy=_shouldRemainInHierarchy - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setTarget:(UIDragPreviewTarget *)arg1 ;
-(id)initWithDestinationIndexPath:(id)arg1 dragItem:(id)arg2 placeholderConfiguration:(id)arg3 ;
-(void)addAnimations:(/*^block*/id)arg1 ;
-(void)addCompletion:(/*^block*/id)arg1 ;
-(UIDragItem *)dragItem;
-(int)kind;
-(NSString *)description;
-(void)setKind:(int)arg1 ;
-(NSIndexPath *)destinationIndexPath;
-(BOOL)shouldRemainInHierarchy;
-(void)setDestinationIndexPath:(NSIndexPath *)arg1 ;
-(void)setDragItem:(UIDragItem *)arg1 ;
-(id)initWithDestinationIndexPath:(id)arg1 dragItem:(id)arg2 ;
-(void)setShouldRemainInHierarchy:(BOOL)arg1 ;
-(id)initWithDragItem:(id)arg1 target:(id)arg2 ;
-(void)setAnimationHandlers:(_UIDropAnimationHandlers *)arg1 ;
-(id)previewParametersProvider;
-(void)setPreviewParametersProvider:(id)arg1 ;
-(UIDragPreviewTarget *)target;
-(_UIDropAnimationHandlers *)animationHandlers;
@end

