/*
* Generated on Thursday, January 14, 2021 at 2:26:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ClockKit.framework/ClockKit
*/

#import <ClockKit/CLKComplicationTemplate.h>

@class NSData, CLKTextProvider;

@interface CLKComplicationTemplateGraphicRectangularStandardBodyViewBridge : CLKComplicationTemplate {

	NSData* _headerLabelData;
	CLKTextProvider* _headerTextProvider;
	CLKTextProvider* _body1TextProvider;
	CLKTextProvider* _body2TextProvider;

}

@property (nonatomic,retain) NSData * headerLabelData;                        //@synthesize headerLabelData=_headerLabelData - In the implementation block
@property (nonatomic,copy) CLKTextProvider * headerTextProvider;              //@synthesize headerTextProvider=_headerTextProvider - In the implementation block
@property (nonatomic,copy) CLKTextProvider * body1TextProvider;               //@synthesize body1TextProvider=_body1TextProvider - In the implementation block
@property (nonatomic,copy) CLKTextProvider * body2TextProvider;               //@synthesize body2TextProvider=_body2TextProvider - In the implementation block
-(CLKTextProvider *)headerTextProvider;
-(CLKTextProvider *)body2TextProvider;
-(NSData *)headerLabelData;
-(CLKTextProvider *)body1TextProvider;
-(void)setHeaderTextProvider:(CLKTextProvider *)arg1 ;
-(void)_enumerateTextProviderKeysWithBlock:(/*^block*/id)arg1 ;
-(void)_enumerateSwiftUIViewDataKeysWithBlock:(/*^block*/id)arg1 ;
-(long long)compatibleFamily;
-(id)viewDataKeyForSwiftUIViewKey:(id)arg1 ;
-(BOOL)usesSwiftUI;
-(BOOL)needsSerializableCopy;
-(id)serializableCopyWithImageProviders:(id)arg1 ;
-(void)setBody1TextProvider:(CLKTextProvider *)arg1 ;
-(void)setBody2TextProvider:(CLKTextProvider *)arg1 ;
-(void)setHeaderLabelData:(NSData *)arg1 ;
@end

