/*
* Generated on Monday, March 1, 2021 at 2:34:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/


@class UIVibrancyEffect, UIColor;

@interface HULayeredContentEffect : NSObject {

	UIVibrancyEffect* _vibrancyEffect;
	UIColor* _tintColor;

}

@property (nonatomic,retain) UIVibrancyEffect * vibrancyEffect;              //@synthesize vibrancyEffect=_vibrancyEffect - In the implementation block
@property (nonatomic,retain) UIColor * tintColor;                            //@synthesize tintColor=_tintColor - In the implementation block
+(id)contentWithVibrancyEffect:(id)arg1 ;
+(id)contentWithTintColor:(id)arg1 ;
-(UIColor *)tintColor;
-(void)setTintColor:(UIColor *)arg1 ;
-(void)setVibrancyEffect:(UIVibrancyEffect *)arg1 ;
-(UIVibrancyEffect *)vibrancyEffect;
@end

