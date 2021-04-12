/*
* Generated on Thursday, January 14, 2021 at 2:25:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/SBIdleTimerProviding.h>
#import <libobjc.A.dylib/SBIdleTimerCoordinating.h>

@class FBWorkspaceEventQueue, SBWorkspaceTransaction, NSString;

@interface SBWorkspace : NSObject <SBIdleTimerProviding, SBIdleTimerCoordinating> {

	FBWorkspaceEventQueue* _eventQueue;
	SBWorkspaceTransaction* _currentTransaction;

}

@property (nonatomic,readonly) FBWorkspaceEventQueue * eventQueue;                       //@synthesize eventQueue=_eventQueue - In the implementation block
@property (nonatomic,readonly) SBWorkspaceTransaction * currentTransaction;              //@synthesize currentTransaction=_currentTransaction - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)mainWorkspace;
-(BOOL)_executeTransitionRequest:(id)arg1 options:(unsigned long long)arg2 validator:(/*^block*/id)arg3 ;
-(id)createRequestForApplicationActivation:(id)arg1 options:(unsigned long long)arg2 ;
-(BOOL)requestTransitionWithBuilder:(/*^block*/id)arg1 ;
-(id)createRequestWithOptions:(unsigned long long)arg1 ;
-(BOOL)executeTransitionRequest:(id)arg1 withValidator:(/*^block*/id)arg2 ;
-(id)transactionForTransitionRequest:(id)arg1 ;
-(BOOL)executeTransitionRequest:(id)arg1 ;
-(FBWorkspaceEventQueue *)eventQueue;
-(SBWorkspaceTransaction *)currentTransaction;
-(id)initWithEventQueue:(id)arg1 ;
-(BOOL)requestTransitionWithOptions:(unsigned long long)arg1 builder:(/*^block*/id)arg2 validator:(/*^block*/id)arg3 ;
-(id)idleTimerProvider:(id)arg1 didProposeBehavior:(id)arg2 forReason:(id)arg3 ;
-(id)init;
-(id)coordinatorRequestedIdleTimerBehavior:(id)arg1 ;
@end

