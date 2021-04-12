/*
* Generated on Thursday, January 14, 2021 at 2:26:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
*/

#import <HMFoundation/HMFoundation-Structs.h>
#import <HMFoundation/HMFHTTPResponseInternal.h>

@class _HMFCFHTTPServerRequest, _HMFCFHTTPMessage;

@interface _HMFCFHTTPServerResponse : HMFHTTPResponseInternal {

	CFHTTPServerResponseRef _responseRef;
	_HMFCFHTTPServerRequest* _request;
	/*^block*/id _completionHandler;
	_HMFCFHTTPMessage* _response;

}

@property (nonatomic,readonly) _HMFCFHTTPMessage * response;                     //@synthesize response=_response - In the implementation block
@property (nonatomic,readonly) _HMFCFHTTPServerRequest * request;                //@synthesize request=_request - In the implementation block
@property (nonatomic,readonly) CFHTTPServerResponseRef responseRef;              //@synthesize responseRef=_responseRef - In the implementation block
@property (nonatomic,copy) id completionHandler;                                 //@synthesize completionHandler=_completionHandler - In the implementation block
-(void)setBody:(id)arg1 ;
-(id)body;
-(void)setCompletionHandler:(id)arg1 ;
-(id)completionHandler;
-(_HMFCFHTTPServerRequest *)request;
-(id)headerFields;
-(_HMFCFHTTPMessage *)response;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(void)setHeaderValue:(id)arg1 forHeaderKey:(id)arg2 ;
-(id)initWithRequest:(id)arg1 statusCode:(long long)arg2 ;
-(CFHTTPServerResponseRef)responseRef;
@end

