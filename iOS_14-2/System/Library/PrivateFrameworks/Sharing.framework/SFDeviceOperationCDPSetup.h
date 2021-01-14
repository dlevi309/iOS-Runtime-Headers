/*
* Generated on Thursday, January 14, 2021 at 2:22:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)_run;
-(id)init;
-(void)setCompletionHandler:(id)arg1 ;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(id)completionHandler;
-(id)presentingViewController;
-(void)activate;
-(void)_activate;
-(void)setPresentingViewController:(id)arg1 ;
-(int)_runCDPApprovalServerStart;
-(int)_runCDPSetupRequest;
-(void)uiController:(id)arg1 didPresentRootViewController:(id)arg2 ;
-(double)metricSeconds;
-(void)setSfSession:(SFSession *)arg1 ;
-(void)invalidate;
-(void)_complete:(id)arg1 ;
-(SFSession *)sfSession;
@end

