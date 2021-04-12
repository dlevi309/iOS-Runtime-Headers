/*
* Generated on Monday, March 1, 2021 at 2:34:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/VisionKit.framework/VisionKit
*/

#import <VisionKit/VisionKit-Structs.h>
#import <UIKitCore/UIAccessibilityElement.h>

@class CALayer, ICDocCamImageQuadEditOverlay;

@interface ICDocCamImageQuadEditKnobAccessibilityElement : UIAccessibilityElement {

	CALayer* _knobLayer;
	ICDocCamImageQuadEditOverlay* _overlayView;

}

@property (assign,nonatomic,__weak) CALayer * knobLayer;                                     //@synthesize knobLayer=_knobLayer - In the implementation block
@property (assign,nonatomic,__weak) ICDocCamImageQuadEditOverlay * overlayView;              //@synthesize overlayView=_overlayView - In the implementation block
-(CGRect)accessibilityFrame;
-(id)accessibilityLabel;
-(id)accessibilityHint;
-(BOOL)isAccessibilityElement;
-(BOOL)accessibilityViewIsModal;
-(void)setOverlayView:(ICDocCamImageQuadEditOverlay *)arg1 ;
-(ICDocCamImageQuadEditOverlay *)overlayView;
-(CALayer *)knobLayer;
-(void)setKnobLayer:(CALayer *)arg1 ;
-(id)initWithKnobLayer:(id)arg1 overlayView:(id)arg2 ;
@end

