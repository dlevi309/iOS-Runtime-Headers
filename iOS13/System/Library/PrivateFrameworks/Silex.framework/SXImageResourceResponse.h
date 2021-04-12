/*
* Generated on Monday, March 1, 2021 at 2:33:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/SXResourceResponse.h>

@class UIImage;

@interface SXImageResourceResponse : SXResourceResponse {

	unsigned long long _imageQuality;
	UIImage* _image;

}

@property (assign,nonatomic) unsigned long long imageQuality;              //@synthesize imageQuality=_imageQuality - In the implementation block
@property (nonatomic,retain) UIImage * image;                              //@synthesize image=_image - In the implementation block
-(UIImage *)image;
-(void)setImage:(UIImage *)arg1 ;
-(void)setImageQuality:(unsigned long long)arg1 ;
-(unsigned long long)imageQuality;
@end

