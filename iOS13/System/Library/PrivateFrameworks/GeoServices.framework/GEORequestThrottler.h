/*
* Generated on Monday, March 1, 2021 at 2:30:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

