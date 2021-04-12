/*
* Generated on Monday, March 1, 2021 at 2:33:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
*/

#import <NetworkServiceProxy/NPTunnelFlow.h>

@class NSMutableData, NSURL, NSNumber;

@interface NPTunnelFlowHTTP : NPTunnelFlow {

	BOOL _receivedHeaders;
	BOOL _responseSuccess;
	NSMutableData* _responseData;
	NSURL* _url;
	/*^block*/id _postCompletionHandler;
	NSNumber* _responseContentLength;

}

@property (copy) id postCompletionHandler;                        //@synthesize postCompletionHandler=_postCompletionHandler - In the implementation block
@property (assign) BOOL receivedHeaders;                          //@synthesize receivedHeaders=_receivedHeaders - In the implementation block
@property (retain) NSNumber * responseContentLength;              //@synthesize responseContentLength=_responseContentLength - In the implementation block
@property (assign) BOOL responseSuccess;                          //@synthesize responseSuccess=_responseSuccess - In the implementation block
@property (retain) NSMutableData * responseData;                  //@synthesize responseData=_responseData - In the implementation block
@property (retain) NSURL * url;                                   //@synthesize url=_url - In the implementation block
-(NSURL *)url;
-(NSMutableData *)responseData;
-(void)setResponseData:(NSMutableData *)arg1 ;
-(void)setUrl:(NSURL *)arg1 ;
-(BOOL)responseSuccess;
-(id)postCompletionHandler;
-(void)setPostCompletionHandler:(id)arg1 ;
-(void)sendDataToClient:(id)arg1 fromTunnel:(BOOL)arg2 ;
-(BOOL)receivedHeaders;
-(void)setResponseSuccess:(BOOL)arg1 ;
-(void)setResponseContentLength:(NSNumber *)arg1 ;
-(void)setReceivedHeaders:(BOOL)arg1 ;
-(NSNumber *)responseContentLength;
-(id)initWithTunnel:(id)arg1 URL:(id)arg2 extraFlowProperties:(id)arg3 ;
-(void)postData:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)closeClientFlowWithError:(int)arg1 ;
-(BOOL)isClientFlowClosed;
@end

