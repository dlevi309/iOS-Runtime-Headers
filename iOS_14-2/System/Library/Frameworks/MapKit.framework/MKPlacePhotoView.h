/*
* Generated on Thursday, January 14, 2021 at 2:22:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MapKit-Structs.h>
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
-(void)setImageView:(UIImageView *)arg1 ;
-(void)setImage:(UIImage *)arg1 ;
-(id)initWithImage:(id)arg1 ;
-(UIImageView *)imageView;
-(id)viewForZoomingInScrollView:(id)arg1 ;
-(BOOL)isZoomed;
-(UIImage *)image;
-(void)setIsZoomed:(BOOL)arg1 ;
-(void)zoomWithGestureRecognizer:(id)arg1 ;
@end

