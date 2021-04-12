/*
* Generated on Monday, March 1, 2021 at 2:32:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
*/

#import <SpringBoardUIServices/SpringBoardUIServices-Structs.h>
#import <SpringBoardFoundation/SBFTouchPassThroughView.h>

@class UIImageView, UIImage;

@interface _SBSUIOrientedImageView : SBFTouchPassThroughView {

	UIImageView* _imageView;
	UIImage* _portraitImage;
	UIImage* _landscapeImage;

}

@property (nonatomic,retain) UIImage * portraitImage;               //@synthesize portraitImage=_portraitImage - In the implementation block
@property (nonatomic,retain) UIImage * landscapeImage;              //@synthesize landscapeImage=_landscapeImage - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UIImage *)portraitImage;
-(UIImage *)landscapeImage;
-(void)setPortraitImage:(UIImage *)arg1 ;
-(void)setLandscapeImage:(UIImage *)arg1 ;
@end

