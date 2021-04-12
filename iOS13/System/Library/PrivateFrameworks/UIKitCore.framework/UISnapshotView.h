/*
* Generated on Monday, March 1, 2021 at 2:30:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UIColor, UIView, NSMutableArray, UIImageView;

@interface UISnapshotView : UIView {

	CGSize _contentSize;
	UIEdgeInsets _contentBeyondBounds;
	UIEdgeInsets _edgePadding;
	UIEdgeInsets _edgeInsets;
	CGPoint _contentOffset;
	UIColor* _edgePaddingColor;
	UIView* _imageView;
	NSMutableArray* _edgePaddingViews;
	CGRect _snapshotRect;
	UIImageView* _shadowView;
	unsigned _disableEdgeAntialiasing : 1;
	unsigned _disableVerticalStretch : 1;

}

@property (assign,nonatomic) UIEdgeInsets edgePadding;                                                           //@synthesize edgePadding=_edgePadding - In the implementation block
@property (nonatomic,retain) UIColor * edgePaddingColor;                                                         //@synthesize edgePaddingColor=_edgePaddingColor - In the implementation block
@property (getter=_snapshotView,nonatomic,readonly) UIView * snapshotView;                                       //@synthesize imageView=_imageView - In the implementation block
@property (getter=_contentSize,nonatomic,readonly) CGSize contentSize;                                           //@synthesize contentSize=_contentSize - In the implementation block
@property (assign,setter=_setContentOffset:,getter=_contentOffset,nonatomic) CGPoint contentOffset;              //@synthesize contentOffset=_contentOffset - In the implementation block
@property (assign,nonatomic) UIEdgeInsets edgeInsets;                                                            //@synthesize edgeInsets=_edgeInsets - In the implementation block
@property (assign,getter=isVerticalStretchEnabled,nonatomic) BOOL verticalStretchEnabled; 
@property (assign,setter=_setSnapshotRect:,getter=_snapshotRect,nonatomic) CGRect snapshotRect; 
@property (nonatomic,retain) UIView * shadowView;                                                                //@synthesize shadowView=_shadowView - In the implementation block
@property (assign,getter=isEdgeAntialiasingEnabled,nonatomic) BOOL edgeAntialiasingEnabled; 
-(void)dealloc;
-(void)setBounds:(CGRect)arg1 ;
-(CGSize)_contentSize;
-(void)setFrame:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setEdgeInsets:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)edgeInsets;
-(UIView *)shadowView;
-(void)captureSnapshotOfView:(id)arg1 withSnapshotType:(int)arg2 ;
-(UIEdgeInsets)edgePadding;
-(void)setVerticalStretchEnabled:(BOOL)arg1 ;
-(id)_snapshotView;
-(void)setShadowView:(UIView *)arg1 ;
-(void)_setContentOffset:(CGPoint)arg1 ;
-(void)setEdgePadding:(UIEdgeInsets)arg1 ;
-(void)setEdgePaddingColor:(UIColor *)arg1 ;
-(void)captureSnapshotRect:(CGRect)arg1 fromView:(id)arg2 withSnapshotType:(int)arg3 ;
-(CGPoint)_contentOffset;
-(CGRect)_snapshotRect;
-(void)setEdgeAntialiasingEnabled:(BOOL)arg1 ;
-(void)_positionImageView;
-(void)setContentStretch:(CGRect)arg1 ;
-(UIEdgeInsets)_edgePadding;
-(void)_updateContentsRect;
-(void)_addEdgePaddingViewInRect:(CGRect)arg1 ;
-(void)_drawEdges:(UIEdgeInsets)arg1 withContentSize:(CGSize)arg2 ;
-(CGRect)_contentsCenterForEdgePadding:(UIEdgeInsets)arg1 withContentSize:(CGSize)arg2 ;
-(BOOL)isEdgeAntialiasingEnabled;
-(BOOL)isVerticalStretchEnabled;
-(void)_setSnapshotRect:(CGRect)arg1 ;
-(UIColor *)edgePaddingColor;
@end

