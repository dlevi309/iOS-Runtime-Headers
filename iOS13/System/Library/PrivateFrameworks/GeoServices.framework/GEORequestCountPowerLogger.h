/*
* Generated on Monday, March 1, 2021 at 2:30:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(BOOL)shouldIgnoreRequestType:(unsigned char)arg1 fromClientWithId:(id)arg2 ;
+(void)cancelOldActivities;
-(id)init;
-(void)dealloc;
-(void)startNewSessionWithName:(id)arg1 ;
-(void)_flushToPowerLog;
-(void)_cancelXpcActivity;
-(void)_scheduleXpcActivity;
-(void)incrementCountForClient:(id)arg1 requestType:(unsigned char)arg2 ;
@end

