/*
* Generated on Monday, March 1, 2021 at 2:31:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/


@protocol RWIProtocolNetworkDomainHandler <NSObject>
@optional
-(void)enableWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2;
-(void)disableWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2;
-(void)setExtraHTTPHeadersWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 headers:(id)arg3;
-(void)getResponseBodyWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 requestId:(id)arg3;
-(void)setResourceCachingDisabledWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 disabled:(BOOL)arg3;
-(void)loadResourceWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 frameId:(id)arg3 url:(id)arg4;
-(void)getSerializedCertificateWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 requestId:(id)arg3;
-(void)resolveWebSocketWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 requestId:(id)arg3 objectGroup:(id*)arg4;
-(void)setInterceptionEnabledWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 enabled:(BOOL)arg3;
-(void)addInterceptionWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 url:(id)arg3 caseSensitive:(BOOL*)arg4 isRegex:(BOOL*)arg5 stage:(long long*)arg6;
-(void)removeInterceptionWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 url:(id)arg3 caseSensitive:(BOOL*)arg4 isRegex:(BOOL*)arg5 stage:(long long*)arg6;
-(void)interceptContinueWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 requestId:(id)arg3;
-(void)interceptWithResponseWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 requestId:(id)arg3 content:(id)arg4 base64Encoded:(BOOL)arg5 mimeType:(id*)arg6 status:(int*)arg7 statusText:(id*)arg8 headers:(id*)arg9;

@end

