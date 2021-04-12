/*
* Generated on Monday, March 1, 2021 at 2:32:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
*/

#import <SpringBoardUIServices/SpringBoardUIServices-Structs.h>
#import <TelephonyUI/TPNumberPad.h>

@protocol SBNumberPadDelegate;
@interface SBNumberPadWithDelegate : TPNumberPad {

	id<SBNumberPadDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SBNumberPadDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<SBNumberPadDelegate>)delegate;
-(void)setDelegate:(id<SBNumberPadDelegate>)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)buttonDown:(id)arg1 ;
-(void)buttonUp:(id)arg1 ;
-(id)buttonForPoint:(CGPoint)arg1 forEvent:(id)arg2 ;
-(void)buttonCancelled:(id)arg1 ;
@end

