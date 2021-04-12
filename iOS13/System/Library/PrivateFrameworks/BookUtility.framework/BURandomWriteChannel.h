/*
* Generated on Monday, March 1, 2021 at 2:34:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BookUtility.framework/BookUtility
*/


@protocol BURandomWriteChannel <BUIOChannel>
@required
-(void)flushWithCompletion:(/*^block*/id)arg1;
-(void)writeData:(id)arg1 offset:(long long)arg2 handler:(/*^block*/id)arg3;
-(void)truncateToLength:(long long)arg1 completion:(/*^block*/id)arg2;

@end

