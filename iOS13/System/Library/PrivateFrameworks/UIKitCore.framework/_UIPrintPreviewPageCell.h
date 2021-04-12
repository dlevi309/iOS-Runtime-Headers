/*
* Generated on Monday, March 1, 2021 at 2:30:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol PageRangeDelegate;
@class UILongPressGestureRecognizer, UITapGestureRecognizer, UIImageView, UIView, NSString;

@interface _UIPrintPreviewPageCell : UICollectionViewCell <UIGestureRecognizerDelegate> {

	BOOL _inRange;
	BOOL _menuPresented;
	BOOL _thisCellIsPresentingMenu;
	BOOL _menuHiddenByTapInThisCell;
	UILongPressGestureRecognizer* _longPressRecognizer;
	UITapGestureRecognizer* _tapRecognizer;
	UIImageView* _imageView;
	UIView* _dimmingView;
	id<PageRangeDelegate> _delegate;
	long long _pageIndex;

}

@property (nonatomic,retain) UIImageView * imageView;                            //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) UIView * dimmingView;                               //@synthesize dimmingView=_dimmingView - In the implementation block
@property (assign,nonatomic,__weak) id<PageRangeDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long pageIndex;                                //@synthesize pageIndex=_pageIndex - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id<PageRangeDelegate>)delegate;
-(void)setDelegate:(id<PageRangeDelegate>)arg1 ;
-(void)prepareForReuse;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)accessibilityValue;
-(id)accessibilityHint;
-(BOOL)accessibilityActivate;
-(id)gestureRecognizers;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(UIImageView *)imageView;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(void)setDimmingView:(UIView *)arg1 ;
-(UIView *)dimmingView;
-(void)setImageView:(UIImageView *)arg1 ;
-(void)handleLongPress:(id)arg1 ;
-(void)handleTap:(id)arg1 ;
-(long long)pageIndex;
-(void)addAllPages:(id)arg1 ;
-(void)setStartPage:(id)arg1 ;
-(void)setEndPage:(id)arg1 ;
-(void)addPage:(id)arg1 ;
-(void)removePage:(id)arg1 ;
-(void)showMenu;
-(BOOL)canModifyPageRange;
-(void)setInRange:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setPageIndex:(long long)arg1 ;
@end

