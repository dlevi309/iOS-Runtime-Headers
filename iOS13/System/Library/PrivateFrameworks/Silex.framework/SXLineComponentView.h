/*
* Generated on Monday, March 1, 2021 at 2:33:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/Silex-Structs.h>
#import <Silex/SXComponentView.h>

@class CALayer, SXSolidBorderView;

@interface SXLineComponentView : SXComponentView {

	CALayer* _strokeLayer;
	SXSolidBorderView* _borderView;

}

@property (nonatomic,retain) CALayer * strokeLayer;                       //@synthesize strokeLayer=_strokeLayer - In the implementation block
@property (nonatomic,retain) SXSolidBorderView * borderView;              //@synthesize borderView=_borderView - In the implementation block
-(void)discardContents;
-(void)setBorderView:(SXSolidBorderView *)arg1 ;
-(SXSolidBorderView *)borderView;
-(void)presentComponentWithChanges:(SCD_Struct_SX17)arg1 ;
-(void)renderContents;
-(void)loadComponent:(id)arg1 ;
-(BOOL)userInteractable;
-(void)setStrokeLayer:(CALayer *)arg1 ;
-(CALayer *)strokeLayer;
@end

