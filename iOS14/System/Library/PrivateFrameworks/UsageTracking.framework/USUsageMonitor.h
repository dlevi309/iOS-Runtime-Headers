/*
* Generated on Thursday, January 14, 2021 at 2:28:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UsageTracking.framework/UsageTracking
*/


@class NSXPCConnection;

@interface USUsageMonitor : NSObject {

	NSXPCConnection* _xpcConnection;

}

@property (readonly) NSXPCConnection * xpcConnection;              //@synthesize xpcConnection=_xpcConnection - In the implementation block
-(NSXPCConnection *)xpcConnection;
-(id)init;
-(void)dealloc;
-(void)startMonitoringBudgets:(id)arg1 darwinNotificationName:(id)arg2 notificationTimes:(id)arg3 clientIdentifier:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)stopMonitoringBudgets:(id)arg1 clientIdentifier:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)checkStatusOfBudgets:(id)arg1 clientIdentifier:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)startMonitoringBudgets:(id)arg1 darwinNotificationName:(id)arg2 notificationTimes:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(BOOL)startMonitoringBudgets:(id)arg1 darwinNotificationName:(id)arg2 notificationTimes:(id)arg3 error:(id*)arg4 ;
-(void)stopMonitoringBudgets:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)stopMonitoringAllBudgetsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)checkStatusOfBudgets:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)checkStatusOfBudgets:(id)arg1 error:(id*)arg2 ;
-(void)checkStatusOfAllBudgetsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)checkStatusOfBudgets:(id)arg1 clientIdentifiers:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)checkStatusOfBudgets:(id)arg1 clientIdentifiers:(id)arg2 error:(id*)arg3 ;
@end

