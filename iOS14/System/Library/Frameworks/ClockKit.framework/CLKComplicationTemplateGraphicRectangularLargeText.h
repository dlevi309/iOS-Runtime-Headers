/*
* Generated on Thursday, January 14, 2021 at 2:26:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ClockKit.framework/ClockKit
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
+(id)templateWithHeaderTextProvider:(id)arg1 bodyTextProvider:(id)arg2 ;
+(id)templateWithHeaderImageProvider:(id)arg1 headerTextProvider:(id)arg2 bodyTextProvider:(id)arg3 ;
-(CLKTextProvider *)headerTextProvider;
-(CLKFullColorImageProvider *)headerImageProvider;
-(void)setHeaderImageProvider:(CLKFullColorImageProvider *)arg1 ;
-(void)setHeaderTextProvider:(CLKTextProvider *)arg1 ;
-(CLKTextProvider *)bodyTextProvider;
-(void)_enumerateFullColorImageProviderKeysWithBlock:(/*^block*/id)arg1 ;
-(void)_enumerateTextProviderKeysWithBlock:(/*^block*/id)arg1 ;
-(long long)compatibleFamily;
-(void)setBodyTextProvider:(CLKTextProvider *)arg1 ;
-(id)initWithHeaderTextProvider:(id)arg1 bodyTextProvider:(id)arg2 ;
-(id)initWithHeaderImageProvider:(id)arg1 headerTextProvider:(id)arg2 bodyTextProvider:(id)arg3 ;
@end

