/*
* Generated on Thursday, January 14, 2021 at 2:24:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setFillColor:(UIColor *)arg1 ;
-(UIColor *)fillColor;
-(UIBlurEffect *)blurEffect;
-(void)setBlurEffect:(UIBlurEffect *)arg1 ;
@end

