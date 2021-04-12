/*
* Generated on Thursday, January 14, 2021 at 2:27:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)clientConfiguration:(id)arg1 handleIdleEvent:(unsigned long long)arg2 ;
-(id<ITIdleTimerStateServiceDelegate>)delegate;
-(BOOL)isIdleTimerServiceAvailable;
-(void)clientDidDisconnect:(id)arg1 ;
-(void)_addStateCaptureHandler;
-(id)initWithDispatchQueue:(id)arg1 ;
-(void)setDelegate:(id<ITIdleTimerStateServiceDelegate>)arg1 ;
-(id)_identifierForClientProcess:(id)arg1 ;
-(void)removeIdleTimerConfigurationFromProcess:(id)arg1 forReason:(id)arg2 ;
-(id)initWithDispatchQueue:(id)arg1 delegate:(id)arg2 ;
-(BOOL)addIdleTimerConfiguration:(id)arg1 fromProcess:(id)arg2 forReason:(id)arg3 ;
-(void)dealloc;
@end

