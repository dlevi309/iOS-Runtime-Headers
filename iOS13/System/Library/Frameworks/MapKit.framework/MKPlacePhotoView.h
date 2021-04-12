/*
* Generated on Monday, March 1, 2021 at 2:31:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <UIKitCore/UIScrollView.h>
#import <UIKit/UIScrollViewDelegate.h>

@class UIImageView, UIImage, NSString;

@interface MKPlacePhotoView : UIScrollView <UIScrollViewDelegate> {

	BOOL _isZoomed;
	UIImageView* _imageView;

}

@property (nonatomic,retain) UIImageView * imageView;               //@synthesize imageView=_imageView - In the implementation block
@property (assign,nonatomic) BOOL isZoomed;                         //@synthesize isZoomed=_isZoomed - In the implementation block
@property (nonatomic,retain) UIImage * image; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIImage *)image;
-(void)setImage:(UIImage *)arg1 ;
-(id)initWithImage:(id)arg1 ;
-(UIImageView *)imageView;
-(id)viewForZoomingInScrollView:(id)arg1 ;
-(void)setIsZoomed:(BOOL)arg1 ;
-(void)setImageView:(UIImageView *)arg1 ;
-(BOOL)isZoomed;
-(void)zoomWithGestureRecognizer:(id)arg1 ;
@end

