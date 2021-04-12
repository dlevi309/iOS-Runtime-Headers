/*
* Generated on Monday, March 1, 2021 at 2:34:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(UIImage *)image;
-(NSString *)titleText;
-(NSString *)descriptionText;
-(id)initWithImage:(id)arg1 titleText:(id)arg2 descriptionText:(id)arg3 ;
@end

