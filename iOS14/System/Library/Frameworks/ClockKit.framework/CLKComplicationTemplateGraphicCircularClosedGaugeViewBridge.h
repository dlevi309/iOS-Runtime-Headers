/*
* Generated on Thursday, January 14, 2021 at 2:26:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ClockKit.framework/ClockKit
*/

#import <ClockKit/CLKComplicationTemplateGraphicCircular.h>

@class CLKGaugeProvider, NSData;

@interface CLKComplicationTemplateGraphicCircularClosedGaugeViewBridge : CLKComplicationTemplateGraphicCircular {

	CLKGaugeProvider* _gaugeProvider;
	NSData* _labelData;

}

@property (nonatomic,copy) CLKGaugeProvider * gaugeProvider;              //@synthesize gaugeProvider=_gaugeProvider - In the implementation block
@property (nonatomic,retain) NSData * labelData;                          //@synthesize labelData=_labelData - In the implementation block
-(NSData *)labelData;
-(void)setLabelData:(NSData *)arg1 ;
-(CLKGaugeProvider *)gaugeProvider;
-(void)setGaugeProvider:(CLKGaugeProvider *)arg1 ;
-(void)_enumerateGaugeProviderKeysWithBlock:(/*^block*/id)arg1 ;
-(void)_enumerateSwiftUIViewDataKeysWithBlock:(/*^block*/id)arg1 ;
-(id)viewDataKeyForSwiftUIViewKey:(id)arg1 ;
-(BOOL)usesSwiftUI;
-(BOOL)needsSerializableCopy;
-(id)serializableCopyWithImageProviders:(id)arg1 ;
@end

