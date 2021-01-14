/*
* Generated on Thursday, January 14, 2021 at 2:23:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/BWInferenceConfiguration.h>

@protocol MTLCommandQueue;
@class NSDictionary;

@interface BWMattingV2InferenceConfiguration : BWInferenceConfiguration {

	NSDictionary* _sensorConfigurationsByPortType;
	unsigned _enabledMattes;
	int _tuningConfiguration;
	float _mainImageDownscalingFactor;
	BOOL _depthDataDeliveryEnabled;
	BOOL _submitWithoutSynchronization;
	id<MTLCommandQueue> _metalCommandQueue;

}

@property (nonatomic,retain) NSDictionary * sensorConfigurationsByPortType;              //@synthesize sensorConfigurationsByPortType=_sensorConfigurationsByPortType - In the implementation block
@property (assign,nonatomic) unsigned enabledMattes;                                     //@synthesize enabledMattes=_enabledMattes - In the implementation block
@property (assign,nonatomic) int tuningConfiguration;                                    //@synthesize tuningConfiguration=_tuningConfiguration - In the implementation block
@property (assign,nonatomic) float mainImageDownscalingFactor;                           //@synthesize mainImageDownscalingFactor=_mainImageDownscalingFactor - In the implementation block
@property (assign,nonatomic) BOOL depthDataDeliveryEnabled;                              //@synthesize depthDataDeliveryEnabled=_depthDataDeliveryEnabled - In the implementation block
@property (assign,nonatomic) BOOL submitWithoutSynchronization;                          //@synthesize submitWithoutSynchronization=_submitWithoutSynchronization - In the implementation block
@property (assign,nonatomic) id<MTLCommandQueue> metalCommandQueue;                      //@synthesize metalCommandQueue=_metalCommandQueue - In the implementation block
-(BOOL)depthDataDeliveryEnabled;
-(void)setDepthDataDeliveryEnabled:(BOOL)arg1 ;
-(void)setSensorConfigurationsByPortType:(NSDictionary *)arg1 ;
-(void)setEnabledMattes:(unsigned)arg1 ;
-(void)setTuningConfiguration:(int)arg1 ;
-(void)setMainImageDownscalingFactor:(float)arg1 ;
-(void)setSubmitWithoutSynchronization:(BOOL)arg1 ;
-(id<MTLCommandQueue>)metalCommandQueue;
-(void)setMetalCommandQueue:(id<MTLCommandQueue>)arg1 ;
-(float)mainImageDownscalingFactor;
-(int)tuningConfiguration;
-(NSDictionary *)sensorConfigurationsByPortType;
-(BOOL)submitWithoutSynchronization;
-(unsigned)enabledMattes;
-(void)dealloc;
@end

