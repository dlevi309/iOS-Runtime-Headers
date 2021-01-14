/*
* Generated on Thursday, January 14, 2021 at 2:23:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/


@protocol WBSCyclerServiceProtocol
@required
-(void)setValue:(id)arg1 forConfigurationKey:(id)arg2 reply:(/*^block*/id)arg3;
-(void)startCyclingFromBeginning:(BOOL)arg1 reply:(/*^block*/id)arg2;
-(void)stopCyclingWithReply:(/*^block*/id)arg1;
-(void)sendRequestToTestSuite:(id)arg1 reply:(/*^block*/id)arg2;
-(void)fetchStatusWithReply:(/*^block*/id)arg1;
-(void)setTestTargetEndpoint:(id)arg1 reply:(/*^block*/id)arg2;

@end

