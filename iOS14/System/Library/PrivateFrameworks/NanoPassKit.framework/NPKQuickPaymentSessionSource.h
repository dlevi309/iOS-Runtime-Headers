/*
* Generated on Thursday, January 14, 2021 at 2:28:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/


@protocol NPKQuickPaymentSessionSourceDelegate, OS_dispatch_queue;
@class NPKButtonListener, NSObject, PKPass, NSDictionary, NPKQuickPaymentSessionLocalAuthenticationCoordinator;

@interface NPKQuickPaymentSessionSource : NSObject {

	id<NPKQuickPaymentSessionSourceDelegate> _delegate;
	NPKButtonListener* _buttonListener;
	NSObject*<OS_dispatch_queue> _sessionSourceQueue;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	BOOL _delegateHandlingButtonEvents;
	BOOL _deferAuthorization;
	BOOL _requireFirstInQueue;
	unsigned long long _preconditionState;
	PKPass* _initialPass;
	NSDictionary* _vasPasses;
	NPKQuickPaymentSessionLocalAuthenticationCoordinator* _localAuthenticationCoordinator;

}
-(void)_performDelegateCallback:(/*^block*/id)arg1 ;
-(void)_handlePMUButtonEvent;
-(void)setRequireFirstInQueue:(BOOL)arg1 ;
-(void)setDeferAuthorization:(BOOL)arg1 ;
-(void)setVasPasses:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 buttonListener:(id)arg2 callbackQueue:(id)arg3 ;
-(void)handleDoublePressEvent;
-(void)setDelegateHandlingButtonEvents:(BOOL)arg1 ;
-(void)setPreconditionState:(unsigned long long)arg1 ;
-(void)setInitialPass:(id)arg1 ;
-(void)setLocalAuthenticationCoordinator:(id)arg1 ;
@end

