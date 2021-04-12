/*
* Generated on Monday, March 1, 2021 at 2:31:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/


@class NSURL, NSArray, NSMutableArray, SSMetricsEventController, NSString;

@interface SSMetricsEventReportingSession : NSObject {

	long long _insertTimestamp;
	NSURL* _reportingURL;
	NSArray* _unreportedEvents;
	NSMutableArray* _unreportedEventPIDs;
	SSMetricsEventController* _eventController;
	NSString* _sessionCanaryIdentifier;
	BOOL _suppressUserInfo;

}
-(id)initWithReportingURL:(id)arg1 insertTimestamp:(long long)arg2 eventController:(id)arg3 ;
-(id)initWithReportingURL:(id)arg1 insertTimestamp:(long long)arg2 suppressUserInfo:(BOOL)arg3 eventController:(id)arg4 ;
-(id)_unreportedEvents;
-(id)writeEventsToStream:(id)arg1 uncompressedMaxSize:(long long)arg2 ;
-(id)sessionCanaryIdentifier;
-(long long)_estimateSizeOfJsonObject:(id)arg1 ;
-(id)initWithReportingURL:(id)arg1 insertTimestamp:(long long)arg2 suppressDSID:(BOOL)arg3 eventController:(id)arg4 ;
-(BOOL)anyUnreportedEvents;
-(BOOL)markEventsAsReported;
-(id)writeEventsToStream:(id)arg1 ;
-(void)_writeString:(id)arg1 toData:(id)arg2 ;
@end

