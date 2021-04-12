/*
* Generated on Monday, March 1, 2021 at 2:31:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/

#import <Celestial/BWInferenceConfiguration.h>

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
-(void)dealloc;
-(BOOL)depthDataDeliveryEnabled;
-(void)setDepthDataDeliveryEnabled:(BOOL)arg1 ;
-(id<MTLCommandQueue>)metalCommandQueue;
-(void)setMetalCommandQueue:(id<MTLCommandQueue>)arg1 ;
-(float)mainImageDownscalingFactor;
-(void)setMainImageDownscalingFactor:(float)arg1 ;
-(void)setSensorConfigurationsByPortType:(NSDictionary *)arg1 ;
-(NSDictionary *)sensorConfigurationsByPortType;
-(unsigned)enabledMattes;
-(void)setEnabledMattes:(unsigned)arg1 ;
-(int)tuningConfiguration;
-(void)setTuningConfiguration:(int)arg1 ;
-(BOOL)submitWithoutSynchronization;
-(void)setSubmitWithoutSynchronization:(BOOL)arg1 ;
@end

