/*
* Generated on Thursday, January 14, 2021 at 2:26:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

@property (nonatomic,retain) CLKImageProvider * imageProvider;              //@synthesize imageProvider=_imageProvider - In the implementation block
@property (nonatomic,retain) UIColor * color;                               //@synthesize color=_color - In the implementation block
@property (assign,nonatomic) BOOL usesLegibility;                           //@synthesize usesLegibility=_usesLegibility - In the implementation block
@property (nonatomic,retain) UIColor * overrideColor;                       //@synthesize overrideColor=_overrideColor - In the implementation block
@property (nonatomic,readonly) UIColor * contentColor; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIColor *)color;
-(void)_updateState;
-(void)layoutSubviews;
-(void)setColor:(UIColor *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
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

