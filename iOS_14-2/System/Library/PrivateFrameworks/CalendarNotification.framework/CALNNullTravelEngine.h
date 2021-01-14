/*
* Generated on Thursday, January 14, 2021 at 2:26:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
*/

#import <libobjc.A.dylib/CALNTravelEngine.h>

@protocol CALNTravelEngineDelegate;
@class NSString;

@interface CALNNullTravelEngine : NSObject <CALNTravelEngine> {

	id<CALNTravelEngineDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<CALNTravelEngineDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)ceaseMonitoringForEventWithExternalURL:(id)arg1 ;
-(id<CALNTravelEngineDelegate>)delegate;
-(void)setDelegate:(id<CALNTravelEngineDelegate>)arg1 ;
-(void)sendFeedbackForPostingLeaveByNotificationForEventWithExternalURL:(id)arg1 ;
-(void)sendFeedbackForPostingLeaveNowNotificationForEventWithExternalURL:(id)arg1 ;
-(void)requestHypothesisRefreshAtDate:(id)arg1 forEventWithExternalURL:(id)arg2 ;
-(void)cancelHypothesisRefreshRequestForEventWithExternalURL:(id)arg1 ;
@end

