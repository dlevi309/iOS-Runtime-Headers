/*
* Generated on Thursday, January 14, 2021 at 2:24:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
*/


@class UIImage, NSString;

@interface AMSUIOnboardingFeature : NSObject {

	UIImage* _image;
	NSString* _titleText;
	NSString* _descriptionText;

}

@property (nonatomic,readonly) UIImage * image;                         //@synthesize image=_image - In the implementation block
@property (nonatomic,readonly) NSString * titleText;                    //@synthesize titleText=_titleText - In the implementation block
@property (nonatomic,readonly) NSString * descriptionText;              //@synthesize descriptionText=_descriptionText - In the implementation block
-(NSString *)descriptionText;
-(NSString *)titleText;
-(UIImage *)image;
-(id)initWithImage:(id)arg1 titleText:(id)arg2 descriptionText:(id)arg3 ;
@end

