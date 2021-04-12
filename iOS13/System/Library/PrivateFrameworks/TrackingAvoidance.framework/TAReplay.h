/*
* Generated on Monday, March 1, 2021 at 2:34:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TrackingAvoidance.framework/TrackingAvoidance
*/

#import <libobjc.A.dylib/OSLogPersistenceDelegate.h>
#import <libobjc.A.dylib/OSActivityStreamDelegate.h>
#import <libobjc.A.dylib/OSDeviceDelegate.h>

@protocol OS_dispatch_semaphore;
@class TATrackingAvoidanceService, OSLogPersistence, OSActivityStream, NSObject, NSURL, NSString;

@interface TAReplay : NSObject <OSLogPersistenceDelegate, OSActivityStreamDelegate, OSDeviceDelegate> {

	TATrackingAvoidanceService* _service;
	OSLogPersistence* _persistence;
	OSActivityStream* _stream;
	NSObject*<OS_dispatch_semaphore> _persistenceWait;
	NSObject*<OS_dispatch_semaphore> _streamWait;
	NSURL* _outputPath;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)streamDidStart:(id)arg1 ;
-(void)streamDidStop:(id)arg1 ;
-(BOOL)activityStream:(id)arg1 deviceUDID:(id)arg2 deviceID:(id)arg3 status:(long long)arg4 error:(id)arg5 ;
-(BOOL)activityStream:(id)arg1 results:(id)arg2 ;
-(void)streamDidFail:(id)arg1 error:(id)arg2 ;
-(void)persistenceDidFinishReadingForStartDate:(id)arg1 endDate:(id)arg2 ;
-(BOOL)persistence:(id)arg1 results:(id)arg2 error:(id)arg3 ;
-(void)replaySingleEventLogString:(id)arg1 ;
-(id)initWithLogArchive:(id)arg1 outputPath:(id)arg2 ;
-(void)replayWithStartDate:(id)arg1 endDate:(id)arg2 ;
@end

