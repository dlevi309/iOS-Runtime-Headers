/*
* Generated on Thursday, January 14, 2021 at 2:26:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ClockKit.framework/ClockKit
*/

#import <ClockKit/CLKComplicationTemplate.h>

@class CLKTextProvider, CLKImageProvider;

@interface CLKComplicationTemplateUtilitarianSmallFlat : CLKComplicationTemplate {

	CLKTextProvider* _textProvider;
	CLKImageProvider* _imageProvider;

}

@property (nonatomic,copy) CLKTextProvider * textProvider;                //@synthesize textProvider=_textProvider - In the implementation block
@property (nonatomic,copy) CLKImageProvider * imageProvider;              //@synthesize imageProvider=_imageProvider - In the implementation block
+(id)templateWithTextProvider:(id)arg1 ;
+(id)templateWithTextProvider:(id)arg1 imageProvider:(id)arg2 ;
-(id)initWithTextProvider:(id)arg1 ;
-(void)setImageProvider:(CLKImageProvider *)arg1 ;
-(CLKTextProvider *)textProvider;
-(CLKImageProvider *)imageProvider;
-(void)setTextProvider:(CLKTextProvider *)arg1 ;
-(BOOL)isCompatibleWithFamily:(long long)arg1 ;
-(void)_enumerateTextProviderKeysWithBlock:(/*^block*/id)arg1 ;
-(long long)compatibleFamily;
-(void)_enumerateImageProviderKeysWithBlock:(/*^block*/id)arg1 ;
-(id)initWithTextProvider:(id)arg1 imageProvider:(id)arg2 ;
@end

