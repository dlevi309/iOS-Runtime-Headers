/*
* Generated on Thursday, January 14, 2021 at 2:24:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setImage:(UIImage *)arg1 ;
-(UIImage *)image;
-(unsigned long long)imageQuality;
-(void)setImageQuality:(unsigned long long)arg1 ;
@end

