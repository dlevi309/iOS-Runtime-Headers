/*
* Generated on Monday, March 1, 2021 at 2:30:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UITableViewPlaceholderContext.h>

@protocol UIDragAnimating, _UITableViewPlaceholderContextDelegate;
@class NSString, NSUUID, UIDragItem;

@interface _UITableViewDropPlaceholderContextImpl : NSObject <_UITableViewPlaceholderContext> {

	NSString* _reuseIdentifier;
	double _rowHeight;
	/*^block*/id _cellUpdateHandler;
	id<UIDragAnimating> _animator;
	NSUUID* _shadowUpdateIdentifier;
	id<_UITableViewPlaceholderContextDelegate> _delegate;
	UIDragItem* _dragItem;

}

@property (assign,nonatomic,__weak) id<_UITableViewPlaceholderContextDelegate> delegate;                                                     //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIDragItem * dragItem;                                                                                          //@synthesize dragItem=_dragItem - In the implementation block
@property (nonatomic,retain) NSString * reuseIdentifier;                                                                                     //@synthesize reuseIdentifier=_reuseIdentifier - In the implementation block
@property (assign,nonatomic) double rowHeight;                                                                                               //@synthesize rowHeight=_rowHeight - In the implementation block
@property (nonatomic,copy) id cellUpdateHandler;                                                                                             //@synthesize cellUpdateHandler=_cellUpdateHandler - In the implementation block
@property (setter=_setAnimator:,getter=_animator,nonatomic,retain) id<UIDragAnimating> animator;                                             //@synthesize animator=_animator - In the implementation block
@property (setter=_setShadowUpdateIdentifier:,getter=_shadowUpdateIdentifier,nonatomic,retain) NSUUID * shadowUpdateIdentifier;              //@synthesize shadowUpdateIdentifier=_shadowUpdateIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<_UITableViewPlaceholderContextDelegate>)delegate;
-(void)setDelegate:(id<_UITableViewPlaceholderContextDelegate>)arg1 ;
-(void)addAnimations:(/*^block*/id)arg1 ;
-(void)addCompletion:(/*^block*/id)arg1 ;
-(double)rowHeight;
-(NSString *)reuseIdentifier;
-(void)setRowHeight:(double)arg1 ;
-(id)_animator;
-(UIDragItem *)dragItem;
-(id)cellUpdateHandler;
-(void)setCellUpdateHandler:(id)arg1 ;
-(BOOL)commitInsertionWithDataSourceUpdates:(/*^block*/id)arg1 ;
-(BOOL)deletePlaceholder;
-(void)setReuseIdentifier:(NSString *)arg1 ;
-(void)setDragItem:(UIDragItem *)arg1 ;
-(id)_shadowUpdateIdentifier;
-(void)_setAnimator:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 dragItem:(id)arg2 reuseIdentifier:(id)arg3 rowHeight:(double)arg4 cellUpdateHandler:(/*^block*/id)arg5 ;
-(void)_setShadowUpdateIdentifier:(id)arg1 ;
@end

