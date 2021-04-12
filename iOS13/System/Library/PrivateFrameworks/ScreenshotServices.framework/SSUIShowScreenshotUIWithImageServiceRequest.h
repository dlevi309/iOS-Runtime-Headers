/*
* Generated on Monday, March 1, 2021 at 2:33:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ScreenshotServices.framework/ScreenshotServices
*/

#import <ScreenshotServices/SSUIServiceRequest.h>

@class UIImage, SSUIServiceOptions;

@interface SSUIShowScreenshotUIWithImageServiceRequest : SSUIServiceRequest {

	UIImage* _image;
	SSUIServiceOptions* _options;

}

@property (nonatomic,retain) UIImage * image;                           //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) SSUIServiceOptions * options;              //@synthesize options=_options - In the implementation block
+(id)entitlement;
-(SSUIServiceOptions *)options;
-(void)setOptions:(SSUIServiceOptions *)arg1 ;
-(UIImage *)image;
-(void)setImage:(UIImage *)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(id)initWithXPCDictionary:(id)arg1 ;
@end

