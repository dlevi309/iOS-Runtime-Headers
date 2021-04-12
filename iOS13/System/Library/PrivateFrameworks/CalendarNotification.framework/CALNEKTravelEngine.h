/*
* Generated on Monday, March 1, 2021 at 2:33:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
*/

#import <libobjc.A.dylib/CALNTravelEngine.h>
#import <libobjc.A.dylib/CADModule.h>

@protocol CALNTravelEngineDelegate;
@class EKTravelEngine, NSString;

@interface CALNEKTravelEngine : NSObject <CALNTravelEngine, CADModule> {

	BOOL _active;
	id<CALNTravelEngineDelegate> _delegate;
	EKTravelEngine* _travelEngine;

}

@property (nonatomic,readonly) EKTravelEngine * travelEngine;                           //@synthesize travelEngine=_travelEngine - In the implementation block
@property (assign,getter=isActive,nonatomic) BOOL active;                               //@synthesize active=_active - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<CALNTravelEngineDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<CALNTravelEngineDelegate>)delegate;
-(void)setDelegate:(id<CALNTravelEngineDelegate>)arg1 ;
-(BOOL)isActive;
-(void)setActive:(BOOL)arg1 ;
-(void)activate;
-(void)deactivate;
-(void)protectedDataDidBecomeAvailable;
-(void)receivedNotificationNamed:(id)arg1 ;
-(void)receivedAlarmNamed:(id)arg1 ;
-(void)didRegisterForAlarms;
-(void)handleBTAJob:(id)arg1 named:(const char*)arg2 ;
-(void)didRegisterForBackgroundTaskAgentJobs;
-(void)sendFeedbackForPostingLeaveByNotificationForEventWithExternalURL:(id)arg1 ;
-(void)sendFeedbackForPostingLeaveNowNotificationForEventWithExternalURL:(id)arg1 ;
-(EKTravelEngine *)travelEngine;
-(void)cancelHypothesisRefreshRequestForEventWithExternalURL:(id)arg1 ;
-(void)requestHypothesisRefreshAtDate:(id)arg1 forEventWithExternalURL:(id)arg2 ;
-(void)ceaseMonitoringForEventWithExternalURL:(id)arg1 ;
-(/*^block*/id)_authorizationChangedBlock;
-(id)initWithTravelEngine:(id)arg1 ;
-(/*^block*/id)_adviceReceivedBlock;
-(/*^block*/id)_eventSignficantlyChangedBlock;
@end

