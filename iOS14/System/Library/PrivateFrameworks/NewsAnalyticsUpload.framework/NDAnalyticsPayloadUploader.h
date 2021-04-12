/*
* Generated on Thursday, January 14, 2021 at 2:28:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsAnalyticsUpload.framework/NewsAnalyticsUpload
*/


@class FCAnalyticsEndpointConnection, FCAsyncSerialQueue;

@interface NDAnalyticsPayloadUploader : NSObject {

	FCAnalyticsEndpointConnection* _endpointConnection;
	FCAsyncSerialQueue* _uploadQueue;

}

@property (nonatomic,retain) FCAnalyticsEndpointConnection * endpointConnection;              //@synthesize endpointConnection=_endpointConnection - In the implementation block
@property (nonatomic,retain) FCAsyncSerialQueue * uploadQueue;                                //@synthesize uploadQueue=_uploadQueue - In the implementation block
-(FCAnalyticsEndpointConnection *)endpointConnection;
-(void)uploadPayloadsForInfos:(id)arg1 withEnvelopeStore:(id)arg2 perPayloadCompletion:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 ;
-(FCAsyncSerialQueue *)uploadQueue;
-(id)init;
-(id)initWithAppConfigurationManager:(id)arg1 ;
-(void)setEndpointConnection:(FCAnalyticsEndpointConnection *)arg1 ;
-(void)setUploadQueue:(FCAsyncSerialQueue *)arg1 ;
@end

