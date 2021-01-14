/*
* Generated on Thursday, January 14, 2021 at 2:28:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
*/

#import <WorkflowEditor/WorkflowEditor-Structs.h>
#import <QuartzCore/CALayer.h>

@class NSArray, CALayer;

@interface CKHighlightOverlayLayer : CALayer {

	NSArray* _rects;
	CALayer* _targetLayer;

}

@property (retain) CGColorRef highlightColor; 
@property (__weak) CALayer * targetLayer;                  //@synthesize targetLayer=_targetLayer - In the implementation block
+(BOOL)needsDisplayForKey:(id)arg1 ;
+(id)defaultValueForKey:(id)arg1 ;
-(id)hitTest:(CGPoint)arg1 ;
-(void)drawInContext:(CGContextRef)arg1 ;
-(CALayer *)targetLayer;
-(id)initWithRects:(id)arg1 targetLayer:(id)arg2 ;
-(id)initWithRects:(id)arg1 ;
-(void)setTargetLayer:(CALayer *)arg1 ;
@end

