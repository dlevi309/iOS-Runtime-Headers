/*
* Generated on Monday, March 1, 2021 at 2:33:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
*/

#import <ClockKit/CLKComplicationTemplateGraphicCircular.h>

@class CLKFullColorImageProvider, CLKTextProvider;

@interface CLKComplicationTemplateGraphicCircularStackImage : CLKComplicationTemplateGraphicCircular {

	CLKFullColorImageProvider* _line1ImageProvider;
	CLKTextProvider* _line2TextProvider;

}

@property (nonatomic,copy) CLKFullColorImageProvider * line1ImageProvider;              //@synthesize line1ImageProvider=_line1ImageProvider - In the implementation block
@property (nonatomic,copy) CLKTextProvider * line2TextProvider;                         //@synthesize line2TextProvider=_line2TextProvider - In the implementation block
-(void)_enumerateTextProviderKeysWithBlock:(/*^block*/id)arg1 ;
-(void)_enumerateFullColorImageProviderKeysWithBlock:(/*^block*/id)arg1 ;
-(CLKTextProvider *)line2TextProvider;
-(void)setLine2TextProvider:(CLKTextProvider *)arg1 ;
-(CLKFullColorImageProvider *)line1ImageProvider;
-(void)setLine1ImageProvider:(CLKFullColorImageProvider *)arg1 ;
@end

