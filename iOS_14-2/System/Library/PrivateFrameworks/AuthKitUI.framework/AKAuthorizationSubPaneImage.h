/*
* Generated on Thursday, January 14, 2021 at 2:27:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AuthKitUI.framework/AuthKitUI
*/

#import <AuthKitUI/AKAuthorizationSubPane.h>

@class UIImageView, NSArray, UIImage;

@interface AKAuthorizationSubPaneImage : AKAuthorizationSubPane {

	UIImageView* _imageView;
	NSArray* _imageViewConstraints;

}

@property (nonatomic,readonly) UIImageView * imageView;                 //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) UIImage * image; 
@property (nonatomic,copy) NSArray * imageViewConstraints;              //@synthesize imageViewConstraints=_imageViewConstraints - In the implementation block
+(id)_imageViewWithImage:(id)arg1 ;
-(void)setImage:(UIImage *)arg1 ;
-(id)initWithImage:(id)arg1 ;
-(UIImageView *)imageView;
-(NSArray *)imageViewConstraints;
-(void)setImageViewConstraints:(NSArray *)arg1 ;
-(UIImage *)image;
-(void)addToStackView:(id)arg1 context:(id)arg2 ;
-(void)addToConstraints:(id)arg1 context:(id)arg2 ;
@end

