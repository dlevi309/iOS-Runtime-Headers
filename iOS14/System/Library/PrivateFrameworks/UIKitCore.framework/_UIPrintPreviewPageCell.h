/*
* Generated on Thursday, January 14, 2021 at 2:20:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	CGSize _imageSize;

}

@property (nonatomic,retain) UIImageView * imageView;                            //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) UIView * dimmingView;                               //@synthesize dimmingView=_dimmingView - In the implementation block
@property (assign,nonatomic,__weak) id<PageRangeDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long pageIndex;                                //@synthesize pageIndex=_pageIndex - In the implementation block
@property (assign,nonatomic) CGSize imageSize;                                   //@synthesize imageSize=_imageSize - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setImageView:(UIImageView *)arg1 ;
-(CGSize)imageSize;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIImageView *)imageView;
-(id<PageRangeDelegate>)delegate;
-(void)prepareForReuse;
-(void)setDimmingView:(UIView *)arg1 ;
-(void)addPage:(id)arg1 ;
-(void)handleLongPress:(id)arg1 ;
-(long long)pageIndex;
-(void)setDelegate:(id<PageRangeDelegate>)arg1 ;
-(void)layoutSubviews;
-(id)accessibilityValue;
-(void)removePage:(id)arg1 ;
-(void)setPageIndex:(long long)arg1 ;
-(void)showMenu;
-(id)accessibilityHint;
-(BOOL)accessibilityActivate;
-(void)handleTap:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(id)gestureRecognizers;
-(UIView *)dimmingView;
-(void)setEndPage:(id)arg1 ;
-(void)setImageSize:(CGSize)arg1 ;
-(void)addAllPages:(id)arg1 ;
-(void)setStartPage:(id)arg1 ;
-(BOOL)canModifyPageRange;
-(void)setInRange:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)dealloc;
@end

