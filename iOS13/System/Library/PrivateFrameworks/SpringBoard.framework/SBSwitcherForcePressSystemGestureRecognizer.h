/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBScreenEdgePanGestureRecognizer.h>
#import <libobjc.A.dylib/PTSettingsKeyObserver.h>
#import <UIKit/UIInteractionProgressObserver.h>
#import <libobjc.A.dylib/SBGestureRecognizerTouchHistoryProviding.h>

@class UIPreviewForceInteractionProgress, SBAppSwitcherSettings, SBTouchHistory, NSString;

@interface SBSwitcherForcePressSystemGestureRecognizer : SBScreenEdgePanGestureRecognizer <PTSettingsKeyObserver, UIInteractionProgressObserver, SBGestureRecognizerTouchHistoryProviding> {

	UIPreviewForceInteractionProgress* _forceObserver;
	SBAppSwitcherSettings* _settings;
	double _forcePercent;
	SBTouchHistory* _touchHistory;

}

@property (nonatomic,retain) SBTouchHistory * touchHistory;              //@synthesize touchHistory=_touchHistory - In the implementation block
@property (nonatomic,readonly) double forcePercent;                      //@synthesize forcePercent=_forcePercent - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)reset;
-(void)setState:(long long)arg1 ;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)interactionProgressDidUpdate:(id)arg1 ;
-(double)peakSpeed;
-(SBTouchHistory *)touchHistory;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(CGPoint)averageTouchVelocityOverTimeDuration:(double)arg1 ;
-(double)forcePercent;
-(double)averageTouchPathAngleOverTimeDuration:(double)arg1 ;
-(void)setTouchHistory:(SBTouchHistory *)arg1 ;
@end

