/*
* Generated on Thursday, January 14, 2021 at 2:24:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/

#import <PencilKit/PencilKit-Structs.h>
#import <UIKitCore/UIGestureRecognizer.h>

@class UITouch;

@interface _PKSpringLoadingGestureRecognizer : UIGestureRecognizer {

	BOOL _hasRecognized;
	double _stationaryFingerTimeout;
	UITouch* _gestureTouch;
	CGPoint _startLocation;

}

@property (assign,nonatomic) BOOL hasRecognized;                          //@synthesize hasRecognized=_hasRecognized - In the implementation block
@property (nonatomic,retain) UITouch * gestureTouch;                      //@synthesize gestureTouch=_gestureTouch - In the implementation block
@property (assign,nonatomic) CGPoint startLocation;                       //@synthesize startLocation=_startLocation - In the implementation block
@property (assign,nonatomic) double stationaryFingerTimeout;              //@synthesize stationaryFingerTimeout=_stationaryFingerTimeout - In the implementation block
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(CGPoint)startLocation;
-(void)setStartLocation:(CGPoint)arg1 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)reset;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)hasRecognized;
-(void)setGestureTouch:(UITouch *)arg1 ;
-(UITouch *)gestureTouch;
-(void)_stationaryFingerTimerFired;
-(double)stationaryFingerTimeout;
-(BOOL)_pointInsideRecognitionPossibleArea:(CGPoint)arg1 ;
-(BOOL)_pointShouldBeRecognized:(CGPoint)arg1 ;
-(void)setHasRecognized:(BOOL)arg1 ;
-(void)setStationaryFingerTimeout:(double)arg1 ;
@end

