/*
* Generated on Monday, March 1, 2021 at 2:33:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSDShapeRep.h>

@class TSDPathSource;

@interface TSDConnectionLineRep : TSDShapeRep {

	TSDPathSource* mLastPathSource;

}
+(BOOL)canConnectToRep:(id)arg1 ;
+(id)infosToConnectFromSelection:(id)arg1 withInteractiveCanvasController:(id)arg2 ;
-(void)dealloc;
-(BOOL)isSelectable;
-(BOOL)containsPoint:(CGPoint)arg1 ;
-(BOOL)isDraggable;
-(BOOL)directlyManagesLayerContent;
-(CGRect)targetRectForEditMenu;
-(BOOL)shouldCreateKnobs;
-(unsigned long long)enabledKnobMask;
-(BOOL)shouldCreateSelectionKnobs;
-(BOOL)shouldShowCommentHighlight;
-(double)shortestDistanceToPoint:(CGPoint)arg1 countAsHit:(BOOL*)arg2 ;
-(id)additionalRepsForDragging;
-(void)updateFromLayout;
-(BOOL)canUseSpecializedHitRegionForKnob:(id)arg1 ;
-(CGPoint)i_dragOffset;
-(BOOL)i_editMenuOverlapsEndKnobs;
-(BOOL)shouldShowSmartShapeKnobs;
-(BOOL)canBeUsedForImageMask;
-(BOOL)canMakePathEditable;
-(BOOL)canConnectToRep:(id)arg1 ;
-(id)connectionLineLayout;
-(BOOL)p_isConnected;
-(BOOL)p_isConnectedToLockedObjects;
-(BOOL)p_controlKnobVisible;
@end

