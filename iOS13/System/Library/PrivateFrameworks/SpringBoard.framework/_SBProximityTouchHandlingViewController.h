/*
* Generated on Monday, March 1, 2021 at 2:35:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <UIKitCore/UIViewController.h>

@interface _SBProximityTouchHandlingViewController : UIViewController {

	double _statusBarHeight;

}

@property (assign,nonatomic) id<_SBProximityTouchHandlingDelegate> delegate; 
@property (assign,nonatomic) double statusBarHeight;                                      //@synthesize statusBarHeight=_statusBarHeight - In the implementation block
-(id<_SBProximityTouchHandlingDelegate>)delegate;
-(void)setDelegate:(id<_SBProximityTouchHandlingDelegate>)arg1 ;
-(id)_view;
-(void)loadView;
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)shouldAutorotate;
-(double)statusBarHeight;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)setStatusBarHeight:(double)arg1 ;
@end

