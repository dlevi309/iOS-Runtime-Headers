/*
* Generated on Monday, March 1, 2021 at 2:33:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSDContainerRep.h>
#import <TSReading/TSDMagicMoveMatching.h>

@interface TSDGroupRep : TSDContainerRep <TSDMagicMoveMatching>
+(double)magicMoveAttributeMatchPercentBetweenOutgoingObject:(id)arg1 incomingObject:(id)arg2 ;
-(BOOL)containsPoint:(CGPoint)arg1 ;
-(Class)layerClass;
-(void)setNeedsDisplay;
-(CGColorRef)selectionHighlightColor;
-(void)drawInContext:(CGContextRef)arg1 ;
-(BOOL)isDraggable;
-(BOOL)directlyManagesLayerContent;
-(CGPoint)convertNaturalPointFromUnscaledCanvas:(CGPoint)arg1 ;
-(CGRect)frameInUnscaledCanvas;
-(void)processChangedProperty:(int)arg1 ;
-(BOOL)wantsToHandleTapsWhenLocked;
-(BOOL)handleSingleTapAtPoint:(CGPoint)arg1 ;
-(BOOL)handleDoubleTapAtPoint:(CGPoint)arg1 ;
-(BOOL)containsPoint:(CGPoint)arg1 withSlop:(CGSize)arg2 ;
-(CGRect)clipRect;
-(void)recursivelyDrawInContext:(CGContextRef)arg1 ;
-(BOOL)shouldShowCommentHighlight;
-(BOOL)shouldShowSelectionHighlight;
-(BOOL)intersectsUnscaledRect:(CGRect)arg1 ;
-(id)allRepsContainedInGroup;
@end

