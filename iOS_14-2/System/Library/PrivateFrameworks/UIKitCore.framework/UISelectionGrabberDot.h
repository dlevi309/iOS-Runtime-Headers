/*
* Generated on Thursday, January 14, 2021 at 2:20:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIImageView.h>

@class UISelectionGrabber;

@interface UISelectionGrabberDot : UIImageView {

	UISelectionGrabber* m_grabber;

}

@property (assign,nonatomic,__weak) UISelectionGrabber * grabber; 
-(int)textEffectsVisibilityLevel;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(UISelectionGrabber *)grabber;
-(int)textEffectsVisibilityLevelInKeyboardWindow;
-(void)setFrame:(CGRect)arg1 ;
-(void)setGrabber:(UISelectionGrabber *)arg1 ;
-(void)redrawRasterizedImageForScale:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 container:(id)arg2 ;
-(CGRect)_extendedHitTestingRectWithEvent:(id)arg1 includingCalloutBarAdjustments:(BOOL)arg2 ;
-(id)_rasterizedDotImageForScale:(double)arg1 ;
@end

