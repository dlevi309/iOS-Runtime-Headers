/*
* Generated on Thursday, January 14, 2021 at 2:20:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@protocol OS_dispatch_queue;
@class NSObject, NSString, NSDate, NSMutableDictionary, GEOXPCActivity;

@interface GEORequestCountPowerLogger : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSString* _eventName;
	NSDate* _startDate;
	NSMutableDictionary* _clientInfo;
	GEOXPCActivity* _activity;

}
+(id)sharedInstance;
+(void)cancelOldActivities;
+(BOOL)shouldIgnoreRequestType:(int)arg1 fromClientWithId:(id)arg2 ;
-(void)_scheduleXpcActivity;
-(id)init;
-(void)_cancelXpcActivity;
-(void)startNewSessionWithName:(id)arg1 ;
-(void)incrementCountForClient:(id)arg1 requestType:(int)arg2 ;
-(void)_flushToPowerLog;
-(void)dealloc;
@end

