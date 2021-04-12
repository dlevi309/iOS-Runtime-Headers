/*
* Generated on Monday, March 1, 2021 at 2:34:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaStream.framework/MediaStream
*/


@protocol MSPlatform <NSObject>
@optional
-(id)pushToken;
-(Class)deletePluginClass;
-(void)didDetectUnrecoverableCondition;
-(BOOL)policyMaySendDelete;
-(id)pushTokenForPersonID:(id)arg1;
-(BOOL)shouldEnableNewFeatures;
-(id)contentURLForPersonID:(id)arg1;
-(BOOL)isPerformanceLoggingEnabled;

@required
-(id)UDID;
-(id)socketOptions;
-(BOOL)shouldLogAtLevel:(int)arg1;
-(void)logFacility:(int)arg1 level:(int)arg2 format:(id)arg3 args:(char*)arg4;
-(void)logFile:(const char*)arg1 func:(const char*)arg2 line:(int)arg3 facility:(int)arg4 level:(int)arg5 format:(id)arg6 args:(char*)arg7;
-(id)fullNameFromFirstName:(id)arg1 lastName:(id)arg2;
-(id)pathMediaStreamDir;
-(Class)publisherPluginClass;
-(Class)subscriberPluginClass;
-(id)hardwareString;
-(id)OSString;
-(id)appBundleInfoString;
-(BOOL)policyMayUpload;
-(BOOL)policyMayDownload;
-(id)baseURLForPersonID:(id)arg1;
-(id)authTokenForPersonID:(id)arg1;
-(id)theDaemon;

@end

