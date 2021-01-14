/*
* Generated on Thursday, January 14, 2021 at 2:24:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/


@protocol HKGraphRenderer <NSObject>
@property (assign,nonatomic) CGRect axisRect; 
@property (assign,nonatomic,__weak) id<HKGraphRenderDelegate> renderDelegate; 
@required
-(void)setRenderDelegate:(id)arg1;
-(id<HKGraphRenderDelegate>)renderDelegate;
-(void)setNeedsRender;
-(CGRect)axisRect;
-(void)setAxisRect:(CGRect)arg1;
-(void)drawPath:(id)arg1 strokeColor:(id)arg2 fillColor:(id)arg3 markerImage:(id)arg4 useGradientFill:(BOOL)arg5 blendMode:(int)arg6 clipToAxes:(BOOL)arg7;
-(void)fillRect:(CGRect)arg1 withTexture:(id)arg2;
-(CGSize*)drawText:(id)arg1 atPoint:(CGPoint)arg2 spaceAvailable:(id)arg3 horizontalAlignment:(long long)arg4 verticalAlignment:(long long)arg5 textColor:(id)arg6 font:(id)arg7 clipToAxis:(BOOL)arg8 exclusion:(id)arg9;
-(CGSize*)drawAttributedText:(id)arg1 atPoint:(CGPoint)arg2 horizontalAlignment:(long long)arg3 verticalAlignment:(long long)arg4 exclusion:(id)arg5;

@end

