/*
* Generated on Monday, March 1, 2021 at 2:33:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/SXImageView.h>

@class UIImage;

@interface SXRepeatableImageView : SXImageView {

	UIImage* _repeatingImage;

}

@property (nonatomic,retain) UIImage * repeatingImage;              //@synthesize repeatingImage=_repeatingImage - In the implementation block
-(id)image;
-(void)setImage:(id)arg1 ;
-(BOOL)isAccessibilityElement;
-(void)setRepeatingImage:(UIImage *)arg1 ;
-(UIImage *)repeatingImage;
@end

