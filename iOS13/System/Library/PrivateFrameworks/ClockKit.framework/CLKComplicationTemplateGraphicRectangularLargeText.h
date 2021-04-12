/*
* Generated on Monday, March 1, 2021 at 2:33:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
*/

#import <ClockKit/CLKComplicationTemplate.h>

@class CLKFullColorImageProvider, CLKTextProvider;

@interface CLKComplicationTemplateGraphicRectangularLargeText : CLKComplicationTemplate {

	CLKFullColorImageProvider* _headerImageProvider;
	CLKTextProvider* _headerTextProvider;
	CLKTextProvider* _bodyTextProvider;

}

@property (nonatomic,copy) CLKFullColorImageProvider * headerImageProvider;              //@synthesize headerImageProvider=_headerImageProvider - In the implementation block
@property (nonatomic,copy) CLKTextProvider * headerTextProvider;                         //@synthesize headerTextProvider=_headerTextProvider - In the implementation block
@property (nonatomic,copy) CLKTextProvider * bodyTextProvider;                           //@synthesize bodyTextProvider=_bodyTextProvider - In the implementation block
-(void)_enumerateTextProviderKeysWithBlock:(/*^block*/id)arg1 ;
-(void)_enumerateFullColorImageProviderKeysWithBlock:(/*^block*/id)arg1 ;
-(BOOL)isCompatibleWithFamily:(long long)arg1 ;
-(CLKTextProvider *)headerTextProvider;
-(void)setHeaderTextProvider:(CLKTextProvider *)arg1 ;
-(CLKFullColorImageProvider *)headerImageProvider;
-(void)setHeaderImageProvider:(CLKFullColorImageProvider *)arg1 ;
-(CLKTextProvider *)bodyTextProvider;
-(void)setBodyTextProvider:(CLKTextProvider *)arg1 ;
@end

