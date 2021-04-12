/*
* Generated on Thursday, January 14, 2021 at 2:28:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
*/

#import <OpusKit/OKWidgetBasicFilter.h>
#import <libobjc.A.dylib/JSOKWidgetContentColorControlsFilter.h>

@class NSNumber;

@interface OKWidgetContentColorControlsFilter : OKWidgetBasicFilter <JSOKWidgetContentColorControlsFilter> {

	NSNumber* _inputSaturation;
	NSNumber* _inputBrightness;
	NSNumber* _inputContrast;

}

@property (nonatomic,retain) NSNumber * inputSaturation;              //@synthesize inputSaturation=_inputSaturation - In the implementation block
@property (nonatomic,retain) NSNumber * inputBrightness;              //@synthesize inputBrightness=_inputBrightness - In the implementation block
@property (nonatomic,retain) NSNumber * inputContrast;                //@synthesize inputContrast=_inputContrast - In the implementation block
+(id)supportedSettings;
+(void)setupJavascriptContext:(id)arg1 ;
+(id)filterWithInputSaturation:(id)arg1 inputBrightness:(id)arg2 inputContrast:(id)arg3 ;
-(id)inputKeys;
-(NSNumber *)inputSaturation;
-(void)setInputSaturation:(NSNumber *)arg1 ;
-(NSNumber *)inputBrightness;
-(void)setInputBrightness:(NSNumber *)arg1 ;
-(NSNumber *)inputContrast;
-(void)setInputContrast:(NSNumber *)arg1 ;
-(id)outputImage;
-(void)dealloc;
-(id)settingInputSaturation;
-(void)setSettingInputSaturation:(id)arg1 ;
-(id)setttingInputBrightness;
-(void)setSettingInputBrightness:(id)arg1 ;
-(id)settingInputContrast;
-(void)setSettingInputContrast:(id)arg1 ;
@end

