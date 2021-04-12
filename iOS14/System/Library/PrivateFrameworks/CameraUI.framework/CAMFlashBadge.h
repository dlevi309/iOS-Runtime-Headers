/*
* Generated on Thursday, January 14, 2021 at 2:26:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(CGSize)intrinsicContentSize;
-(id)_maskImage;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)set_contentImage:(UIImage *)arg1 ;
-(void)set_contentSizeCategory:(NSString *)arg1 ;
-(UIEdgeInsets)_imageInsets;
-(UIImage *)_contentImage;
-(CGSize)_imageSize;
-(void)updateToContentSize:(id)arg1 ;
-(NSString *)_contentSizeCategory;
@end

