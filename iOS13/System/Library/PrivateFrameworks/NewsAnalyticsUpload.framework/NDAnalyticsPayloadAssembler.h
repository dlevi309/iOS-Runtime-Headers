/*
* Generated on Monday, March 1, 2021 at 2:33:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsAnalyticsUpload.framework/NewsAnalyticsUpload
*/


@protocol NDAnalyticsPayloadAssemblerConfigProvider;
@interface NDAnalyticsPayloadAssembler : NSObject {

	id<NDAnalyticsPayloadAssemblerConfigProvider> _configProvider;
	unsigned long long _maxPayloadSize;

}

@property (nonatomic,retain) id<NDAnalyticsPayloadAssemblerConfigProvider> configProvider;              //@synthesize configProvider=_configProvider - In the implementation block
@property (assign,nonatomic) unsigned long long maxPayloadSize;                                         //@synthesize maxPayloadSize=_maxPayloadSize - In the implementation block
-(id)init;
-(id)initWithConfigProvider:(id)arg1 maxPayloadSize:(unsigned long long)arg2 ;
-(void)assemblePayloadsWithEntries:(id)arg1 lastUploadDatesByContentType:(id)arg2 droppedEnvelopeReasonsToUpload:(id)arg3 envelopeSizeByEntry:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)determinePayloadDeliveryWindowForEntries:(id)arg1 withLastUploadDatesByContentType:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_fetchAnalyticsEnvelopeContentTypeConfigsWithCompletion:(/*^block*/id)arg1 ;
-(unsigned long long)maxPayloadSize;
-(id<NDAnalyticsPayloadAssemblerConfigProvider>)configProvider;
-(void)setConfigProvider:(id<NDAnalyticsPayloadAssemblerConfigProvider>)arg1 ;
-(void)setMaxPayloadSize:(unsigned long long)arg1 ;
@end

