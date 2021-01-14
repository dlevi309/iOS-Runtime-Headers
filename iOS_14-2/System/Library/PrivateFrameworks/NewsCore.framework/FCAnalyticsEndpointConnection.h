/*
* Generated on Thursday, January 14, 2021 at 2:21:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


@class FCEndpointConnection, FCAsyncSerialQueue;

@interface FCAnalyticsEndpointConnection : NSObject {

	FCEndpointConnection* _endpointConnection;
	FCAsyncSerialQueue* _serialQueue;

}

@property (nonatomic,retain) FCEndpointConnection * endpointConnection;              //@synthesize endpointConnection=_endpointConnection - In the implementation block
@property (nonatomic,retain) FCAsyncSerialQueue * serialQueue;                       //@synthesize serialQueue=_serialQueue - In the implementation block
-(FCEndpointConnection *)endpointConnection;
-(id)initWithEndpointConnection:(id)arg1 ;
-(FCAsyncSerialQueue *)serialQueue;
-(void)uploadEnvelopeBatch:(id)arg1 withURL:(id)arg2 valuesByHTTPHeaderField:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)setSerialQueue:(FCAsyncSerialQueue *)arg1 ;
-(void)uploadEnvelopeBatch:(id)arg1 withURL:(id)arg2 valuesByHTTPHeaderField:(id)arg3 priority:(float)arg4 callbackQueue:(id)arg5 completion:(/*^block*/id)arg6 ;
-(void)setEndpointConnection:(FCEndpointConnection *)arg1 ;
-(id)initWithSourceApplicationBundleIdentifier:(id)arg1 ;
@end

