/*
* Generated on Monday, March 1, 2021 at 2:30:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKit/UICollectionViewPlaceholderContext.h>
#import <UIKitCore/_UICollectionViewDropPlaceholderContext.h>

@protocol _UICollectionViewPlaceholderContextDelegate;
@class NSUUID, NSString, NSIndexPath, _UIDropAnimationHandlers, UIDragItem;

@interface _UICollectionViewPlaceholderContext : NSObject <UICollectionViewPlaceholderContext, _UICollectionViewDropPlaceholderContext> {

	NSUUID* _shadowUpdateIdentifier;
	NSString* _reuseIdentifier;
	NSIndexPath* _originalInsertionIndexPath;
	/*^block*/id _cellUpdateHandler;
	_UIDropAnimationHandlers* _animationHandlers;
	id<_UICollectionViewPlaceholderContextDelegate> _delegate;
	UIDragItem* _dragItem;

}

@property (assign,nonatomic,__weak) id<_UICollectionViewPlaceholderContextDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIDragItem * dragItem;                                                        //@synthesize dragItem=_dragItem - In the implementation block
@property (nonatomic,retain) _UIDropAnimationHandlers * animationHandlers;                                 //@synthesize animationHandlers=_animationHandlers - In the implementation block
@property (nonatomic,retain) NSUUID * shadowUpdateIdentifier;                                              //@synthesize shadowUpdateIdentifier=_shadowUpdateIdentifier - In the implementation block
@property (nonatomic,retain) NSString * reuseIdentifier;                                                   //@synthesize reuseIdentifier=_reuseIdentifier - In the implementation block
@property (nonatomic,retain) NSIndexPath * originalInsertionIndexPath;                                     //@synthesize originalInsertionIndexPath=_originalInsertionIndexPath - In the implementation block
@property (nonatomic,copy) id cellUpdateHandler;                                                           //@synthesize cellUpdateHandler=_cellUpdateHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(id<_UICollectionViewPlaceholderContextDelegate>)delegate;
-(void)setDelegate:(id<_UICollectionViewPlaceholderContextDelegate>)arg1 ;
-(void)addAnimations:(/*^block*/id)arg1 ;
-(void)addCompletion:(/*^block*/id)arg1 ;
-(NSString *)reuseIdentifier;
-(UIDragItem *)dragItem;
-(NSUUID *)shadowUpdateIdentifier;
-(NSIndexPath *)originalInsertionIndexPath;
-(id)cellUpdateHandler;
-(_UIDropAnimationHandlers *)animationHandlers;
-(id)initWithOriginalInsertionIndexPath:(id)arg1 dragItem:(id)arg2 reuseIdentifier:(id)arg3 delegate:(id)arg4 cellUpdateHandler:(/*^block*/id)arg5 ;
-(void)setShadowUpdateIdentifier:(NSUUID *)arg1 ;
-(void)setCellUpdateHandler:(id)arg1 ;
-(BOOL)commitInsertionWithDataSourceUpdates:(/*^block*/id)arg1 ;
-(BOOL)deletePlaceholder;
-(void)setNeedsCellUpdate;
-(void)setReuseIdentifier:(NSString *)arg1 ;
-(void)setOriginalInsertionIndexPath:(NSIndexPath *)arg1 ;
-(void)setAnimationHandlers:(_UIDropAnimationHandlers *)arg1 ;
-(void)setDragItem:(UIDragItem *)arg1 ;
@end

