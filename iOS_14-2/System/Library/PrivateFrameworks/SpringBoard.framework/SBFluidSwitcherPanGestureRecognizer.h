/*
* Generated on Thursday, January 14, 2021 at 2:25:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(double)peakSpeed;
-(SBFluidSwitcherViewController *)switcherViewController;
-(BOOL)installedAsSystemGesture;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)setSwitcherViewController:(SBFluidSwitcherViewController *)arg1 ;
-(void)setTouchHistory:(SBTouchHistory *)arg1 ;
-(CGPoint)averageTouchVelocityOverTimeDuration:(double)arg1 ;
-(SBTouchHistory *)touchHistory;
-(void)setInstalledAsSystemGesture:(BOOL)arg1 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(double)averageTouchPathAngleOverTimeDuration:(double)arg1 ;
-(void)conformsToSBGestureRecognizerTouchHistoryProviding;
-(void)reset;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
@end

