/*
* Generated on Thursday, January 14, 2021 at 2:23:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
*/


@protocol OS_dispatch_queue, ASDTestFlightServiceHostDelegate;
@class NSExtension, NSObject, NSString;

@interface ASDTestFlightServiceHost : NSObject {

	id _matchingContext;
	NSExtension* _currentExtension;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	NSObject*<OS_dispatch_queue> _runQueue;
	double _serviceTime;
	id<ASDTestFlightServiceHostDelegate> _delegate;

}

@property (nonatomic,readonly) long long extensionStatus; 
@property (nonatomic,readonly) NSString * extensionIdentifier; 
@property (assign,nonatomic,__weak) id<ASDTestFlightServiceHostDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)_getExtensionFromMatchingExtensions:(id)arg1 ;
-(id)initWithQueue:(id)arg1 ;
-(long long)extensionStatus;
-(id<ASDTestFlightServiceHostDelegate>)delegate;
-(void)_updateCurrentExtensionTo:(id)arg1 ;
-(void)setDelegate:(id<ASDTestFlightServiceHostDelegate>)arg1 ;
-(void)reloadAppsFromServerWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_reloadExtensions;
-(void)_startMonitoringExtensions;
-(void)_callExtensionWithContext:(/*^block*/id)arg1 interruptionBlock:(/*^block*/id)arg2 ;
-(void)notifyOfReceivedPushMessages:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)notifyOfReceivedPushToken:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSString *)extensionIdentifier;
-(void)notifyOfReachedTerminalPhaseWithBetaBundleID:(id)arg1 terminalPhase:(long long)arg2 error:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_stopMonitoringExtensions;
-(void)dealloc;
@end

