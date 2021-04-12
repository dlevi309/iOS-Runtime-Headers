/*
* Generated on Thursday, January 14, 2021 at 2:24:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setTintColor:(UIColor *)arg1 ;
-(UIVibrancyEffect *)vibrancyEffect;
-(void)setVibrancyEffect:(UIVibrancyEffect *)arg1 ;
-(UIColor *)tintColor;
@end

