/*
* Generated on Monday, March 1, 2021 at 2:34:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

