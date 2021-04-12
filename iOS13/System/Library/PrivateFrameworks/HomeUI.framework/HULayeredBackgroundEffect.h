/*
* Generated on Monday, March 1, 2021 at 2:34:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/


@class UIBlurEffect, UIColor;

@interface HULayeredBackgroundEffect : NSObject {

	UIBlurEffect* _blurEffect;
	UIColor* _fillColor;

}

@property (nonatomic,retain) UIBlurEffect * blurEffect;              //@synthesize blurEffect=_blurEffect - In the implementation block
@property (nonatomic,retain) UIColor * fillColor;                    //@synthesize fillColor=_fillColor - In the implementation block
+(id)backgroundWithFillColor:(id)arg1 ;
+(id)backgroundWithBlurEffect:(id)arg1 ;
-(UIColor *)fillColor;
-(void)setFillColor:(UIColor *)arg1 ;
-(void)setBlurEffect:(UIBlurEffect *)arg1 ;
-(UIBlurEffect *)blurEffect;
@end

