/*
* Generated on Monday, March 1, 2021 at 2:30:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
*/


@protocol NSURLProtocolClient <NSObject>
@required
-(void)URLProtocol:(id)arg1 wasRedirectedToRequest:(id)arg2 redirectResponse:(id)arg3;
-(void)URLProtocol:(id)arg1 cachedResponseIsValid:(id)arg2;
-(void)URLProtocol:(id)arg1 didReceiveResponse:(id)arg2 cacheStoragePolicy:(unsigned long long)arg3;
-(void)URLProtocol:(id)arg1 didLoadData:(id)arg2;
-(void)URLProtocolDidFinishLoading:(id)arg1;
-(void)URLProtocol:(id)arg1 didFailWithError:(id)arg2;
-(void)URLProtocol:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2;
-(void)URLProtocol:(id)arg1 didCancelAuthenticationChallenge:(id)arg2;

@end

