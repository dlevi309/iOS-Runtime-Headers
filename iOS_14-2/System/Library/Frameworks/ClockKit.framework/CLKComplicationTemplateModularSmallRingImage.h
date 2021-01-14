/*
* Generated on Thursday, January 14, 2021 at 2:26:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ClockKit.framework/ClockKit
*/

#import <ClockKit/CLKComplicationTemplate.h>

@class CLKImageProvider;

@interface CLKComplicationTemplateModularSmallRingImage : CLKComplicationTemplate {

	float _fillFraction;
	CLKImageProvider* _imageProvider;
	long long _ringStyle;

}

@property (nonatomic,copy) CLKImageProvider * imageProvider;              //@synthesize imageProvider=_imageProvider - In the implementation block
@property (assign,nonatomic) float fillFraction;                          //@synthesize fillFraction=_fillFraction - In the implementation block
@property (assign,nonatomic) long long ringStyle;                         //@synthesize ringStyle=_ringStyle - In the implementation block
+(id)templateWithImageProvider:(id)arg1 fillFraction:(float)arg2 ringStyle:(long long)arg3 ;
-(void)setImageProvider:(CLKImageProvider *)arg1 ;
-(CLKImageProvider *)imageProvider;
-(void)setFillFraction:(float)arg1 ;
-(float)fillFraction;
-(long long)ringStyle;
-(void)setRingStyle:(long long)arg1 ;
-(long long)compatibleFamily;
-(void)_enumerateImageProviderKeysWithBlock:(/*^block*/id)arg1 ;
-(void)_enumerateIntegerKeysWithBlock:(/*^block*/id)arg1 ;
-(void)_enumerateFloatKeysWithBlock:(/*^block*/id)arg1 ;
-(id)initWithImageProvider:(id)arg1 fillFraction:(float)arg2 ringStyle:(long long)arg3 ;
@end

