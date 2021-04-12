/*
* Generated on Monday, March 1, 2021 at 2:33:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/


@protocol WBSCyclerServiceProtocol
@required
-(void)setTestTargetEndpoint:(id)arg1 reply:(/*^block*/id)arg2;
-(void)setValue:(id)arg1 forConfigurationKey:(id)arg2 reply:(/*^block*/id)arg3;
-(void)startCyclingFromBeginning:(BOOL)arg1 reply:(/*^block*/id)arg2;
-(void)stopCyclingWithReply:(/*^block*/id)arg1;
-(void)sendRequestToTestSuite:(id)arg1 reply:(/*^block*/id)arg2;
-(void)fetchStatusWithReply:(/*^block*/id)arg1;

@end

