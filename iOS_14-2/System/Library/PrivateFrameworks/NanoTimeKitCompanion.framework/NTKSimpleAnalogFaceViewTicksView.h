/*
* Generated on Thursday, January 14, 2021 at 2:26:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <UIKitCore/UIView.h>

@class CALayer, UILabel;

@interface NTKSimpleAnalogFaceViewTicksView : UIView {

	CALayer* _large;
	CALayer* _small;
	CALayer* _pills;
	UILabel* _digit_05;
	UILabel* _digit_25;
	UILabel* _digit_35;
	UILabel* _digit_55;

}

@property (nonatomic,retain) CALayer * large;                 //@synthesize large=_large - In the implementation block
@property (nonatomic,retain) CALayer * small;                 //@synthesize small=_small - In the implementation block
@property (nonatomic,retain) CALayer * pills;                 //@synthesize pills=_pills - In the implementation block
@property (nonatomic,retain) UILabel * digit_05;              //@synthesize digit_05=_digit_05 - In the implementation block
@property (nonatomic,retain) UILabel * digit_25;              //@synthesize digit_25=_digit_25 - In the implementation block
@property (nonatomic,retain) UILabel * digit_35;              //@synthesize digit_35=_digit_35 - In the implementation block
@property (nonatomic,retain) UILabel * digit_55;              //@synthesize digit_55=_digit_55 - In the implementation block
-(CALayer *)small;
-(CALayer *)pills;
-(CALayer *)large;
-(void)setSmall:(CALayer *)arg1 ;
-(void)setLarge:(CALayer *)arg1 ;
-(void)setPills:(CALayer *)arg1 ;
-(UILabel *)digit_05;
-(void)setDigit_05:(UILabel *)arg1 ;
-(UILabel *)digit_25;
-(void)setDigit_25:(UILabel *)arg1 ;
-(UILabel *)digit_35;
-(void)setDigit_35:(UILabel *)arg1 ;
-(UILabel *)digit_55;
-(void)setDigit_55:(UILabel *)arg1 ;
@end

