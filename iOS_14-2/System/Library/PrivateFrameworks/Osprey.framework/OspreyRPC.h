/*
* Generated on Thursday, January 14, 2021 at 2:26:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Osprey.framework/Osprey
*/


@protocol OspreyRPC <NSObject>
@required
-(id)bidirectionalStreamingRequestWithMethodName:(id)arg1 requestBuilder:(/*^block*/id)arg2 streamingResponseHandler:(/*^block*/id)arg3 completion:(/*^block*/id)arg4;
-(void)unaryRequestWithMethodName:(id)arg1 requestData:(id)arg2 requestBuilder:(/*^block*/id)arg3 responseHandler:(/*^block*/id)arg4;
-(void)serverStreamingRequestWithMethodName:(id)arg1 requestData:(id)arg2 requestBuilder:(/*^block*/id)arg3 streamingResponseHandler:(/*^block*/id)arg4 completion:(/*^block*/id)arg5;
-(id)clientStreamingRequestWithMethodName:(id)arg1 requestBuilder:(/*^block*/id)arg2 responseHandler:(/*^block*/id)arg3;

@end

