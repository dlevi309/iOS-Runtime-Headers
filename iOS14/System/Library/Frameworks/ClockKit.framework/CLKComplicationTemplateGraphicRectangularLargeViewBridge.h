/*
* Generated on Thursday, January 14, 2021 at 2:26:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ClockKit.framework/ClockKit
*/

#import <ClockKit/CLKComplicationTemplate.h>

@class CLKTextProvider, NSData;

@interface CLKComplicationTemplateGraphicRectangularLargeViewBridge : CLKComplicationTemplate {

	CLKTextProvider* _headerTextProvider;
	NSData* _contentData;

}

@property (nonatomic,copy) CLKTextProvider * headerTextProvider;              //@synthesize headerTextProvider=_headerTextProvider - In the implementation block
@property (nonatomic,retain) NSData * contentData;                            //@synthesize contentData=_contentData - In the implementation block
-(CLKTextProvider *)headerTextProvider;
-(NSData *)contentData;
-(void)setHeaderTextProvider:(CLKTextProvider *)arg1 ;
-(void)_enumerateTextProviderKeysWithBlock:(/*^block*/id)arg1 ;
-(void)_enumerateSwiftUIViewDataKeysWithBlock:(/*^block*/id)arg1 ;
-(long long)compatibleFamily;
-(id)viewDataKeyForSwiftUIViewKey:(id)arg1 ;
-(BOOL)usesSwiftUI;
-(BOOL)needsSerializableCopy;
-(id)serializableCopyWithImageProviders:(id)arg1 ;
-(void)setContentData:(NSData *)arg1 ;
@end

