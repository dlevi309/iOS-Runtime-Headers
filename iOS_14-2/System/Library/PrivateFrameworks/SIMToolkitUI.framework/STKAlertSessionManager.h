/*
* Generated on Thursday, January 14, 2021 at 2:25:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(STKAlertSessionEventQueue *)eventQueue;
-(NSObject*<OS_os_log>)log;
-(id)remoteAlertDescriptorForSession:(id)arg1 ;
-(void)_willPresentAlertHandle:(id)arg1 ;
-(id)initWithEventQueue:(id)arg1 logger:(id)arg2 ;
-(void)enqueuePresentationForSession:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

