/*
* Generated on Thursday, January 14, 2021 at 2:26:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (assign,nonatomic,__weak) id<CALNTravelEngineDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didRegisterForAlarms;
-(void)ceaseMonitoringForEventWithExternalURL:(id)arg1 ;
-(void)receivedNotificationNamed:(id)arg1 ;
-(void)setActive:(BOOL)arg1 ;
-(/*^block*/id)_eventSignficantlyChangedBlock;
-(id<CALNTravelEngineDelegate>)delegate;
-(void)receivedAlarmNamed:(id)arg1 ;
-(BOOL)isActive;
-(void)protectedDataDidBecomeAvailable;
-(/*^block*/id)_authorizationChangedBlock;
-(EKTravelEngine *)travelEngine;
-(void)deactivate;
-(void)activate;
-(void)setDelegate:(id<CALNTravelEngineDelegate>)arg1 ;
-(/*^block*/id)_adviceReceivedBlock;
-(void)sendFeedbackForPostingLeaveByNotificationForEventWithExternalURL:(id)arg1 ;
-(void)sendFeedbackForPostingLeaveNowNotificationForEventWithExternalURL:(id)arg1 ;
-(id)initWithTravelEngine:(id)arg1 ;
-(void)requestHypothesisRefreshAtDate:(id)arg1 forEventWithExternalURL:(id)arg2 ;
-(void)cancelHypothesisRefreshRequestForEventWithExternalURL:(id)arg1 ;
@end

