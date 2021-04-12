/*
* Generated on Monday, March 1, 2021 at 2:35:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKitCore/UIView.h>

@protocol _SBProximityTouchHandlingDelegate;
@interface _SBProximityTouchHandlingView : UIView {

	id<_SBProximityTouchHandlingDelegate> _delegate;
	double _statusBarHeight;

}

@property (assign,nonatomic) id<_SBProximityTouchHandlingDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) double statusBarHeight;                                      //@synthesize statusBarHeight=_statusBarHeight - In the implementation block
-(id<_SBProximityTouchHandlingDelegate>)delegate;
-(void)setDelegate:(id<_SBProximityTouchHandlingDelegate>)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(double)statusBarHeight;
-(void)setStatusBarHeight:(double)arg1 ;
@end

