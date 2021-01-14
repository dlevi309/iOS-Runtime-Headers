/*
* Generated on Thursday, January 14, 2021 at 2:28:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OSAnalyticsPrivate.framework/OSAnalyticsPrivate
*/


@protocol OSASyncProxyServices <NSObject>
@required
-(void)request:(id)arg1 logListWithOptions:(id)arg2 onComplete:(/*^block*/id)arg3;
-(void)request:(id)arg1 transferLog:(id)arg2 withOptions:(id)arg3 onComplete:(/*^block*/id)arg4;
-(void)request:(id)arg1 transferGroupWithOptions:(id)arg2 onComplete:(/*^block*/id)arg3;
-(void)requestProxyMetadata:(id)arg1 onComplete:(/*^block*/id)arg2;
-(void)deliver:(id)arg1 tasking:(id)arg2 taskId:(id)arg3 fromBlob:(id)arg4;
-(void)synchronize:(id)arg1 withOptions:(id)arg2 onComplete:(/*^block*/id)arg3;
-(void)listDevices:(/*^block*/id)arg1;
-(void)request:(id)arg1 logList:(/*^block*/id)arg2;
-(void)request:(id)arg1 transferLog:(id)arg2 onComplete:(/*^block*/id)arg3;

@end

