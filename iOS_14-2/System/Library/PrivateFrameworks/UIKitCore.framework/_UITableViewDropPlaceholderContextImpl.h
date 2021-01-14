/*
* Generated on Thursday, January 14, 2021 at 2:20:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)addAnimations:(/*^block*/id)arg1 ;
-(void)addCompletion:(/*^block*/id)arg1 ;
-(id<_UITableViewPlaceholderContextDelegate>)delegate;
-(void)setRowHeight:(double)arg1 ;
-(UIDragItem *)dragItem;
-(void)setDelegate:(id<_UITableViewPlaceholderContextDelegate>)arg1 ;
-(double)rowHeight;
-(id)initWithDelegate:(id)arg1 dragItem:(id)arg2 reuseIdentifier:(id)arg3 rowHeight:(double)arg4 cellUpdateHandler:(/*^block*/id)arg5 ;
-(void)_setShadowUpdateIdentifier:(id)arg1 ;
-(id)cellUpdateHandler;
-(void)setDragItem:(UIDragItem *)arg1 ;
-(void)setCellUpdateHandler:(id)arg1 ;
-(BOOL)deletePlaceholder;
-(BOOL)commitInsertionWithDataSourceUpdates:(/*^block*/id)arg1 ;
-(id)_shadowUpdateIdentifier;
-(id)_animator;
-(void)_setAnimator:(id)arg1 ;
-(NSString *)reuseIdentifier;
-(void)setReuseIdentifier:(NSString *)arg1 ;
@end

