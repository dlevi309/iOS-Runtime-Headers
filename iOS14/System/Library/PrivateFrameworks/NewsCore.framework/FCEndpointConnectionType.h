/*
* Generated on Thursday, January 14, 2021 at 2:21:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


@protocol FCEndpointConnectionType <NSObject>
@required
-(void)performAuthenticatedHTTPRequestWithURL:(id)arg1 valuesByHTTPHeaderField:(id)arg2 method:(id)arg3 data:(id)arg4 contentType:(id)arg5 priority:(float)arg6 reauthenticateIfNeeded:(BOOL)arg7 callbackQueue:(id)arg8 completion:(/*^block*/id)arg9;
-(void)performHTTPRequestWithURL:(id)arg1 valuesByHTTPHeaderField:(id)arg2 method:(id)arg3 data:(id)arg4 contentType:(id)arg5 priority:(float)arg6 requiresMescalSigning:(BOOL)arg7 callbackQueue:(id)arg8 completion:(/*^block*/id)arg9;
-(void)performHTTPRequestWithURL:(id)arg1 method:(id)arg2 data:(id)arg3 contentType:(id)arg4 priority:(float)arg5 requiresMescalSigning:(BOOL)arg6 callbackQueue:(id)arg7 completion:(/*^block*/id)arg8;

@end

