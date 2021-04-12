/*
* Generated on Monday, March 1, 2021 at 2:31:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <UIKit/UIGestureRecognizerDelegatePrivate.h>

@protocol SKUISlideshowItemViewControllerDelegate;
@class SKUIClientContext, UIView, SKUISlideshowImageScrollView, UIImage, NSString;

@interface SKUISlideshowItemViewController : UIViewController <UIScrollViewDelegate, UIGestureRecognizerDelegatePrivate> {

	SKUIClientContext* _clientContext;
	UIView* _loadingView;
	BOOL _zoomingGestureThresholdBroken;
	CGPoint _lastContentOffset;
	double _lastZoomScale;
	id<SKUISlideshowItemViewControllerDelegate> _delegate;
	SKUISlideshowImageScrollView* _imageScrollView;
	long long _indexInCollection;

}

@property (nonatomic,retain) SKUIClientContext * clientContext;                                        //@synthesize clientContext=_clientContext - In the implementation block
@property (assign,nonatomic,__weak) id<SKUISlideshowItemViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) SKUISlideshowImageScrollView * imageScrollView;                         //@synthesize imageScrollView=_imageScrollView - In the implementation block
@property (nonatomic,retain) UIImage * itemImage; 
@property (assign,nonatomic) long long indexInCollection;                                              //@synthesize indexInCollection=_indexInCollection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id<SKUISlideshowItemViewControllerDelegate>)delegate;
-(void)setDelegate:(id<SKUISlideshowItemViewControllerDelegate>)arg1 ;
-(BOOL)_gestureRecognizer:(id)arg1 canPreventGestureRecognizer:(id)arg2 ;
-(BOOL)_gestureRecognizer:(id)arg1 canBePreventedByGestureRecognizer:(id)arg2 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(id)viewForZoomingInScrollView:(id)arg1 ;
-(void)viewDidLoad;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(SKUIClientContext *)clientContext;
-(void)setClientContext:(SKUIClientContext *)arg1 ;
-(long long)indexInCollection;
-(void)setIndexInCollection:(long long)arg1 ;
-(void)setItemImage:(UIImage *)arg1 ;
-(UIImage *)itemImage;
-(id)_newLoadingView;
-(void)_pinchGestureAction:(id)arg1 ;
-(SKUISlideshowImageScrollView *)imageScrollView;
@end

