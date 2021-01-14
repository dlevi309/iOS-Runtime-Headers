/*
* Generated on Thursday, January 14, 2021 at 2:23:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/


@class UIColor;

@interface AVTUIStyle : NSObject {

	UIColor* _backgroundColor;
	UIColor* _textColor;

}

@property (nonatomic,retain) UIColor * backgroundColor;              //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,retain) UIColor * textColor;                    //@synthesize textColor=_textColor - In the implementation block
+(id)lightStyle;
+(id)darkStyle;
-(UIColor *)textColor;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)backgroundColor;
-(void)setTextColor:(UIColor *)arg1 ;
@end

