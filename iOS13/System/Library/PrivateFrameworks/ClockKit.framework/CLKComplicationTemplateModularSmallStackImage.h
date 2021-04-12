/*
* Generated on Monday, March 1, 2021 at 2:33:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
*/

#import <ClockKit/ClockKit-Structs.h>
#import <ClockKit/CLKComplicationTemplate.h>

@class CLKImageProvider, CLKTextProvider;

@interface CLKComplicationTemplateModularSmallStackImage : CLKComplicationTemplate {

	CLKImageProvider* _line1ImageProvider;
	CLKTextProvider* _line2TextProvider;
	unsigned long long _highlightMode;

}

@property (assign,nonatomic) unsigned long long highlightMode;                 //@synthesize highlightMode=_highlightMode - In the implementation block
@property (nonatomic,copy) CLKImageProvider * line1ImageProvider;              //@synthesize line1ImageProvider=_line1ImageProvider - In the implementation block
@property (nonatomic,copy) CLKTextProvider * line2TextProvider;                //@synthesize line2TextProvider=_line2TextProvider - In the implementation block
@property (assign,nonatomic) BOOL highlightLine2; 
+(CGSize)imageSize;
-(void)_enumerateTextProviderKeysWithBlock:(/*^block*/id)arg1 ;
-(void)_enumerateImageProviderKeysWithBlock:(/*^block*/id)arg1 ;
-(void)_enumerateIntegerKeysWithBlock:(/*^block*/id)arg1 ;
-(id)_initWithJSONObjectRepresentation:(id)arg1 bundle:(id)arg2 ;
-(id)JSONObjectRepresentationWritingResourcesToBundlePath:(id)arg1 ;
-(BOOL)isCompatibleWithFamily:(long long)arg1 ;
-(void)setHighlightMode:(unsigned long long)arg1 ;
-(unsigned long long)highlightMode;
-(void)setHighlightLine2:(BOOL)arg1 ;
-(BOOL)highlightLine2;
-(CLKTextProvider *)line2TextProvider;
-(void)setLine2TextProvider:(CLKTextProvider *)arg1 ;
-(CLKImageProvider *)line1ImageProvider;
-(void)setLine1ImageProvider:(CLKImageProvider *)arg1 ;
@end

