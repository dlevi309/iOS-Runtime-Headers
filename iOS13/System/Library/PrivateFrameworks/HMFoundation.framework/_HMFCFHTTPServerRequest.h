/*
* Generated on Monday, March 1, 2021 at 2:30:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
*/

#import <HMFoundation/HMFoundation-Structs.h>
#import <HMFoundation/HMFHTTPRequestInternal.h>

@class _HMFCFHTTPServerConnection, NSMutableData;

@interface _HMFCFHTTPServerRequest : HMFHTTPRequestInternal {

	CFHTTPServerRequestRef _requestRef;
	CFReadStreamRef _bodyStream;
	_HMFCFHTTPServerConnection* _connection;
	NSMutableData* _bodyData;

}

@property (nonatomic,readonly) NSMutableData * bodyData;                                    //@synthesize bodyData=_bodyData - In the implementation block
@property (nonatomic,readonly) CFHTTPServerRequestRef requestRef;                           //@synthesize requestRef=_requestRef - In the implementation block
@property (nonatomic,readonly) CFReadStreamRef bodyStream;                                  //@synthesize bodyStream=_bodyStream - In the implementation block
@property (nonatomic,__weak,readonly) _HMFCFHTTPServerConnection * connection;              //@synthesize connection=_connection - In the implementation block
-(id)init;
-(void)dealloc;
-(id)method;
-(void)setURL:(id)arg1 ;
-(id)URL;
-(_HMFCFHTTPServerConnection *)connection;
-(void)setMethod:(id)arg1 ;
-(NSMutableData *)bodyData;
-(void)setBody:(id)arg1 ;
-(id)body;
-(id)headerFields;
-(id)initWithConnection:(id)arg1 requestRef:(CFHTTPServerRequestRef)arg2 ;
-(CFReadStreamRef)bodyStream;
-(void)appendBodyData:(id)arg1 ;
-(id)responseWithStatusCode:(long long)arg1 ;
-(CFHTTPServerRequestRef)requestRef;
-(void)setHeaders:(id)arg1 ;
@end

