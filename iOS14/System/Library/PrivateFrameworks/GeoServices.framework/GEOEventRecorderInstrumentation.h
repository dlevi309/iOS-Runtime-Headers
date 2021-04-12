/*
* Generated on Thursday, January 14, 2021 at 2:21:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@protocol OS_dispatch_queue;
@class NSObject, NSString, NSDate;

@interface GEOEventRecorderInstrumentation : NSObject {

	NSObject*<OS_dispatch_queue> _loggingQueue;
	NSString* _filepath;
	NSString* _geoFilepath;
	NSString* _movieFilepath;
	NSDate* _startDate;

}
+(id)initializeDefaultInstrumentation;
+(id)defaultInstrumentation;
+(void)endInstrumentation;
-(id)init;
-(void)_setupLogging;
-(void)initializeFilepaths;
-(void)writeString:(id)arg1 ToFilepath:(id)arg2 ;
-(void)_captureScreenVideo:(id)arg1 ;
-(void)captureUIEvent:(id)arg1 ;
-(id)getRecordedFilePaths;
-(void)captureUserActionLogMessageEvent:(id)arg1 ;
-(void)captureEventRecorderScreenVideo;
@end

