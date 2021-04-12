/*
* Generated on Monday, March 1, 2021 at 2:33:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
*/

#import <ClockKit/CLKComplicationTemplate.h>

@class CLKTextProvider;

@interface CLKComplicationTemplateGraphicCornerStackText : CLKComplicationTemplate {

	CLKTextProvider* _innerTextProvider;
	CLKTextProvider* _outerTextProvider;

}

@property (nonatomic,copy) CLKTextProvider * innerTextProvider;              //@synthesize innerTextProvider=_innerTextProvider - In the implementation block
@property (nonatomic,copy) CLKTextProvider * outerTextProvider;              //@synthesize outerTextProvider=_outerTextProvider - In the implementation block
-(void)_enumerateTextProviderKeysWithBlock:(/*^block*/id)arg1 ;
-(BOOL)isCompatibleWithFamily:(long long)arg1 ;
-(CLKTextProvider *)outerTextProvider;
-(void)setOuterTextProvider:(CLKTextProvider *)arg1 ;
-(CLKTextProvider *)innerTextProvider;
-(void)setInnerTextProvider:(CLKTextProvider *)arg1 ;
@end

