/*
* Generated on Monday, March 1, 2021 at 2:34:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HealthUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/HKGraphRenderer.h>

@protocol HKGraphRenderDelegate;
@class NSString;

@interface HKGraphRenderView : UIView <HKGraphRenderer> {

	id<HKGraphRenderDelegate> renderDelegate;
	CGRect _axisRect;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) CGRect axisRect;                                              //@synthesize axisRect=_axisRect - In the implementation block
@property (assign,nonatomic,__weak) id<HKGraphRenderDelegate> renderDelegate; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(id<HKGraphRenderDelegate>)renderDelegate;
-(void)setRenderDelegate:(id<HKGraphRenderDelegate>)arg1 ;
-(void)setNeedsRender;
-(void)drawPath:(id)arg1 strokeColor:(id)arg2 fillColor:(id)arg3 markerImage:(id)arg4 useGradientFill:(BOOL)arg5 blendMode:(int)arg6 clipToAxes:(BOOL)arg7 ;
-(void)fillRect:(CGRect)arg1 withTexture:(id)arg2 ;
-(CGSize)drawText:(id)arg1 atPoint:(CGPoint)arg2 spaceAvailable:(id)arg3 horizontalAlignment:(long long)arg4 verticalAlignment:(long long)arg5 textColor:(id)arg6 font:(id)arg7 clipToAxis:(BOOL)arg8 exclusion:(id)arg9 ;
-(CGRect)axisRect;
-(void)setAxisRect:(CGRect)arg1 ;
@end

