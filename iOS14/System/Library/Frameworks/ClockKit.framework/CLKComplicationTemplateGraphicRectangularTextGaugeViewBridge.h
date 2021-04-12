/*
* Generated on Thursday, January 14, 2021 at 2:26:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ClockKit.framework/ClockKit
*/

#import <ClockKit/CLKComplicationTemplate.h>

@class NSData, CLKTextProvider, CLKGaugeProvider;

@interface CLKComplicationTemplateGraphicRectangularTextGaugeViewBridge : CLKComplicationTemplate {

	NSData* _headerLabelData;
	CLKTextProvider* _headerTextProvider;
	CLKTextProvider* _bodyTextProvider;
	CLKGaugeProvider* _gaugeProvider;

}

@property (nonatomic,retain) NSData * headerLabelData;                        //@synthesize headerLabelData=_headerLabelData - In the implementation block
@property (nonatomic,copy) CLKTextProvider * headerTextProvider;              //@synthesize headerTextProvider=_headerTextProvider - In the implementation block
@property (nonatomic,copy) CLKTextProvider * bodyTextProvider;                //@synthesize bodyTextProvider=_bodyTextProvider - In the implementation block
@property (nonatomic,copy) CLKGaugeProvider * gaugeProvider;                  //@synthesize gaugeProvider=_gaugeProvider - In the implementation block
-(CLKTextProvider *)headerTextProvider;
-(CLKGaugeProvider *)gaugeProvider;
-(void)setGaugeProvider:(CLKGaugeProvider *)arg1 ;
-(NSData *)headerLabelData;
-(void)setHeaderTextProvider:(CLKTextProvider *)arg1 ;
-(CLKTextProvider *)bodyTextProvider;
-(void)_enumerateTextProviderKeysWithBlock:(/*^block*/id)arg1 ;
-(void)_enumerateGaugeProviderKeysWithBlock:(/*^block*/id)arg1 ;
-(void)_enumerateSwiftUIViewDataKeysWithBlock:(/*^block*/id)arg1 ;
-(long long)compatibleFamily;
-(id)viewDataKeyForSwiftUIViewKey:(id)arg1 ;
-(BOOL)usesSwiftUI;
-(BOOL)needsSerializableCopy;
-(id)serializableCopyWithImageProviders:(id)arg1 ;
-(void)setBodyTextProvider:(CLKTextProvider *)arg1 ;
-(void)setHeaderLabelData:(NSData *)arg1 ;
@end

