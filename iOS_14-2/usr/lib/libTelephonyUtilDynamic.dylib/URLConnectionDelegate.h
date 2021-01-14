/*
* Generated on Thursday, January 14, 2021 at 2:23:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libTelephonyUtilDynamic.dylib
*/

#import <libTelephonyUtilDynamic.dylib/libTelephonyUtilDynamic.dylib-Structs.h>
#import <libobjc.A.dylib/NSURLConnectionDelegate.h>

@class NSMutableData, NSString;

@interface URLConnectionDelegate : NSObject <NSURLConnectionDelegate> {

	NSMutableData* fData;
	NSMutableData* fPostData;
	weak_ptr<ctu::Http::HttpRequestCallbackHandler>* fHandler;
	shared_ptr<ctu::Http::HttpResponse>* fResponse;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)connection:(id)arg1 didSendBodyData:(long long)arg2 totalBytesWritten:(long long)arg3 totalBytesExpectedToWrite:(long long)arg4 ;
-(void)connection:(id)arg1 willSendRequestForAuthenticationChallenge:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3 ;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
-(shared_ptr<ctu::Http::HttpRequestCallbackHandler>*)getHandler;
-(id)initWithCallbackHandler:(shared_ptr<ctu::Http::HttpRequestCallbackHandler>*)arg1 ;
-(void)dealloc;
@end

