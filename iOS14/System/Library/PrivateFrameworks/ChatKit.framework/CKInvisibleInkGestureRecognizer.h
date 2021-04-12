/*
* Generated on Thursday, January 14, 2021 at 2:21:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UIGestureRecognizer.h>

@class UITouch;

@interface CKInvisibleInkGestureRecognizer : UIGestureRecognizer {

	UITouch* _firstTouch;
	double _startTime;
	CGPoint _startLocation;

}

@property (nonatomic,retain) UITouch * firstTouch;               //@synthesize firstTouch=_firstTouch - In the implementation block
@property (assign,nonatomic) CGPoint startLocation;              //@synthesize startLocation=_startLocation - In the implementation block
@property (assign,nonatomic) double startTime;                   //@synthesize startTime=_startTime - In the implementation block
-(BOOL)canPreventGestureRecognizer:(id)arg1 ;
-(BOOL)canBePreventedByGestureRecognizer:(id)arg1 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)setStartTime:(double)arg1 ;
-(CGPoint)startLocation;
-(void)setStartLocation:(CGPoint)arg1 ;
-(BOOL)shouldRequireFailureOfGestureRecognizer:(id)arg1 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)setFirstTouch:(UITouch *)arg1 ;
-(UITouch *)firstTouch;
-(BOOL)_hasActiveTouchesInEvent:(id)arg1 ;
-(void)reset;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)shouldBeRequiredToFailByGestureRecognizer:(id)arg1 ;
-(double)startTime;
@end

