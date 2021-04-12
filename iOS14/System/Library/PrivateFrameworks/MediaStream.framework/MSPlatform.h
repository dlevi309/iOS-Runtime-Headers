/*
* Generated on Thursday, January 14, 2021 at 2:26:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaStream.framework/MediaStream
*/


@protocol MSPlatform <NSObject>
@optional
-(id)pushToken;
-(id)contentURLForPersonID:(id)arg1;
-(BOOL)shouldEnableNewFeatures;
-(Class)deletePluginClass;
-(id)pushTokenForPersonID:(id)arg1;
-(void)didDetectUnrecoverableCondition;
-(BOOL)isPerformanceLoggingEnabled;
-(BOOL)policyMaySendDelete;

@required
-(id)fullNameFromFirstName:(id)arg1 lastName:(id)arg2;
-(void)logFile:(const char*)arg1 func:(const char*)arg2 line:(int)arg3 facility:(int)arg4 level:(int)arg5 format:(id)arg6 args:(char*)arg7;
-(id)authTokenForPersonID:(id)arg1;
-(id)socketOptions;
-(BOOL)shouldLogAtLevel:(int)arg1;
-(id)pathMediaStreamDir;
-(id)baseURLForPersonID:(id)arg1;
-(id)hardwareString;
-(Class)subscriberPluginClass;
-(id)OSString;
-(BOOL)policyMayDownload;
-(BOOL)policyMayUpload;
-(Class)publisherPluginClass;
-(id)UDID;
-(id)appBundleInfoString;
-(void)logFacility:(int)arg1 level:(int)arg2 format:(id)arg3 args:(char*)arg4;
-(id)theDaemon;

@end

