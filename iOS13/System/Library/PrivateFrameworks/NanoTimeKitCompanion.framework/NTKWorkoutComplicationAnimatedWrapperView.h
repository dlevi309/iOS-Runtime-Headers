/*
* Generated on Monday, March 1, 2021 at 2:35:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/NTKComplicationImageView.h>

@class CLKImageProvider, UIImageView, UIColor, NSString;

@interface NTKWorkoutComplicationAnimatedWrapperView : UIView <NTKComplicationImageView> {

	UIImageView* _imageView;
	UIColor* _color;
	BOOL _usesLegibility;
	CLKImageProvider* _imageProvider;
	UIColor* _overrideColor;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) UIColor * color;                               //@synthesize color=_color - In the implementation block
@property (assign,nonatomic) BOOL usesLegibility;                           //@synthesize usesLegibility=_usesLegibility - In the implementation block
@property (nonatomic,retain) UIColor * overrideColor;                       //@synthesize overrideColor=_overrideColor - In the implementation block
@property (nonatomic,readonly) UIColor * contentColor; 
@property (nonatomic,retain) CLKImageProvider * imageProvider;              //@synthesize imageProvider=_imageProvider - In the implementation block
-(UIColor *)color;
-(void)setColor:(UIColor *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)_updateState;
-(void)setImageProvider:(CLKImageProvider *)arg1 ;
-(CLKImageProvider *)imageProvider;
-(UIColor *)overrideColor;
-(void)setOverrideColor:(UIColor *)arg1 ;
-(void)setUsesLegibility:(BOOL)arg1 ;
-(BOOL)usesLegibility;
-(id)initWithAnimationImages:(id)arg1 ;
-(void)_updateTint;
-(void)_applyAnimationForPauseState:(BOOL)arg1 animated:(BOOL)arg2 ;
@end

