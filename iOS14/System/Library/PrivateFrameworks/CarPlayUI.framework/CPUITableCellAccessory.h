/*
* Generated on Thursday, January 14, 2021 at 2:27:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CarPlayUI.framework/CarPlayUI
*/


@class UIImage;

@interface CPUITableCellAccessory : NSObject {

	UIImage* _image;

}

@property (nonatomic,retain) UIImage * image;              //@synthesize image=_image - In the implementation block
+(id)accessoryWithImage:(id)arg1 ;
+(id)accessoryWithCloudIcon;
+(id)accessoryWithiCloudIcon;
+(id)accessoryWithDisclosureIndicator;
+(id)accessoryWithActivityIndicator;
-(void)setImage:(UIImage *)arg1 ;
-(UIImage *)image;
@end

