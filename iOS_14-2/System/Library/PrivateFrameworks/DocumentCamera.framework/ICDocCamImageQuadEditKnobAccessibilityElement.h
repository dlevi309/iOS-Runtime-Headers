/*
* Generated on Thursday, January 14, 2021 at 2:27:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DocumentCamera.framework/DocumentCamera
*/

#import <DocumentCamera/DocumentCamera-Structs.h>
#import <UIKitCore/UIAccessibilityElement.h>

@class CALayer, ICDocCamImageQuadEditOverlay;

@interface ICDocCamImageQuadEditKnobAccessibilityElement : UIAccessibilityElement {

	CALayer* _knobLayer;
	ICDocCamImageQuadEditOverlay* _overlayView;

}

@property (assign,nonatomic,__weak) CALayer * knobLayer;                                     //@synthesize knobLayer=_knobLayer - In the implementation block
@property (assign,nonatomic,__weak) ICDocCamImageQuadEditOverlay * overlayView;              //@synthesize overlayView=_overlayView - In the implementation block
-(id)accessibilityLabel;
-(ICDocCamImageQuadEditOverlay *)overlayView;
-(BOOL)isAccessibilityElement;
-(void)setOverlayView:(ICDocCamImageQuadEditOverlay *)arg1 ;
-(BOOL)accessibilityViewIsModal;
-(CGRect)accessibilityFrame;
-(id)accessibilityHint;
-(CALayer *)knobLayer;
-(void)setKnobLayer:(CALayer *)arg1 ;
-(id)initWithKnobLayer:(id)arg1 overlayView:(id)arg2 ;
@end

