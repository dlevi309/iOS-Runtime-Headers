/*
* Generated on Monday, March 1, 2021 at 2:34:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDQueryServer.h>

@interface HDBatchedQueryServer : HDQueryServer {

	/*^block*/id _unitTest_queryServerObjectEnumerationHandler;
	/*^block*/id _unitTest_queryServerWillSendBatchHandler;

}

@property (nonatomic,copy) id unitTest_queryServerObjectEnumerationHandler;              //@synthesize unitTest_queryServerObjectEnumerationHandler=_unitTest_queryServerObjectEnumerationHandler - In the implementation block
@property (nonatomic,copy) id unitTest_queryServerWillSendBatchHandler;                  //@synthesize unitTest_queryServerWillSendBatchHandler=_unitTest_queryServerWillSendBatchHandler - In the implementation block
-(long long)batchObjectsWithEnumerator:(id)arg1 includeDeletedObjects:(BOOL)arg2 error:(id*)arg3 batchHandler:(/*^block*/id)arg4 ;
-(long long)batchObjectsWithEnumerator:(id)arg1 error:(id*)arg2 handler:(/*^block*/id)arg3 ;
-(id)unitTest_queryServerObjectEnumerationHandler;
-(void)setUnitTest_queryServerObjectEnumerationHandler:(id)arg1 ;
-(id)unitTest_queryServerWillSendBatchHandler;
-(void)setUnitTest_queryServerWillSendBatchHandler:(id)arg1 ;
@end

