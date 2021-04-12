/*
* Generated on Monday, March 1, 2021 at 2:30:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(_HMFCFHTTPServerRequest *)request;
-(_HMFCFHTTPMessage *)response;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(void)setBody:(id)arg1 ;
-(id)body;
-(id)headerFields;
-(void)setHeaderValue:(id)arg1 forHeaderKey:(id)arg2 ;
-(id)initWithRequest:(id)arg1 statusCode:(long long)arg2 ;
-(CFHTTPServerResponseRef)responseRef;
@end

