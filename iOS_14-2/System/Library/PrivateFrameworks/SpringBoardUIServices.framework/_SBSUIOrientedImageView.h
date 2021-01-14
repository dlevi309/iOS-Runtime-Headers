/*
* Generated on Thursday, January 14, 2021 at 2:23:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(UIImage *)portraitImage;
-(void)layoutSubviews;
-(UIImage *)landscapeImage;
-(void)setPortraitImage:(UIImage *)arg1 ;
-(void)setLandscapeImage:(UIImage *)arg1 ;
@end

