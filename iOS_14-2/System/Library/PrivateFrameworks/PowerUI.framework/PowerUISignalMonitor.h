/*
* Generated on Thursday, January 14, 2021 at 2:26:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PowerUI.framework/PowerUI
*/


@protocol PowerUISignalMonitor <NSObject>
@optional
+(id)monitorWithDelegate:(id)arg1 withContext:(id)arg2 withKnowledgeStore:(id)arg3;

@required
+(id)monitorWithDelegate:(id)arg1;
-(unsigned long long)signalID;
-(void)stopMonitoring;
-(id)requiredFullChargeDate;
-(void)startMonitoring;

@end

