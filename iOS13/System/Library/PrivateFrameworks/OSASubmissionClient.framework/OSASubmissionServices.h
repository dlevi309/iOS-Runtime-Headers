/*
* Generated on Monday, March 1, 2021 at 2:35:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OSASubmissionClient.framework/OSASubmissionClient
*/


@protocol OSASubmissionServices <NSObject>
@required
-(void)submitWithOptions:(id)arg1 resultsCallback:(/*^block*/id)arg2;
-(void)cleanupWithHomeDirectoryLocation:(id)arg1;
-(void)canSubmitLogOfType:(id)arg1 withReply:(/*^block*/id)arg2;
-(void)updateConfigFile;
-(void)fetchDailyUserDynamicPrefLoggingListWithReply:(/*^block*/id)arg1;
-(void)fetchWeeklyUserDynamicPrefLoggingListWithReply:(/*^block*/id)arg1;
-(void)fetchMainConfigFileWithOverrrides:(id)arg1 withReply:(/*^block*/id)arg2;
-(void)fetchTypeBlackListWithReply:(/*^block*/id)arg1;
-(void)queryMessageTracer:(id)arg1 withReply:(/*^block*/id)arg2;
-(void)fetchMessageTracerWhitelistWithReply:(/*^block*/id)arg1;
-(void)fetchMessageTracerWhitelistWithVersion:(id)arg1 andReply:(/*^block*/id)arg2;
-(void)resetMessageTracer;

@end

