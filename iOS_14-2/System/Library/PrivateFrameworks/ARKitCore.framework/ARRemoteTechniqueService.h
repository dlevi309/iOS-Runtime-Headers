/*
* Generated on Thursday, January 14, 2021 at 2:26:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
*/


@protocol ARRemoteTechniqueService <NSObject>
@required
-(void)setActive:(BOOL)arg1;
-(void)prepare:(BOOL)arg1;
-(void)requestResultDataAtTimestamp:(double)arg1 context:(id)arg2;
-(void)processData:(id)arg1 reply:(/*^block*/id)arg2;
-(void)isActiveWithReply:(/*^block*/id)arg1;
-(void)captureBehaviorWithReply:(/*^block*/id)arg1;
-(void)numberOfActiveConnectionsWithReply:(/*^block*/id)arg1;
-(void)requiredSensorDataTypesWithReply:(/*^block*/id)arg1;
-(void)requiredTimeIntervalWithReply:(/*^block*/id)arg1;
-(void)resultDataClassesWithReply:(/*^block*/id)arg1;

@end

