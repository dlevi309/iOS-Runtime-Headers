/*
* Generated on Monday, March 1, 2021 at 2:33:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsAnalyticsUpload.framework/NewsAnalyticsUpload
*/


@protocol NDAnalyticsEnvelopeTracker;
@class FCAnalyticsEndpointConnection, FCAsyncSerialQueue;

@interface NDAnalyticsPayloadUploader : NSObject {

	FCAnalyticsEndpointConnection* _endpointConnection;
	FCAsyncSerialQueue* _uploadQueue;
	id<NDAnalyticsEnvelopeTracker> _envelopeTracker;

}

@property (nonatomic,retain) FCAnalyticsEndpointConnection * endpointConnection;              //@synthesize endpointConnection=_endpointConnection - In the implementation block
@property (nonatomic,retain) FCAsyncSerialQueue * uploadQueue;                                //@synthesize uploadQueue=_uploadQueue - In the implementation block
@property (nonatomic,retain) id<NDAnalyticsEnvelopeTracker> envelopeTracker;                  //@synthesize envelopeTracker=_envelopeTracker - In the implementation block
-(id)init;
-(FCAnalyticsEndpointConnection *)endpointConnection;
-(void)setEndpointConnection:(FCAnalyticsEndpointConnection *)arg1 ;
-(id)initWithAppConfigurationManager:(id)arg1 envelopeTracker:(id)arg2 ;
-(id<NDAnalyticsEnvelopeTracker>)envelopeTracker;
-(void)uploadPayloadsForInfos:(id)arg1 withEnvelopeStore:(id)arg2 perPayloadCompletion:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 ;
-(void)setEnvelopeTracker:(id<NDAnalyticsEnvelopeTracker>)arg1 ;
-(FCAsyncSerialQueue *)uploadQueue;
-(void)setUploadQueue:(FCAsyncSerialQueue *)arg1 ;
@end

