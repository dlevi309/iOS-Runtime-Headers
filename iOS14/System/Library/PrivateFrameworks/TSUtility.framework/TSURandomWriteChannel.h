/*
* Generated on Thursday, January 14, 2021 at 2:28:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
*/


@protocol TSURandomWriteChannel <TSUIOChannel>
@required
-(void)flushWithCompletion:(/*^block*/id)arg1;
-(void)writeData:(id)arg1 offset:(long long)arg2 handler:(/*^block*/id)arg3;
-(void)truncateToLength:(long long)arg1 completion:(/*^block*/id)arg2;

@end

