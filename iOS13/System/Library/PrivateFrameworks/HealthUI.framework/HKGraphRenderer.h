/*
* Generated on Monday, March 1, 2021 at 2:34:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/


@protocol HKGraphRenderer <NSObject>
@property (assign,nonatomic) CGRect axisRect; 
@property (assign,nonatomic,__weak) id<HKGraphRenderDelegate> renderDelegate; 
@required
-(id<HKGraphRenderDelegate>)renderDelegate;
-(void)setRenderDelegate:(id)arg1;
-(void)setNeedsRender;
-(void)drawPath:(id)arg1 strokeColor:(id)arg2 fillColor:(id)arg3 markerImage:(id)arg4 useGradientFill:(BOOL)arg5 blendMode:(int)arg6 clipToAxes:(BOOL)arg7;
-(void)fillRect:(CGRect)arg1 withTexture:(id)arg2;
-(CGSize*)drawText:(id)arg1 atPoint:(CGPoint)arg2 spaceAvailable:(id)arg3 horizontalAlignment:(long long)arg4 verticalAlignment:(long long)arg5 textColor:(id)arg6 font:(id)arg7 clipToAxis:(BOOL)arg8 exclusion:(id)arg9;
-(CGRect)axisRect;
-(void)setAxisRect:(CGRect)arg1;

@end

