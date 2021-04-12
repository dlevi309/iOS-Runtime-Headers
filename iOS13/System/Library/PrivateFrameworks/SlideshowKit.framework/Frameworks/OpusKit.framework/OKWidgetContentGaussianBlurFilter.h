/*
* Generated on Monday, March 1, 2021 at 2:35:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id)outputImage;
-(NSNumber *)inputRadius;
-(void)setInputRadius:(NSNumber *)arg1 ;
-(id)inputKeys;
-(id)settingInputRadius;
-(void)setSettingInputRadius:(id)arg1 ;
@end

