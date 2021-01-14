/*
* Generated on Thursday, January 14, 2021 at 2:28:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsAnalyticsUpload.framework/NewsAnalyticsUpload
*/


@protocol NDAnalyticsPayloadAssemblerConfigProvider;
@interface NDAnalyticsPayloadAssembler : NSObject {

	id<NDAnalyticsPayloadAssemblerConfigProvider> _configProvider;
	unsigned long long _maxPayloadSize;

}

@property (nonatomic,retain) id<NDAnalyticsPayloadAssemblerConfigProvider> configProvider;              //@synthesize configProvider=_configProvider - In the implementation block
@property (assign,nonatomic) unsigned long long maxPayloadSize;                                         //@synthesize maxPayloadSize=_maxPayloadSize - In the implementation block
-(id<NDAnalyticsPayloadAssemblerConfigProvider>)configProvider;
-(id)init;
-(void)assemblePayloadsWithEntries:(id)arg1 lastUploadDatesByContentType:(id)arg2 droppedEnvelopeReasonsToUpload:(id)arg3 envelopeSizeByEntry:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)setMaxPayloadSize:(unsigned long long)arg1 ;
-(void)determinePayloadDeliveryWindowForEntries:(id)arg1 withLastUploadDatesByContentType:(id)arg2 completion:(/*^block*/id)arg3 ;
-(unsigned long long)maxPayloadSize;
-(id)initWithConfigProvider:(id)arg1 maxPayloadSize:(unsigned long long)arg2 ;
-(void)setConfigProvider:(id<NDAnalyticsPayloadAssemblerConfigProvider>)arg1 ;
-(void)_fetchAnalyticsEnvelopeContentTypeConfigsWithCompletion:(/*^block*/id)arg1 ;
@end

