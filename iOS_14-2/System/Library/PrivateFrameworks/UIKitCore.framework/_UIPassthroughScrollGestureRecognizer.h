/*
* Generated on Thursday, January 14, 2021 at 2:20:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIGestureRecognizer.h>
#import <UIKitCore/_UIScrollEventRespondable.h>

@class NSString;

@interface _UIPassthroughScrollGestureRecognizer : UIGestureRecognizer <_UIScrollEventRespondable> {

	CGPoint _startPoint;
	double _startTime;
	BOOL _endForPrimaryButtonDown;
	BOOL _endForSecondaryButtonDown;
	unsigned long long _endReason;

}

@property (nonatomic,readonly) unsigned long long endReason;              //@synthesize endReason=_endReason - In the implementation block
@property (assign,nonatomic) BOOL endForPrimaryButtonDown;                //@synthesize endForPrimaryButtonDown=_endForPrimaryButtonDown - In the implementation block
@property (assign,nonatomic) BOOL endForSecondaryButtonDown;              //@synthesize endForSecondaryButtonDown=_endForSecondaryButtonDown - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_supportsTouchContinuation;
-(unsigned long long)endReason;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(BOOL)canBePreventedByGestureRecognizer:(id)arg1 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)shouldRequireFailureOfGestureRecognizer:(id)arg1 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)setView:(id)arg1 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)shouldReceiveEvent:(id)arg1 ;
-(void)setEndForSecondaryButtonDown:(BOOL)arg1 ;
-(void)reset;
-(void)_scrollingChangedWithEvent:(id)arg1 ;
-(void)_endWithReason:(unsigned long long)arg1 ;
-(void)setEndForPrimaryButtonDown:(BOOL)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)endForSecondaryButtonDown;
-(BOOL)endForPrimaryButtonDown;
-(id)_window;
@end

