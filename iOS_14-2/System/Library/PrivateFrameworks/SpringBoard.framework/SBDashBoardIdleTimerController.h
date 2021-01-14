/*
* Generated on Thursday, January 14, 2021 at 2:25:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/CSExternalEventHandling.h>
#import <libobjc.A.dylib/SBDashBoardIdleTimerProviderDelegate.h>
#import <libobjc.A.dylib/CSIdleTimerControlling.h>
#import <libobjc.A.dylib/SBIdleTimerProviding.h>
#import <libobjc.A.dylib/SBLockScreenIdleTimerControlling.h>

@protocol SBIdleTimerCoordinating;
@class CSCoverSheetViewController, SBDashBoardIdleTimerProvider, NSString;

@interface SBDashBoardIdleTimerController : NSObject <CSExternalEventHandling, SBDashBoardIdleTimerProviderDelegate, CSIdleTimerControlling, SBIdleTimerProviding, SBLockScreenIdleTimerControlling> {

	CSCoverSheetViewController* _coverSheetViewController;
	SBDashBoardIdleTimerProvider* _dashBoardIdleTimerProvider;
	id<SBIdleTimerCoordinating> _idleTimerCoordinator;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * coverSheetIdentifier; 
@property (nonatomic,readonly) long long participantState; 
@property (assign,nonatomic,__weak) id<SBIdleTimerCoordinating> idleTimerCoordinator;              //@synthesize idleTimerCoordinator=_idleTimerCoordinator - In the implementation block
-(void)conformsToCSEventHandling;
-(void)setIdleTimerCoordinator:(id<SBIdleTimerCoordinating>)arg1 ;
-(id<SBIdleTimerCoordinating>)idleTimerCoordinator;
-(BOOL)handleEvent:(id)arg1 ;
-(id)coordinatorRequestedIdleTimerBehavior:(id)arg1 ;
-(void)addIdleTimerDisabledAssertionReason:(id)arg1 ;
-(void)idleTimerWillRefresh:(id)arg1 ;
-(BOOL)wouldHandleButtonEvent:(id)arg1 ;
-(void)idleTimerDidRefresh:(id)arg1 ;
-(id)initWithCoverSheetViewController:(id)arg1 ;
-(NSString *)coverSheetIdentifier;
-(void)removeIdleTimerDisabledAssertionReason:(id)arg1 ;
-(id)dashBoardIdleTimerProvider:(id)arg1 didProposeBehavior:(id)arg2 reason:(id)arg3 ;
-(long long)participantState;
-(void)resetIdleTimerIfTopMost;
-(id)requestIdleTimerBehaviorForReason:(id)arg1 ;
-(void)idleTimerDidExpire:(id)arg1 ;
-(void)idleTimerDidChange:(id)arg1 ;
-(void)idleTimerDidWarn:(id)arg1 ;
-(void)dealloc;
@end

