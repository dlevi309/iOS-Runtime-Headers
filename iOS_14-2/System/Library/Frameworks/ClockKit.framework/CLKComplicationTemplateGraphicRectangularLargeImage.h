/*
* Generated on Thursday, January 14, 2021 at 2:26:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ClockKit.framework/ClockKit
*/

#import <ClockKit/CLKComplicationTemplate.h>

@class CLKTextProvider, CLKFullColorImageProvider;

@interface CLKComplicationTemplateGraphicRectangularLargeImage : CLKComplicationTemplate {

	CLKTextProvider* _textProvider;
	CLKFullColorImageProvider* _imageProvider;

}

@property (nonatomic,copy) CLKTextProvider * textProvider;                         //@synthesize textProvider=_textProvider - In the implementation block
@property (nonatomic,copy) CLKFullColorImageProvider * imageProvider;              //@synthesize imageProvider=_imageProvider - In the implementation block
+(id)templateWithTextProvider:(id)arg1 imageProvider:(id)arg2 ;
-(void)setImageProvider:(CLKFullColorImageProvider *)arg1 ;
-(CLKTextProvider *)textProvider;
-(CLKFullColorImageProvider *)imageProvider;
-(void)setTextProvider:(CLKTextProvider *)arg1 ;
-(void)_enumerateFullColorImageProviderKeysWithBlock:(/*^block*/id)arg1 ;
-(void)_enumerateTextProviderKeysWithBlock:(/*^block*/id)arg1 ;
-(long long)compatibleFamily;
-(id)initWithTextProvider:(id)arg1 imageProvider:(id)arg2 ;
@end

