/*
* Generated on Thursday, January 14, 2021 at 2:20:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)actionForKey:(id)arg1 ;
-(void)drawInContext:(CGContextRef)arg1 ;
@end

