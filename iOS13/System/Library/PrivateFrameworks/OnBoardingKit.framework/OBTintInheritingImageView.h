/*
* Generated on Monday, March 1, 2021 at 2:30:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit
*/

#import <UIKitCore/UIImageView.h>

@class UIImage;

@interface OBTintInheritingImageView : UIImageView {

	UIImage* _originalImage;

}

@property (nonatomic,retain) UIImage * originalImage;              //@synthesize originalImage=_originalImage - In the implementation block
-(void)setImage:(id)arg1 ;
-(void)tintColorDidChange;
-(id)initWithImage:(id)arg1 highlightedImage:(id)arg2 ;
-(UIImage *)originalImage;
-(void)setOriginalImage:(UIImage *)arg1 ;
@end

