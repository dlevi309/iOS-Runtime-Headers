/*
* Generated on Thursday, January 14, 2021 at 2:26:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ClockKit.framework/ClockKit
*/

#import <ClockKit/CLKComplicationTemplate.h>

@class CLKTextProvider, NSData;

@interface CLKComplicationTemplateGraphicCornerTextViewBridge : CLKComplicationTemplate {

	CLKTextProvider* _textProvider;
	NSData* _labelData;

}

@property (nonatomic,copy) CLKTextProvider * textProvider;              //@synthesize textProvider=_textProvider - In the implementation block
@property (nonatomic,retain) NSData * labelData;                        //@synthesize labelData=_labelData - In the implementation block
-(CLKTextProvider *)textProvider;
-(NSData *)labelData;
-(void)setLabelData:(NSData *)arg1 ;
-(void)setTextProvider:(CLKTextProvider *)arg1 ;
-(void)_enumerateTextProviderKeysWithBlock:(/*^block*/id)arg1 ;
-(void)_enumerateSwiftUIViewDataKeysWithBlock:(/*^block*/id)arg1 ;
-(long long)compatibleFamily;
-(id)viewDataKeyForSwiftUIViewKey:(id)arg1 ;
-(BOOL)usesSwiftUI;
-(BOOL)needsSerializableCopy;
-(id)serializableCopyWithImageProviders:(id)arg1 ;
@end

