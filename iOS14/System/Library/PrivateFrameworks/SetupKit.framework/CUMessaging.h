/*
* Generated on Thursday, January 14, 2021 at 2:29:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SetupKit.framework/SetupKit
*/


@protocol CUMessaging <NSObject>
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue; 
@required
-(void)setDispatchQueue:(id)arg1;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)registerEventID:(id)arg1 options:(id)arg2 eventHandler:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4;
-(void)deregisterEventID:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)sendEventID:(id)arg1 eventMessage:(id)arg2 options:(id)arg3 completionHandler:(/*^block*/id)arg4;
-(void)registerRequestID:(id)arg1 options:(id)arg2 requestHandler:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4;
-(void)deregisterRequestID:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)sendRequestID:(id)arg1 requestMessage:(id)arg2 options:(id)arg3 responseHandler:(/*^block*/id)arg4;

@end

