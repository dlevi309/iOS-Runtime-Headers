/*
* Generated on Thursday, January 14, 2021 at 2:26:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <NanoTimeKitCompanion/NTKRichComplicationView.h>

@protocol NTKRichComplicationBezelViewDelegate;
@class UIBezierPath, UIColor;

@interface NTKRichComplicationBezelView : NTKRichComplicationView {

	UIBezierPath* _hitTestPath;
	CGRect _hitTestBounds;
	long long _hitTestShape;
	CGRect _hitTestShapeFrame;
	BOOL _interactive;
	UIColor* _bezelTextColor;
	double _bezelTextWidthInRadius;
	double _bezelTextAlpha;
	id<NTKRichComplicationBezelViewDelegate> _delegate;

}

@property (nonatomic,retain) UIColor * bezelTextColor;                                              //@synthesize bezelTextColor=_bezelTextColor - In the implementation block
@property (assign,nonatomic) double bezelTextWidthInRadius;                                         //@synthesize bezelTextWidthInRadius=_bezelTextWidthInRadius - In the implementation block
@property (assign,nonatomic) double bezelTextAlpha;                                                 //@synthesize bezelTextAlpha=_bezelTextAlpha - In the implementation block
@property (nonatomic,readonly) BOOL interactive;                                                    //@synthesize interactive=_interactive - In the implementation block
@property (assign,nonatomic,__weak) id<NTKRichComplicationBezelViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)keylineImageWithFilled:(BOOL)arg1 forDevice:(id)arg2 ;
+(id)_createHitTestPathWithViewBounds:(CGRect)arg1 shape:(long long)arg2 shapeFrame:(CGRect)arg3 forDevice:(id)arg4 ;
+(CGAffineTransform)transformForState:(long long)arg1 ;
+(void)updateCustomDataAnimationFromEarlierView:(id)arg1 laterView:(id)arg2 isForward:(BOOL)arg3 animationType:(unsigned long long)arg4 animationDuration:(double)arg5 animationFraction:(float)arg6 bezelTextUpdateHandler:(/*^block*/id)arg7 ;
+(id)keylineViewForDevice:(id)arg1 ;
+(id)layoutRuleForState:(long long)arg1 faceBounds:(CGRect)arg2 dialDiameter:(double)arg3 forDevice:(id)arg4 ;
+(id)viewWithLegacyComplicationType:(unsigned long long)arg1 ;
-(id)init;
-(id<NTKRichComplicationBezelViewDelegate>)delegate;
-(BOOL)interactive;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setDelegate:(id<NTKRichComplicationBezelViewDelegate>)arg1 ;
-(id)initWithFamily:(long long)arg1 ;
-(void)_updateHitTestShape:(long long)arg1 frame:(CGRect)arg2 ;
-(void)_setLayoutTransformToView:(id)arg1 origin:(CGPoint)arg2 rotationInDegree:(double)arg3 centerScale:(double)arg4 ;
-(UIColor *)bezelTextColor;
-(void)setBezelTextColor:(UIColor *)arg1 ;
-(double)bezelTextWidthInRadius;
-(void)setBezelTextWidthInRadius:(double)arg1 ;
-(double)bezelTextAlpha;
-(void)setBezelTextAlpha:(double)arg1 ;
@end

