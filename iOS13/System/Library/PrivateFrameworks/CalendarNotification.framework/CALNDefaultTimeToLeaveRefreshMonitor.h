/*
* Generated on Monday, March 1, 2021 at 2:33:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
*/

#import <libobjc.A.dylib/CALNTimeToLeaveRefreshMonitor.h>
#import <libobjc.A.dylib/CADModule.h>

@protocol CALNTimeToLeaveRefreshMonitorDelegate, CALNTimeToLeaveRefreshStorage;
@class NSString;

@interface CALNDefaultTimeToLeaveRefreshMonitor : NSObject <CALNTimeToLeaveRefreshMonitor, CADModule> {

	BOOL _active;
	BOOL _registeredForBackgroundTaskAgentJobs;
	id<CALNTimeToLeaveRefreshMonitorDelegate> _delegate;
	id<CALNTimeToLeaveRefreshStorage> _storage;

}

@property (nonatomic,readonly) id<CALNTimeToLeaveRefreshStorage> storage;                                                          //@synthesize storage=_storage - In the implementation block
@property (assign,getter=isActive,nonatomic) BOOL active;                                                                          //@synthesize active=_active - In the implementation block
@property (assign,getter=isRegisteredForBackgroundTaskAgentJobs,nonatomic) BOOL registeredForBackgroundTaskAgentJobs;              //@synthesize registeredForBackgroundTaskAgentJobs=_registeredForBackgroundTaskAgentJobs - In the implementation block
@property (assign,nonatomic,__weak) id<CALNTimeToLeaveRefreshMonitorDelegate> delegate;                                            //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_refreshTimerBTAJobNameForEventExternalURL:(id)arg1 ;
-(id<CALNTimeToLeaveRefreshStorage>)storage;
-(id<CALNTimeToLeaveRefreshMonitorDelegate>)delegate;
-(void)setDelegate:(id<CALNTimeToLeaveRefreshMonitorDelegate>)arg1 ;
-(BOOL)isActive;
-(void)setActive:(BOOL)arg1 ;
-(id)initWithStorage:(id)arg1 ;
-(void)activate;
-(void)deactivate;
-(void)protectedDataDidBecomeAvailable;
-(void)receivedNotificationNamed:(id)arg1 ;
-(void)receivedAlarmNamed:(id)arg1 ;
-(void)didRegisterForAlarms;
-(void)handleBTAJob:(id)arg1 named:(const char*)arg2 ;
-(void)didRegisterForBackgroundTaskAgentJobs;
-(void)setUpRefreshTimerWithTriggerDate:(id)arg1 eventExternalURL:(id)arg2 ;
-(void)removeRefreshTimerForEventExternalURL:(id)arg1 ;
-(void)setRegisteredForBackgroundTaskAgentJobs:(BOOL)arg1 ;
-(void)_refreshTimerFiredForEventExternalURL:(id)arg1 ;
-(BOOL)isRegisteredForBackgroundTaskAgentJobs;
@end

