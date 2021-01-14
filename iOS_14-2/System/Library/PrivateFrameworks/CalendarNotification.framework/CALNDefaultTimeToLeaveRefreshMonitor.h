/*
* Generated on Thursday, January 14, 2021 at 2:26:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
*/

#import <libobjc.A.dylib/CALNTimeToLeaveRefreshMonitor.h>
#import <libobjc.A.dylib/CADModule.h>

@protocol CALNTimeToLeaveRefreshMonitorDelegate, CALNTimeToLeaveRefreshStorage;
@class NSString;

@interface CALNDefaultTimeToLeaveRefreshMonitor : NSObject <CALNTimeToLeaveRefreshMonitor, CADModule> {

	BOOL _active;
	BOOL _registeredForAlarms;
	id<CALNTimeToLeaveRefreshMonitorDelegate> _delegate;
	id<CALNTimeToLeaveRefreshStorage> _storage;

}

@property (nonatomic,readonly) id<CALNTimeToLeaveRefreshStorage> storage;                            //@synthesize storage=_storage - In the implementation block
@property (assign,getter=isActive,nonatomic) BOOL active;                                            //@synthesize active=_active - In the implementation block
@property (assign,getter=isRegisteredForAlarms,nonatomic) BOOL registeredForAlarms;                  //@synthesize registeredForAlarms=_registeredForAlarms - In the implementation block
@property (assign,nonatomic,__weak) id<CALNTimeToLeaveRefreshMonitorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_refreshTimerAlarmNameForEventExternalURL:(id)arg1 ;
-(id)initWithStorage:(id)arg1 ;
-(void)didRegisterForAlarms;
-(void)receivedNotificationNamed:(id)arg1 ;
-(void)setActive:(BOOL)arg1 ;
-(id<CALNTimeToLeaveRefreshMonitorDelegate>)delegate;
-(void)receivedAlarmNamed:(id)arg1 ;
-(id<CALNTimeToLeaveRefreshStorage>)storage;
-(BOOL)isActive;
-(void)protectedDataDidBecomeAvailable;
-(void)deactivate;
-(void)activate;
-(void)setDelegate:(id<CALNTimeToLeaveRefreshMonitorDelegate>)arg1 ;
-(void)removeRefreshTimerForEventExternalURL:(id)arg1 ;
-(void)_refreshTimerFiredForEventExternalURL:(id)arg1 ;
-(BOOL)isRegisteredForAlarms;
-(void)setRegisteredForAlarms:(BOOL)arg1 ;
-(void)setUpRefreshTimerWithTriggerDate:(id)arg1 eventExternalURL:(id)arg2 ;
@end

