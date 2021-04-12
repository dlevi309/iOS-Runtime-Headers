/*
* Generated on Monday, March 1, 2021 at 2:35:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
*/

#import <OpusKit/OKWidgetBasicFilter.h>

@class CIColor;

@interface OKWidgetConstantColorGeneratorFilter : OKWidgetBasicFilter {

	CIColor* _inputColor;

}

@property (nonatomic,retain) CIColor * inputColor;              //@synthesize inputColor=_inputColor - In the implementation block
+(id)supportedSettings;
+(void)setupJavascriptContext:(id)arg1 ;
-(void)dealloc;
-(id)outputImage;
-(CIColor *)inputColor;
-(void)setInputColor:(CIColor *)arg1 ;
-(id)inputKeys;
-(void)setSettingInputColor:(id)arg1 ;
@end

