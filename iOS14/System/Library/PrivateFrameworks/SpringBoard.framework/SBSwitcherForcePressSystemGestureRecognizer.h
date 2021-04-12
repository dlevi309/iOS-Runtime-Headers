/*
* Generated on Thursday, January 14, 2021 at 2:25:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(double)peakSpeed;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)setTouchHistory:(SBTouchHistory *)arg1 ;
-(CGPoint)averageTouchVelocityOverTimeDuration:(double)arg1 ;
-(SBTouchHistory *)touchHistory;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(double)forcePercent;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(double)averageTouchPathAngleOverTimeDuration:(double)arg1 ;
-(void)conformsToSBGestureRecognizerTouchHistoryProviding;
-(void)setState:(long long)arg1 ;
-(void)reset;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(void)interactionProgressDidUpdate:(id)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)dealloc;
@end

