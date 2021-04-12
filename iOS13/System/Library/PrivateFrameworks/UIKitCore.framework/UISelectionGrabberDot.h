/*
* Generated on Monday, March 1, 2021 at 2:30:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIImageView.h>

@class UISelectionGrabber;

@interface UISelectionGrabberDot : UIImageView {

	UISelectionGrabber* m_grabber;

}

@property (assign,nonatomic,__weak) UISelectionGrabber * grabber; 
-(void)setFrame:(CGRect)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(UISelectionGrabber *)grabber;
-(int)textEffectsVisibilityLevel;
-(int)textEffectsVisibilityLevelInKeyboardWindow;
-(void)setGrabber:(UISelectionGrabber *)arg1 ;
-(CGRect)_extendedHitTestingRectIncludingCalloutBarAdjustments:(BOOL)arg1 ;
-(void)redrawRasterizedImageForScale:(double)arg1 ;
-(id)_rasterizedDotImageForScale:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 container:(id)arg2 ;
@end

