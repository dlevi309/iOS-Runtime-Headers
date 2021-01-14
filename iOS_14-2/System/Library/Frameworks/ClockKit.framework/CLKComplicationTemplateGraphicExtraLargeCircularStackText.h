/*
* Generated on Thursday, January 14, 2021 at 2:26:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ClockKit.framework/ClockKit
*/

#import <ClockKit/CLKComplicationTemplateGraphicExtraLargeCircular.h>

@class CLKTextProvider;

@interface CLKComplicationTemplateGraphicExtraLargeCircularStackText : CLKComplicationTemplateGraphicExtraLargeCircular {

	CLKTextProvider* _line1TextProvider;
	CLKTextProvider* _line2TextProvider;
	unsigned long long _highlightMode;

}

@property (assign,nonatomic) unsigned long long highlightMode;               //@synthesize highlightMode=_highlightMode - In the implementation block
@property (nonatomic,copy) CLKTextProvider * line1TextProvider;              //@synthesize line1TextProvider=_line1TextProvider - In the implementation block
@property (nonatomic,copy) CLKTextProvider * line2TextProvider;              //@synthesize line2TextProvider=_line2TextProvider - In the implementation block
+(id)templateWithLine1TextProvider:(id)arg1 line2TextProvider:(id)arg2 ;
-(CLKTextProvider *)line2TextProvider;
-(CLKTextProvider *)line1TextProvider;
-(unsigned long long)highlightMode;
-(void)setHighlightMode:(unsigned long long)arg1 ;
-(void)_enumerateTextProviderKeysWithBlock:(/*^block*/id)arg1 ;
-(void)_enumerateIntegerKeysWithBlock:(/*^block*/id)arg1 ;
-(id)initPrivateWithJSONObjectRepresentation:(id)arg1 bundle:(id)arg2 ;
-(id)JSONObjectRepresentationWritingResourcesToBundlePath:(id)arg1 ;
-(void)setLine1TextProvider:(CLKTextProvider *)arg1 ;
-(void)setLine2TextProvider:(CLKTextProvider *)arg1 ;
-(id)initWithLine1TextProvider:(id)arg1 line2TextProvider:(id)arg2 ;
-(void)setHighlightLine2:(BOOL)arg1 ;
-(BOOL)highlightLine2;
@end

