/*
* Generated on Monday, March 1, 2021 at 2:33:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)displayName;
-(id)initWithType:(long long)arg1 ;
-(UIImage *)displayImage;
-(long long)lightingType;
-(UIImage *)displayShadowImage;
-(UIImage *)displayOutlineImage;
-(UIImage *)selectionBackgroundImage;
@end

