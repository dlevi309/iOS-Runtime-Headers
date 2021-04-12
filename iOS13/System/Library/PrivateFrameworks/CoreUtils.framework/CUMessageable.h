/*
* Generated on Monday, March 1, 2021 at 2:30:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
*/


@protocol CUMessageable
@required
-(void)registerRequestID:(id)arg1 options:(id)arg2 handler:(/*^block*/id)arg3;
-(void)registerEventID:(id)arg1 options:(id)arg2 handler:(/*^block*/id)arg3;
-(void)deregisterEventID:(id)arg1;
-(void)sendEventID:(id)arg1 event:(id)arg2 options:(id)arg3 completion:(/*^block*/id)arg4;
-(void)deregisterRequestID:(id)arg1;
-(void)sendRequestID:(id)arg1 request:(id)arg2 options:(id)arg3 responseHandler:(/*^block*/id)arg4;

@end

