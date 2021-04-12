/*
* Generated on Thursday, January 14, 2021 at 2:22:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Espresso.framework/Espresso
*/


@interface ETImagePreprocessParams : NSObject {

	BOOL _network_wants_bgr;
	float _bias_r;
	float _bias_g;
	float _bias_b;
	float _scale;
	unsigned long long _channels;
	unsigned long long _height;
	unsigned long long _width;

}

@property (nonatomic,readonly) BOOL network_wants_bgr;                   //@synthesize network_wants_bgr=_network_wants_bgr - In the implementation block
@property (nonatomic,readonly) float bias_r;                             //@synthesize bias_r=_bias_r - In the implementation block
@property (nonatomic,readonly) float bias_g;                             //@synthesize bias_g=_bias_g - In the implementation block
@property (nonatomic,readonly) float bias_b;                             //@synthesize bias_b=_bias_b - In the implementation block
@property (nonatomic,readonly) float scale;                              //@synthesize scale=_scale - In the implementation block
@property (nonatomic,readonly) unsigned long long channels;              //@synthesize channels=_channels - In the implementation block
@property (nonatomic,readonly) unsigned long long height;                //@synthesize height=_height - In the implementation block
@property (nonatomic,readonly) unsigned long long width;                 //@synthesize width=_width - In the implementation block
-(unsigned long long)width;
-(float)bias_r;
-(float)bias_g;
-(float)bias_b;
-(float)scale;
-(unsigned long long)height;
-(id)initWithHeight:(unsigned long long)arg1 Width:(unsigned long long)arg2 NumChannels:(unsigned long long)arg3 Scale:(float)arg4 BiasR:(float)arg5 BiasG:(float)arg6 BiasB:(float)arg7 NetworkWantBGR:(BOOL)arg8 ;
-(BOOL)network_wants_bgr;
-(unsigned long long)channels;
@end

