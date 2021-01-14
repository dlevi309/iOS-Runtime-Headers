/*
* Generated on Thursday, January 14, 2021 at 2:27:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
*/


@protocol MTIDService <NSObject>
@required
-(void)performMaintenanceWithCompletion:(/*^block*/id)arg1;
-(id)IDFieldsForTopic:(id)arg1 options:(id)arg2;
-(id)resetIDForTopics:(id)arg1 options:(id)arg2;
-(void)IDFieldsForTopic:(id)arg1 options:(id)arg2 completion:(/*^block*/id)arg3;
-(void)resetIDForTopics:(id)arg1 options:(id)arg2 completion:(/*^block*/id)arg3;
-(void)queryIDForTopic:(id)arg1 type:(long long)arg2 options:(id)arg3 completion:(/*^block*/id)arg4;

@end

