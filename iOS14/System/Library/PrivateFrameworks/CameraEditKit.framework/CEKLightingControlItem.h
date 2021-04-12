/*
* Generated on Thursday, January 14, 2021 at 2:27:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraEditKit.framework/CameraEditKit
*/


@class NSString, UIImage;

@interface CEKLightingControlItem : NSObject {

	long long _lightingType;
	NSString* _displayName;
	UIImage* _displayImage;
	UIImage* _displayShadowImage;
	UIImage* _displayOutlineImage;
	UIImage* _selectionBackgroundImage;

}

@property (nonatomic,readonly) long long lightingType;                          //@synthesize lightingType=_lightingType - In the implementation block
@property (nonatomic,readonly) NSString * displayName;                          //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,readonly) UIImage * displayImage;                          //@synthesize displayImage=_displayImage - In the implementation block
@property (nonatomic,readonly) UIImage * displayShadowImage;                    //@synthesize displayShadowImage=_displayShadowImage - In the implementation block
@property (nonatomic,readonly) UIImage * displayOutlineImage;                   //@synthesize displayOutlineImage=_displayOutlineImage - In the implementation block
@property (nonatomic,readonly) UIImage * selectionBackgroundImage;              //@synthesize selectionBackgroundImage=_selectionBackgroundImage - In the implementation block
+(id)_defaultOutlineImage;
-(id)initWithType:(long long)arg1 ;
-(UIImage *)displayImage;
-(long long)lightingType;
-(NSString *)displayName;
-(UIImage *)displayShadowImage;
-(UIImage *)displayOutlineImage;
-(UIImage *)selectionBackgroundImage;
@end

