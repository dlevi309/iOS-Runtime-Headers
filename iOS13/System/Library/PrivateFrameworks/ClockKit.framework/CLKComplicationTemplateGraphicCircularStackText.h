/*
* Generated on Monday, March 1, 2021 at 2:33:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
*/

#import <ClockKit/CLKComplicationTemplateGraphicCircular.h>

@class CLKTextProvider;

@interface CLKComplicationTemplateGraphicCircularStackText : CLKComplicationTemplateGraphicCircular {

	CLKTextProvider* _line1TextProvider;
	CLKTextProvider* _line2TextProvider;
	unsigned long long _highlightMode;

}

@property (assign,nonatomic) unsigned long long highlightMode;               //@synthesize highlightMode=_highlightMode - In the implementation block
@property (nonatomic,copy) CLKTextProvider * line1TextProvider;              //@synthesize line1TextProvider=_line1TextProvider - In the implementation block
@property (nonatomic,copy) CLKTextProvider * line2TextProvider;              //@synthesize line2TextProvider=_line2TextProvider - In the implementation block
-(void)_enumerateTextProviderKeysWithBlock:(/*^block*/id)arg1 ;
-(void)_enumerateIntegerKeysWithBlock:(/*^block*/id)arg1 ;
-(id)_initWithJSONObjectRepresentation:(id)arg1 bundle:(id)arg2 ;
-(id)JSONObjectRepresentationWritingResourcesToBundlePath:(id)arg1 ;
-(void)setHighlightMode:(unsigned long long)arg1 ;
-(unsigned long long)highlightMode;
-(void)setHighlightLine2:(BOOL)arg1 ;
-(BOOL)highlightLine2;
-(CLKTextProvider *)line1TextProvider;
-(void)setLine1TextProvider:(CLKTextProvider *)arg1 ;
-(CLKTextProvider *)line2TextProvider;
-(void)setLine2TextProvider:(CLKTextProvider *)arg1 ;
@end

