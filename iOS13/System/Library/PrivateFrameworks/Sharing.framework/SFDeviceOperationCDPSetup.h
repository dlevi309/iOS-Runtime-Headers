/*
* Generated on Monday, March 1, 2021 at 2:30:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
*/

#import <libobjc.A.dylib/CDPUIDelegate.h>

@protocol OS_dispatch_source, OS_dispatch_queue;
@class CDPContext, CDPStateController, NSObject, SFSession, NSString;

@interface SFDeviceOperationCDPSetup : NSObject <CDPUIDelegate> {

	int _cdpApprovalServerState;
	CDPContext* _cdpContext;
	CDPStateController* _cdpController;
	int _cdpSetupRequestState;
	BOOL _invalidateCalled;
	unsigned long long _startTicks;
	NSObject*<OS_dispatch_source> _timeoutTimer;
	/*^block*/id _completionHandler;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	double _metricSeconds;
	id _presentingViewController;
	SFSession* _sfSession;

}

@property (nonatomic,copy) id completionHandler;                                      //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,readonly) double metricSeconds;                                  //@synthesize metricSeconds=_metricSeconds - In the implementation block
@property (nonatomic,retain) id presentingViewController;                             //@synthesize presentingViewController=_presentingViewController - In the implementation block
@property (nonatomic,retain) SFSession * sfSession;                                   //@synthesize sfSession=_sfSession - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)_activate;
-(void)invalidate;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(id)presentingViewController;
-(void)activate;
-(void)setPresentingViewController:(id)arg1 ;
-(void)_run;
-(void)_complete:(id)arg1 ;
-(int)_runCDPApprovalServerStart;
-(int)_runCDPSetupRequest;
-(void)uiController:(id)arg1 didPresentRootViewController:(id)arg2 ;
-(double)metricSeconds;
-(SFSession *)sfSession;
-(void)setSfSession:(SFSession *)arg1 ;
@end

