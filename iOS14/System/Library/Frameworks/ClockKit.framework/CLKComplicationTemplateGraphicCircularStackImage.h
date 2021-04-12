/*
* Generated on Thursday, January 14, 2021 at 2:26:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ClockKit.framework/ClockKit
*/

#import <ClockKit/CLKComplicationTemplateGraphicCircular.h>

@class CLKFullColorImageProvider, CLKTextProvider;

@interface CLKComplicationTemplateGraphicCircularStackImage : CLKComplicationTemplateGraphicCircular {

	CLKFullColorImageProvider* _line1ImageProvider;
	CLKTextProvider* _line2TextProvider;

}

@property (nonatomic,copy) CLKFullColorImageProvider * line1ImageProvider;              //@synthesize line1ImageProvider=_line1ImageProvider - In the implementation block
@property (nonatomic,copy) CLKTextProvider * line2TextProvider;                         //@synthesize line2TextProvider=_line2TextProvider - In the implementation block
+(id)templateWithLine1ImageProvider:(id)arg1 line2TextProvider:(id)arg2 ;
-(CLKTextProvider *)line2TextProvider;
-(CLKFullColorImageProvider *)line1ImageProvider;
-(void)_enumerateFullColorImageProviderKeysWithBlock:(/*^block*/id)arg1 ;
-(void)_enumerateTextProviderKeysWithBlock:(/*^block*/id)arg1 ;
-(void)setLine2TextProvider:(CLKTextProvider *)arg1 ;
-(void)setLine1ImageProvider:(CLKFullColorImageProvider *)arg1 ;
-(id)initWithLine1ImageProvider:(id)arg1 line2TextProvider:(id)arg2 ;
@end

