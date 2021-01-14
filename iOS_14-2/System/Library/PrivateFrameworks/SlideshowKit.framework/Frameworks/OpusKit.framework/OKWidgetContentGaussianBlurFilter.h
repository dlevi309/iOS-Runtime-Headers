/*
* Generated on Thursday, January 14, 2021 at 2:28:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
*/

#import <OpusKit/OKWidgetBasicFilter.h>
#import <libobjc.A.dylib/JSOKWidgetContentGaussianBlurFilter.h>

@class NSNumber;

@interface OKWidgetContentGaussianBlurFilter : OKWidgetBasicFilter <JSOKWidgetContentGaussianBlurFilter> {

	NSNumber* _inputRadius;

}

@property (nonatomic,retain) NSNumber * inputRadius;              //@synthesize inputRadius=_inputRadius - In the implementation block
+(id)supportedSettings;
+(void)setupJavascriptContext:(id)arg1 ;
+(id)filterWithInputRadius:(id)arg1 ;
-(NSNumber *)inputRadius;
-(void)setInputRadius:(NSNumber *)arg1 ;
-(id)inputKeys;
-(id)outputImage;
-(void)dealloc;
-(id)settingInputRadius;
-(void)setSettingInputRadius:(id)arg1 ;
@end

