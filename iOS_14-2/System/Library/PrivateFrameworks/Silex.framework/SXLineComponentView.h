/*
* Generated on Thursday, January 14, 2021 at 2:24:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(SXSolidBorderView *)borderView;
-(void)setBorderView:(SXSolidBorderView *)arg1 ;
-(void)discardContents;
-(void)renderContents;
-(void)presentComponentWithChanges:(SCD_Struct_SX17)arg1 ;
-(void)loadComponent:(id)arg1 ;
-(BOOL)userInteractable;
-(void)setStrokeLayer:(CALayer *)arg1 ;
-(CALayer *)strokeLayer;
@end

