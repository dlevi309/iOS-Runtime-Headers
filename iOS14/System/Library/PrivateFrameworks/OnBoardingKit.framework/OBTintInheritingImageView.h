/*
* Generated on Thursday, January 14, 2021 at 2:22:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit
*/

#import <UIKitCore/UIImageView.h>

@class UIImage;

@interface OBTintInheritingImageView : UIImageView {

	UIImage* _originalImage;

}

@property (nonatomic,retain) UIImage * originalImage;              //@synthesize originalImage=_originalImage - In the implementation block
-(void)tintColorDidChange;
-(void)setImage:(id)arg1 ;
-(UIImage *)originalImage;
-(void)setOriginalImage:(UIImage *)arg1 ;
-(id)initWithImage:(id)arg1 highlightedImage:(id)arg2 ;
@end

