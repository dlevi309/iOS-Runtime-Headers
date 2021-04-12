/*
* Generated on Monday, March 1, 2021 at 2:33:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
*/

#import <ClockKit/CLKComplicationTemplateGraphicCircular.h>

@class CLKFullColorImageProvider;

@interface CLKComplicationTemplateGraphicCircularImage : CLKComplicationTemplateGraphicCircular {

	CLKFullColorImageProvider* _imageProvider;

}

@property (nonatomic,copy) CLKFullColorImageProvider * imageProvider;              //@synthesize imageProvider=_imageProvider - In the implementation block
-(void)setImageProvider:(CLKFullColorImageProvider *)arg1 ;
-(CLKFullColorImageProvider *)imageProvider;
-(void)_enumerateFullColorImageProviderKeysWithBlock:(/*^block*/id)arg1 ;
@end

