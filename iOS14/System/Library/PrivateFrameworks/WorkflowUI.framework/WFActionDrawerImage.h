/*
* Generated on Thursday, January 14, 2021 at 2:28:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/


@class UIImage;

@interface WFActionDrawerImage : NSObject {

	unsigned long long _imageType;
	UIImage* _image;

}

@property (nonatomic,readonly) unsigned long long imageType;              //@synthesize imageType=_imageType - In the implementation block
@property (nonatomic,readonly) UIImage * image;                           //@synthesize image=_image - In the implementation block
-(UIImage *)image;
-(unsigned long long)imageType;
-(id)initWithImageType:(unsigned long long)arg1 image:(id)arg2 ;
@end

