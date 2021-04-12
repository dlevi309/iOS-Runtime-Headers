/*
* Generated on Monday, March 1, 2021 at 2:33:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSReading-Structs.h>
#import <UIKitCore/UIGestureRecognizer.h>

@class TSUPointerKeyDictionary;

@interface TSWPSwipeGestureRecognizer : UIGestureRecognizer {

	double mStartTime;
	unsigned long long mTouchCountAttained;
	TSUPointerKeyDictionary* mStartLocations;
	int mDirection;
	unsigned long long mNumberOfTouchesRequired;

}

@property (assign,nonatomic) unsigned long long numberOfTouchesRequired; 
@property (assign,nonatomic) int direction; 
-(void)dealloc;
-(void)reset;
-(int)direction;
-(void)setDirection:(int)arg1 ;
-(CGPoint)locationInView:(id)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(unsigned long long)numberOfTouchesRequired;
-(void)setNumberOfTouchesRequired:(unsigned long long)arg1 ;
-(double)p_angleDifferenceForAngle1:(double)arg1 angle2:(double)arg2 ;
-(BOOL)p_swipeDirectionValidForAngle:(double)arg1 direction:(int)arg2 ;
-(BOOL)p_swipeDirectionValidForXDiff:(double)arg1 yDiff:(double)arg2 ;
-(void)p_recordTouches:(id)arg1 ;
-(BOOL)p_touchWasSwipe:(id)arg1 movedFarOut:(BOOL*)arg2 ;
@end

