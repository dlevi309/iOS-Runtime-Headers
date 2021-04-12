/*
* Generated on Thursday, January 14, 2021 at 2:26:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ClockKit.framework/ClockKit
*/

#import <ClockKit/CLKComplicationTemplateGraphicCircular.h>

@class CLKFullColorImageProvider;

@interface CLKComplicationTemplateGraphicCircularImage : CLKComplicationTemplateGraphicCircular {

	CLKFullColorImageProvider* _imageProvider;

}

@property (nonatomic,copy) CLKFullColorImageProvider * imageProvider;              //@synthesize imageProvider=_imageProvider - In the implementation block
+(id)templateWithImageProvider:(id)arg1 ;
-(id)initWithImageProvider:(id)arg1 ;
-(void)setImageProvider:(CLKFullColorImageProvider *)arg1 ;
-(CLKFullColorImageProvider *)imageProvider;
-(void)_enumerateFullColorImageProviderKeysWithBlock:(/*^block*/id)arg1 ;
@end

