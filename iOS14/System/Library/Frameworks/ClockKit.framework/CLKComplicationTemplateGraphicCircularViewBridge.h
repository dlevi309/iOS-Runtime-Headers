/*
* Generated on Thursday, January 14, 2021 at 2:26:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ClockKit.framework/ClockKit
*/

#import <ClockKit/CLKComplicationTemplateGraphicCircular.h>

@class NSData;

@interface CLKComplicationTemplateGraphicCircularViewBridge : CLKComplicationTemplateGraphicCircular {

	NSData* _contentData;

}

@property (nonatomic,retain) NSData * contentData;              //@synthesize contentData=_contentData - In the implementation block
-(NSData *)contentData;
-(void)_enumerateSwiftUIViewDataKeysWithBlock:(/*^block*/id)arg1 ;
-(id)viewDataKeyForSwiftUIViewKey:(id)arg1 ;
-(BOOL)usesSwiftUI;
-(BOOL)needsSerializableCopy;
-(id)serializableCopyWithImageProviders:(id)arg1 ;
-(void)setContentData:(NSData *)arg1 ;
@end

