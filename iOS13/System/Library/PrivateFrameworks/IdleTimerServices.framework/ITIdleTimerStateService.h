/*
* Generated on Monday, March 1, 2021 at 2:32:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IdleTimerServices.framework/IdleTimerServices
*/

#import <libobjc.A.dylib/ITIdleTimerStateServerDelegate.h>

@protocol OS_dispatch_queue, BSInvalidatable, ITIdleTimerStateServiceDelegate;
@class ITIdleTimerStateServer, NSObject, NSMutableDictionary, NSString;

@interface ITIdleTimerStateService : NSObject <ITIdleTimerStateServerDelegate> {

	ITIdleTimerStateServer* _server;
	NSObject*<OS_dispatch_queue> _calloutDispatchQueue;
	NSMutableDictionary* _assertionsByReason;
	NSMutableDictionary* _assertionReasonsByClientID;
	id<BSInvalidatable> _stateCaptureAssertion;
	id<ITIdleTimerStateServiceDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<ITIdleTimerStateServiceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id<ITIdleTimerStateServiceDelegate>)delegate;
-(void)setDelegate:(id<ITIdleTimerStateServiceDelegate>)arg1 ;
-(id)initWithDispatchQueue:(id)arg1 ;
-(BOOL)isIdleTimerServiceAvailable;
-(id)initWithDispatchQueue:(id)arg1 delegate:(id)arg2 ;
-(void)clientDidDisconnect:(id)arg1 ;
-(BOOL)addIdleTimerConfiguration:(id)arg1 fromProcess:(id)arg2 forReason:(id)arg3 ;
-(void)removeIdleTimerConfigurationFromProcess:(id)arg1 forReason:(id)arg2 ;
-(BOOL)clientConfiguration:(id)arg1 handleIdleEvent:(unsigned long long)arg2 ;
-(void)_addStateCaptureHandler;
-(id)_identifierForClientProcess:(id)arg1 ;
@end

