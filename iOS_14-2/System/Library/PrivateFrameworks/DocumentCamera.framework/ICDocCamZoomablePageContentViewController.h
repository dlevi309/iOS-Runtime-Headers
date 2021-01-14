/*
* Generated on Thursday, January 14, 2021 at 2:27:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DocumentCamera.framework/DocumentCamera
*/

#import <DocumentCamera/DocumentCamera-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <libobjc.A.dylib/ICDocCamZoomablePageContentViewDelegate.h>

@protocol ICDocCamZoomablePageContentDelegate;
@class UIImage, UIImageView, UIScrollView, NSString;

@interface ICDocCamZoomablePageContentViewController : UIViewController <UIScrollViewDelegate, ICDocCamZoomablePageContentViewDelegate> {

	BOOL _shouldSetupScalesInViewDidLayoutSubviews;
	id<ICDocCamZoomablePageContentDelegate> _pageContentDelegate;
	UIImage* _image;
	UIImageView* _imageView;
	unsigned long long _pageIndex;
	UIScrollView* _scrollView;
	CGSize _prevScrollViewSize;

}

@property (nonatomic,retain) UIScrollView * scrollView;                                                       //@synthesize scrollView=_scrollView - In the implementation block
@property (nonatomic,retain) UIImageView * imageView;                                                         //@synthesize imageView=_imageView - In the implementation block
@property (assign,nonatomic) BOOL shouldSetupScalesInViewDidLayoutSubviews;                                   //@synthesize shouldSetupScalesInViewDidLayoutSubviews=_shouldSetupScalesInViewDidLayoutSubviews - In the implementation block
@property (assign,nonatomic) CGSize prevScrollViewSize;                                                       //@synthesize prevScrollViewSize=_prevScrollViewSize - In the implementation block
@property (assign,nonatomic,__weak) id<ICDocCamZoomablePageContentDelegate> pageContentDelegate;              //@synthesize pageContentDelegate=_pageContentDelegate - In the implementation block
@property (nonatomic,retain) UIImage * image;                                                                 //@synthesize image=_image - In the implementation block
@property (assign,nonatomic) unsigned long long pageIndex;                                                    //@synthesize pageIndex=_pageIndex - In the implementation block
@property (nonatomic,readonly) double zoomScale; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)scrollViewDidZoom:(id)arg1 ;
-(void)setImageView:(UIImageView *)arg1 ;
-(double)zoomScale;
-(void)setImage:(UIImage *)arg1 ;
-(id)init;
-(UIImageView *)imageView;
-(void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2 ;
-(id)viewForZoomingInScrollView:(id)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(UIImage *)image;
-(unsigned long long)pageIndex;
-(CGRect)zoomRectForScale:(float)arg1 withCenter:(CGPoint)arg2 ;
-(BOOL)_canShowWhileLocked;
-(void)viewDidLoad;
-(void)setScrollView:(UIScrollView *)arg1 ;
-(void)setPageIndex:(unsigned long long)arg1 ;
-(BOOL)accessibilityPerformEscape;
-(UIScrollView *)scrollView;
-(void)viewDidLayoutSubviews;
-(void)resetZoom;
-(void)setupAccessibility;
-(void)setPageContentDelegate:(id<ICDocCamZoomablePageContentDelegate>)arg1 ;
-(void)resetImageCentering;
-(void)setPrevScrollViewSize:(CGSize)arg1 ;
-(void)setShouldSetupScalesInViewDidLayoutSubviews:(BOOL)arg1 ;
-(void)singleTap;
-(void)doubleTap:(id)arg1 ;
-(void)view:(id)arg1 setCenter:(CGPoint)arg2 ;
-(BOOL)shouldSetupScalesInViewDidLayoutSubviews;
-(id<ICDocCamZoomablePageContentDelegate>)pageContentDelegate;
-(void)setupScales;
-(CGSize)prevScrollViewSize;
-(void)pageContentViewDidPencilDown;
@end

