/*
* Generated on Monday, March 1, 2021 at 2:34:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SIMToolkitUI.framework/SIMToolkitUI
*/


@protocol OS_os_log;
@class NSObject, STKAlertSessionEventQueue;

@interface STKAlertSessionManager : NSObject {

	NSObject*<OS_os_log> _log;
	STKAlertSessionEventQueue* _eventQueue;

}

@property (nonatomic,readonly) NSObject*<OS_os_log> log;                            //@synthesize log=_log - In the implementation block
@property (nonatomic,readonly) STKAlertSessionEventQueue * eventQueue;              //@synthesize eventQueue=_eventQueue - In the implementation block
-(NSObject*<OS_os_log>)log;
-(STKAlertSessionEventQueue *)eventQueue;
-(id)remoteAlertDescriptorForSession:(id)arg1 ;
-(void)_willPresentAlertHandle:(id)arg1 ;
-(id)initWithEventQueue:(id)arg1 logger:(id)arg2 ;
-(void)enqueuePresentationForSession:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

