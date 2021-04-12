/*
* Generated on Monday, March 1, 2021 at 2:35:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBPanSystemGestureRecognizer.h>
#import <libobjc.A.dylib/SBGestureRecognizerPanGestureProviding.h>
#import <libobjc.A.dylib/SBGestureRecognizerTouchHistoryProviding.h>

@class SBFluidSwitcherViewController, SBTouchHistory, NSString;

@interface SBFluidSwitcherPanGestureRecognizer : SBPanSystemGestureRecognizer <SBGestureRecognizerPanGestureProviding, SBGestureRecognizerTouchHistoryProviding> {

	BOOL _installedAsSystemGesture;
	SBFluidSwitcherViewController* _switcherViewController;
	SBTouchHistory* _touchHistory;

}

@property (nonatomic,retain) SBTouchHistory * touchHistory;                                              //@synthesize touchHistory=_touchHistory - In the implementation block
@property (assign,nonatomic,__weak) SBFluidSwitcherViewController * switcherViewController;              //@synthesize switcherViewController=_switcherViewController - In the implementation block
@property (assign,nonatomic) BOOL installedAsSystemGesture;                                              //@synthesize installedAsSystemGesture=_installedAsSystemGesture - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)reset;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(double)peakSpeed;
-(SBTouchHistory *)touchHistory;
-(SBFluidSwitcherViewController *)switcherViewController;
-(void)setSwitcherViewController:(SBFluidSwitcherViewController *)arg1 ;
-(CGPoint)averageTouchVelocityOverTimeDuration:(double)arg1 ;
-(double)averageTouchPathAngleOverTimeDuration:(double)arg1 ;
-(void)setInstalledAsSystemGesture:(BOOL)arg1 ;
-(BOOL)installedAsSystemGesture;
-(void)setTouchHistory:(SBTouchHistory *)arg1 ;
@end

