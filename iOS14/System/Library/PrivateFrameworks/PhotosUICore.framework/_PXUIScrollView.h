/*
* Generated on Thursday, January 14, 2021 at 2:22:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIScrollView.h>

@protocol PXUIScrollViewDelegate, _PXUIScrollViewFocusItemProvider;
@interface _PXUIScrollView : UIScrollView {

	BOOL _deferContentOffsetUpdates;
	BOOL _respectsContentZOrder;
	id<PXUIScrollViewDelegate> _px_delegate;
	id<_PXUIScrollViewFocusItemProvider> _focusItemProvider;
	CGPoint _pagingOriginOffset;

}

@property (assign,setter=px_setDelegate:,nonatomic,__weak) id<PXUIScrollViewDelegate> px_delegate;              //@synthesize px_delegate=_px_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<_PXUIScrollViewFocusItemProvider> focusItemProvider;                     //@synthesize focusItemProvider=_focusItemProvider - In the implementation block
@property (assign,nonatomic) CGPoint pagingOriginOffset;                                                        //@synthesize pagingOriginOffset=_pagingOriginOffset - In the implementation block
@property (assign,nonatomic) BOOL deferContentOffsetUpdates;                                                    //@synthesize deferContentOffsetUpdates=_deferContentOffsetUpdates - In the implementation block
@property (assign,nonatomic) BOOL respectsContentZOrder;                                                        //@synthesize respectsContentZOrder=_respectsContentZOrder - In the implementation block
-(void)setContentOffset:(CGPoint)arg1 animated:(BOOL)arg2 ;
-(id)focusItemsInRect:(CGRect)arg1 ;
-(id<PXUIScrollViewDelegate>)px_delegate;
-(BOOL)deferContentOffsetUpdates;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setFocusItemProvider:(id<_PXUIScrollViewFocusItemProvider>)arg1 ;
-(void)px_setDelegate:(id)arg1 ;
-(void)scrollRectToVisible:(CGRect)arg1 animated:(BOOL)arg2 ;
-(void)layoutSubviews;
-(id<_PXUIScrollViewFocusItemProvider>)focusItemProvider;
-(void)setDeferContentOffsetUpdates:(BOOL)arg1 ;
-(void)_updatePagingOrigin;
-(CGPoint)pagingOriginOffset;
-(void)setPagingOriginOffset:(CGPoint)arg1 ;
-(void)setRespectsContentZOrder:(BOOL)arg1 ;
-(BOOL)respectsContentZOrder;
-(void)px_addSubview:(id)arg1 ;
@end

