/*
* Generated on Thursday, January 14, 2021 at 2:25:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <UIKit/UIViewControllerAnimatorTransitioning.h>

@class UIImageView, NSString;

@interface SKUISlideshowAnimator : NSObject <UIViewControllerAnimatorTransitioning> {

	UIImageView* _imageView;

}

@property (nonatomic,retain) UIImageView * imageView;               //@synthesize imageView=_imageView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)animateTransition:(id)arg1 ;
-(void)setImageView:(UIImageView *)arg1 ;
-(void)animationEnded:(BOOL)arg1 ;
-(double)transitionDuration:(id)arg1 ;
-(UIImageView *)imageView;
@end

