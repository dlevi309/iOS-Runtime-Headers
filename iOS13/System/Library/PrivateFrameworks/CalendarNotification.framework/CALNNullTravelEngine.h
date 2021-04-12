/*
* Generated on Monday, March 1, 2021 at 2:33:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
*/

#import <libobjc.A.dylib/CALNTravelEngine.h>

@protocol CALNTravelEngineDelegate;
@class NSString;

@interface CALNNullTravelEngine : NSObject <CALNTravelEngine> {

	id<CALNTravelEngineDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<CALNTravelEngineDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)sharedInstance;
-(id<CALNTravelEngineDelegate>)delegate;
-(void)setDelegate:(id<CALNTravelEngineDelegate>)arg1 ;
-(void)sendFeedbackForPostingLeaveByNotificationForEventWithExternalURL:(id)arg1 ;
-(void)sendFeedbackForPostingLeaveNowNotificationForEventWithExternalURL:(id)arg1 ;
-(void)cancelHypothesisRefreshRequestForEventWithExternalURL:(id)arg1 ;
-(void)requestHypothesisRefreshAtDate:(id)arg1 forEventWithExternalURL:(id)arg2 ;
-(void)ceaseMonitoringForEventWithExternalURL:(id)arg1 ;
@end

