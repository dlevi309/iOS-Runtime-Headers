/*
* Generated on Thursday, January 14, 2021 at 2:26:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ClockKit.framework/ClockKit
*/

#import <ClockKit/ClockKit-Structs.h>
#import <ClockKit/CLKComplicationTemplate.h>

@class CLKImageProvider, CLKProgressProvider;

@interface CLKComplicationTemplateModularSmallProgressRingImage : CLKComplicationTemplate {

	CLKImageProvider* _imageProvider;
	CLKProgressProvider* _progressProvider;
	long long _ringStyle;

}

@property (nonatomic,copy) CLKImageProvider * imageProvider;                    //@synthesize imageProvider=_imageProvider - In the implementation block
@property (nonatomic,copy) CLKProgressProvider * progressProvider;              //@synthesize progressProvider=_progressProvider - In the implementation block
@property (assign,nonatomic) long long ringStyle;                               //@synthesize ringStyle=_ringStyle - In the implementation block
+(CGSize)imageSize;
+(id)templateWithImageProvider:(id)arg1 progressProvider:(id)arg2 ringStyle:(long long)arg3 ;
-(void)setImageProvider:(CLKImageProvider *)arg1 ;
-(void)setProgressProvider:(CLKProgressProvider *)arg1 ;
-(CLKImageProvider *)imageProvider;
-(CLKProgressProvider *)progressProvider;
-(long long)ringStyle;
-(void)setRingStyle:(long long)arg1 ;
-(void)_enumerateProgressProviderKeysWithBlock:(/*^block*/id)arg1 ;
-(long long)compatibleFamily;
-(void)_enumerateImageProviderKeysWithBlock:(/*^block*/id)arg1 ;
-(void)_enumerateIntegerKeysWithBlock:(/*^block*/id)arg1 ;
-(id)initWithImageProvider:(id)arg1 progressProvider:(id)arg2 ringStyle:(long long)arg3 ;
@end

