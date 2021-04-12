/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/SBHomeGrabberDelegate.h>
#import <libobjc.A.dylib/SBSceneHandleObserver.h>
#import <libobjc.A.dylib/SBUIActiveOrientationObserver.h>
#import <libobjc.A.dylib/SBMainDisplaySceneManagerObserverPrivate.h>

@class NSHashTable, SBHomeGrabberRotationView, SBKeyboardHomeAffordanceAssertion, NSString;

@interface SBKeyboardHomeAffordanceController : NSObject <SBHomeGrabberDelegate, SBSceneHandleObserver, SBUIActiveOrientationObserver, SBMainDisplaySceneManagerObserverPrivate> {

	NSHashTable* _assertions;
	SBHomeGrabberRotationView* _homeGrabberView;
	BOOL _isHomeGrabberContainingViewAlwaysPortrait;
	SBKeyboardHomeAffordanceAssertion* _topMostAssertion;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)activeInterfaceOrientationWillChangeToOrientation:(long long)arg1 ;
-(void)activeInterfaceOrientationDidChangeToOrientation:(long long)arg1 willAnimateWithDuration:(double)arg2 fromOrientation:(long long)arg3 ;
-(void)_updateHomeAffordance;
-(double)additionalEdgeSpacingForHomeGrabberView:(id)arg1 ;
-(BOOL)shouldAllowThinStyleForHomeGrabberView:(id)arg1 ;
-(BOOL)shouldAllowAutoHideForHomeGrabberView:(id)arg1 ;
-(void)sceneManagerUsingMedusaHostedKeyboardWindowDidChange:(id)arg1 ;
-(void)_updateTopMostAssertion;
-(void)_getHomeGrabberContainingView:(id*)arg1 isAlwaysPortrait:(BOOL*)arg2 ;
-(void)registerAssertion:(id)arg1 ;
-(void)unregisterAssertion:(id)arg1 ;
-(void)_didChangeAdditionalEdgeMarginForAssertion:(id)arg1 ;
@end

