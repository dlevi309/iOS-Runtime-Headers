/*
* Generated on Monday, March 1, 2021 at 2:32:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/

#import <UIKitCore/UIViewController.h>
#import <UIKit/UIScrollViewDelegate.h>

@class UIImage, UIScrollView, UIImageView, NSString;

@interface PKRecognitionDrawingPreviewViewController : UIViewController <UIScrollViewDelegate> {

	UIImage* _drawingImage;
	UIScrollView* _scrollView;
	UIImageView* _imageView;

}

@property (nonatomic,retain) UIImage * drawingImage;                 //@synthesize drawingImage=_drawingImage - In the implementation block
@property (nonatomic,retain) UIScrollView * scrollView;              //@synthesize scrollView=_scrollView - In the implementation block
@property (nonatomic,retain) UIImageView * imageView;                //@synthesize imageView=_imageView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIImageView *)imageView;
-(void)scrollViewDidZoom:(id)arg1 ;
-(id)viewForZoomingInScrollView:(id)arg1 ;
-(void)viewDidLoad;
-(void)viewDidLayoutSubviews;
-(UIScrollView *)scrollView;
-(void)setScrollView:(UIScrollView *)arg1 ;
-(void)setImageView:(UIImageView *)arg1 ;
-(UIImage *)drawingImage;
-(void)centerImageView;
-(id)initWithDrawingImage:(id)arg1 ;
-(void)setDrawingImage:(UIImage *)arg1 ;
@end

