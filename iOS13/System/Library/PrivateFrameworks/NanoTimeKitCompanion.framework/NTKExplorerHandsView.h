/*
* Generated on Monday, March 1, 2021 at 2:35:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

