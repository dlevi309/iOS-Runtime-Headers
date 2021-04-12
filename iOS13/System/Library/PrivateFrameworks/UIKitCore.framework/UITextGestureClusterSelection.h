/*
* Generated on Monday, March 1, 2021 at 2:30:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UITextGestureCluster.h>

@interface UITextGestureClusterSelection : UITextGestureCluster {

	double _lastTapTimestamp;

}
-(void)confirmMarkedText:(id)arg1 ;
-(BOOL)cluster_gestureRecognizerShouldBegin:(id)arg1 ;
-(void)oneFingerDoubleTap:(id)arg1 ;
-(void)oneFingerTap:(id)arg1 ;
-(void)oneFingerTapSelectsAll:(id)arg1 ;
-(void)tapAndAHalf:(id)arg1 ;
-(void)setHybridSelectionWithPoint:(CGPoint)arg1 ;
-(BOOL)shouldHandleOneFingerTapInUneditable:(id)arg1 ;
-(id)initWithView:(id)arg1 andMode:(int)arg2 ;
-(void)twoFingerRangedSelectGesture:(id)arg1 ;
@end

