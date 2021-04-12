/*
* Generated on Monday, March 1, 2021 at 2:30:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <QuartzCore/CALayer.h>

@class UIBezierPath;

@interface _UITileLayer : CALayer {

	UIBezierPath* maskPath;
	AB pendingDeferredOffscreenSetNeedsDisplay;

}
-(void)setNeedsDisplay;
-(void)drawInContext:(CGContextRef)arg1 ;
-(id)actionForKey:(id)arg1 ;
@end

