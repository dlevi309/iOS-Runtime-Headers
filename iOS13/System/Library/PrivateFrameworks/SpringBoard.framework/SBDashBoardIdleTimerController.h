/*
* Generated on Monday, March 1, 2021 at 2:35:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(BOOL)handleEvent:(id)arg1 ;
-(long long)participantState;
-(BOOL)wouldHandleButtonEvent:(id)arg1 ;
-(NSString *)coverSheetIdentifier;
-(void)resetIdleTimerIfTopMost;
-(void)addIdleTimerDisabledAssertionReason:(id)arg1 ;
-(void)removeIdleTimerDisabledAssertionReason:(id)arg1 ;
-(void)setIdleTimerCoordinator:(id<SBIdleTimerCoordinating>)arg1 ;
-(id)coordinatorRequestedIdleTimerBehavior:(id)arg1 ;
-(id<SBIdleTimerCoordinating>)idleTimerCoordinator;
-(id)initWithCoverSheetViewController:(id)arg1 ;
-(void)idleTimerDidRefresh:(id)arg1 ;
-(void)idleTimerDidExpire:(id)arg1 ;
-(void)idleTimerDidWarn:(id)arg1 ;
-(void)idleTimerWillRefresh:(id)arg1 ;
-(id)dashBoardIdleTimerProvider:(id)arg1 didProposeBehavior:(id)arg2 reason:(id)arg3 ;
-(id)requestIdleTimerBehaviorForReason:(id)arg1 ;
-(void)idleTimerDidChange:(id)arg1 ;
@end

