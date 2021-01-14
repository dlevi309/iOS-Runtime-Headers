/*
* Generated on Thursday, January 14, 2021 at 2:20:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
*/

#import <CFNetwork/CFNetwork-Structs.h>
#import <libobjc.A.dylib/NSURLProtocolClient.h>

@class NSURLAuthenticationChallenge, NSString;

@interface __NSCFURLProtocolClient_NS : NSObject <NSURLProtocolClient> {

	URLProtocolClient* _cf;
	URLProtocol* _prot;
	NSURLAuthenticationChallenge* _challenge;
	CFURLAuthChallengeRef _cfChallenge;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)URLProtocol:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2 ;
-(void)URLProtocol:(id)arg1 wasRedirectedToRequest:(id)arg2 redirectResponse:(id)arg3 ;
-(void)URLProtocol:(id)arg1 didReceiveResponse:(id)arg2 cacheStoragePolicy:(unsigned long long)arg3 ;
-(void)URLProtocol:(id)arg1 cachedResponseIsValid:(id)arg2 ;
-(void)URLProtocol:(id)arg1 didCancelAuthenticationChallenge:(id)arg2 ;
-(void)URLProtocolDidFinishLoading:(id)arg1 ;
-(void)URLProtocol:(id)arg1 didLoadData:(id)arg2 ;
-(void)URLProtocol:(id)arg1 didFailWithError:(id)arg2 ;
-(void)dealloc;
@end

