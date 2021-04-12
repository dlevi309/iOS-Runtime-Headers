/*
* Generated on Thursday, January 14, 2021 at 2:20:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@protocol OS_dispatch_source;
@class geo_isolater, NSMutableDictionary, NSObject;

@interface GEORequestThrottler : NSObject {

	geo_isolater* _isolater;
	NSMutableDictionary* _enqueuedTickets;
	BOOL _isSubmitting;
	double _nextSubmissionTime;
	NSObject*<OS_dispatch_source> _submissionTimer;

}
+(id)sharedThrottler;
-(id)init;
-(void)submitTickets;
-(void)_scheduleTimer:(double)arg1 ;
-(void)enqueueTicket:(id)arg1 submissionHandler:(/*^block*/id)arg2 ;
-(void)cancelTicket:(id)arg1 ;
@end

