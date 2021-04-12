/*
* Generated on Monday, March 1, 2021 at 2:35:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/


@protocol NPKQuickPaymentSessionSourceDelegate, OS_dispatch_queue;
@class NPKPMUButtonListener, NSObject, PKPass, NSDictionary, NPKQuickPaymentSessionLocalAuthenticationCoordinator;

@interface NPKQuickPaymentSessionSource : NSObject {

	id<NPKQuickPaymentSessionSourceDelegate> _delegate;
	NPKPMUButtonListener* _buttonListener;
	NSObject*<OS_dispatch_queue> _sessionSourceQueue;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	BOOL _delegateHandlingButtonEvents;
	BOOL _deferAuthorization;
	unsigned long long _preconditionState;
	PKPass* _initialPass;
	NSDictionary* _vasPasses;
	NPKQuickPaymentSessionLocalAuthenticationCoordinator* _localAuthenticationCoordinator;

}
-(void)_performDelegateCallback:(/*^block*/id)arg1 ;
-(void)_handlePMUButtonEvent;
-(void)setDeferAuthorization:(BOOL)arg1 ;
-(void)setVasPasses:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 callbackQueue:(id)arg2 ;
-(void)setDelegateHandlingButtonEvents:(BOOL)arg1 ;
-(void)setPreconditionState:(unsigned long long)arg1 ;
-(void)setInitialPass:(id)arg1 ;
-(void)setLocalAuthenticationCoordinator:(id)arg1 ;
@end

