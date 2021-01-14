/*
* Generated on Thursday, January 14, 2021 at 2:26:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ClockKit.framework/ClockKit
*/

#import <ClockKit/CLKComplicationTemplate.h>

@class CLKFullColorImageProvider, CLKTextProvider;

@interface CLKComplicationTemplateGraphicRectangularStandardBody : CLKComplicationTemplate {

	CLKFullColorImageProvider* _headerImageProvider;
	CLKTextProvider* _headerTextProvider;
	CLKTextProvider* _body1TextProvider;
	CLKTextProvider* _body2TextProvider;

}

@property (nonatomic,copy) CLKFullColorImageProvider * headerImageProvider;              //@synthesize headerImageProvider=_headerImageProvider - In the implementation block
@property (nonatomic,copy) CLKTextProvider * headerTextProvider;                         //@synthesize headerTextProvider=_headerTextProvider - In the implementation block
@property (nonatomic,copy) CLKTextProvider * body1TextProvider;                          //@synthesize body1TextProvider=_body1TextProvider - In the implementation block
@property (nonatomic,copy) CLKTextProvider * body2TextProvider;                          //@synthesize body2TextProvider=_body2TextProvider - In the implementation block
+(id)templateWithHeaderTextProvider:(id)arg1 body1TextProvider:(id)arg2 ;
+(id)templateWithHeaderTextProvider:(id)arg1 body1TextProvider:(id)arg2 body2TextProvider:(id)arg3 ;
+(id)templateWithHeaderImageProvider:(id)arg1 headerTextProvider:(id)arg2 body1TextProvider:(id)arg3 body2TextProvider:(id)arg4 ;
+(id)templateWithHeaderImageProvider:(id)arg1 headerTextProvider:(id)arg2 body1TextProvider:(id)arg3 ;
-(CLKTextProvider *)headerTextProvider;
-(CLKTextProvider *)body2TextProvider;
-(CLKFullColorImageProvider *)headerImageProvider;
-(CLKTextProvider *)body1TextProvider;
-(void)setHeaderImageProvider:(CLKFullColorImageProvider *)arg1 ;
-(void)setHeaderTextProvider:(CLKTextProvider *)arg1 ;
-(void)_enumerateFullColorImageProviderKeysWithBlock:(/*^block*/id)arg1 ;
-(void)_enumerateTextProviderKeysWithBlock:(/*^block*/id)arg1 ;
-(long long)compatibleFamily;
-(id)initWithHeaderImageProvider:(id)arg1 headerTextProvider:(id)arg2 body1TextProvider:(id)arg3 body2TextProvider:(id)arg4 ;
-(void)setBody1TextProvider:(CLKTextProvider *)arg1 ;
-(void)setBody2TextProvider:(CLKTextProvider *)arg1 ;
-(id)initWithHeaderTextProvider:(id)arg1 body1TextProvider:(id)arg2 ;
-(id)initWithHeaderImageProvider:(id)arg1 headerTextProvider:(id)arg2 body1TextProvider:(id)arg3 ;
-(id)initWithHeaderTextProvider:(id)arg1 body1TextProvider:(id)arg2 body2TextProvider:(id)arg3 ;
@end

