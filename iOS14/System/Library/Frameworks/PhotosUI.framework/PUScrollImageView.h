/*
* Generated on Thursday, January 14, 2021 at 2:22:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <UIKitCore/UIScrollView.h>
#import <UIKit/UIScrollViewDelegate.h>

@class UIImageView, NSString;

@interface PUScrollImageView : UIScrollView <UIScrollViewDelegate> {

	UIImageView* _imageView;

}

@property (retain) UIImageView * imageView;                         //@synthesize imageView=_imageView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setImageView:(UIImageView *)arg1 ;
-(UIImageView *)imageView;
-(id)viewForZoomingInScrollView:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 image:(id)arg2 ;
@end

