/*
* Generated on Thursday, January 14, 2021 at 2:27:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
*/

#import <AnnotationKit/AKAdornmentLayer.h>

@class CAShapeLayer;

@interface AKCropAdornmentLayer : AKAdornmentLayer {

	CAShapeLayer* _handlesLayer;

}

@property (retain) CAShapeLayer * handlesLayer;              //@synthesize handlesLayer=_handlesLayer - In the implementation block
-(void)updateAdornmentElements;
-(void)updateSublayersWithScale:(double)arg1 ;
-(BOOL)needsUpdateWhenDraggingStartsOrEnds;
-(CAShapeLayer *)handlesLayer;
-(void)_addHandles;
-(void)_updateHandles;
-(BOOL)_shouldShowHandles;
-(void)_removeHandles;
-(void)setHandlesLayer:(CAShapeLayer *)arg1 ;
@end

