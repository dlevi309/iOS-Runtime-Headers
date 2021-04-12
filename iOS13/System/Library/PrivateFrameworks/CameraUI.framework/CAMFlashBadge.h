/*
* Generated on Monday, March 1, 2021 at 2:33:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <CameraUI/CameraUI-Structs.h>
#import <CameraEditKit/CEKBadgeView.h>

@class UIImage, NSString;

@interface CAMFlashBadge : CEKBadgeView {

	UIImage* __contentImage;
	NSString* __contentSizeCategory;

}

@property (nonatomic,retain) UIImage * _contentImage;                    //@synthesize _contentImage=__contentImage - In the implementation block
@property (nonatomic,copy) NSString * _contentSizeCategory;              //@synthesize _contentSizeCategory=__contentSizeCategory - In the implementation block
-(NSString *)_contentSizeCategory;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIEdgeInsets)_imageInsets;
-(id)_maskImage;
-(CGSize)_imageSize;
-(UIImage *)_contentImage;
-(void)updateToContentSize:(id)arg1 ;
-(void)set_contentSizeCategory:(NSString *)arg1 ;
-(void)set_contentImage:(UIImage *)arg1 ;
@end

