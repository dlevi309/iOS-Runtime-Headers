/*
* Generated on Thursday, January 14, 2021 at 2:26:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <NanoTimeKitCompanion/NTKAnalogHandsView.h>

@class UIColor;

@interface NTKExplorerHandsView : NTKAnalogHandsView {

	UIColor* _secondHandDotColor;
	CGPoint _secondHandCenter;

}

@property (nonatomic,retain) UIColor * secondHandDotColor;              //@synthesize secondHandDotColor=_secondHandDotColor - In the implementation block
@property (assign,nonatomic) CGPoint secondHandCenter;                  //@synthesize secondHandCenter=_secondHandCenter - In the implementation block
-(void)layoutSubviews;
-(void)applyTransitionFraction:(double)arg1 fromColor:(unsigned long long)arg2 toColor:(unsigned long long)arg3 ;
-(id)initForDevice:(id)arg1 ;
-(void)setInlayColor:(id)arg1 ;
-(void)setSecondHandDotColor:(UIColor *)arg1 ;
-(void)setSecondHandCenter:(CGPoint)arg1 ;
-(UIColor *)secondHandDotColor;
-(CGPoint)secondHandCenter;
@end

