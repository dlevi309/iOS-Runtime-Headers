/*
* Generated on Thursday, January 14, 2021 at 2:21:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
*/


@protocol CUMessageable
@required
-(void)deregisterEventID:(id)arg1;
-(void)deregisterRequestID:(id)arg1;
-(void)sendRequestID:(id)arg1 request:(id)arg2 options:(id)arg3 responseHandler:(/*^block*/id)arg4;
-(void)registerEventID:(id)arg1 options:(id)arg2 handler:(/*^block*/id)arg3;
-(void)registerRequestID:(id)arg1 options:(id)arg2 handler:(/*^block*/id)arg3;
-(void)sendEventID:(id)arg1 event:(id)arg2 options:(id)arg3 completion:(/*^block*/id)arg4;

@end

