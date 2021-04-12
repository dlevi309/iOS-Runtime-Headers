/*
* Generated on Thursday, January 14, 2021 at 2:27:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/ESDaemonSupport.framework/ESDaemonSupport
*/

#import <ESDaemonSupport/ESDClientDelegate.h>
#import <libobjc.A.dylib/DAEventsCalendarAvailabilityResponseConsumer.h>

@protocol OS_dispatch_queue;
@class NSDate, NSString, NSArray, NSObject;

@interface ESDClientCalendarAvailabilityResponseDelegate : ESDClientDelegate <DAEventsCalendarAvailabilityResponseConsumer> {

	NSDate* _startDate;
	NSDate* _endDate;
	NSString* _ignoredEventID;
	NSArray* _addresses;
	id _requestID;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)calendarAvailabilityRequestFinishedWithError:(id)arg1 ;
-(void)finishWithError:(id)arg1 ;
-(void)dealloc;
-(void)performRequest;
-(void)calendarAvailabilityRequestReturnedResults:(id)arg1 ;
-(id)initWithAccountID:(id)arg1 client:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 ignoredEventID:(id)arg5 addresses:(id)arg6 ;
@end

