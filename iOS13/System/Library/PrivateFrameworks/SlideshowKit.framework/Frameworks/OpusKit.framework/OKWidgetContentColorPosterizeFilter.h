/*
* Generated on Monday, March 1, 2021 at 2:35:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
*/

#import <OpusKit/OKWidgetBasicFilter.h>
#import <libobjc.A.dylib/JSOKWidgetContentColorPosterizeFilter.h>

@class NSNumber;

@interface OKWidgetContentColorPosterizeFilter : OKWidgetBasicFilter <JSOKWidgetContentColorPosterizeFilter> {

	NSNumber* _inputLevels;

}

@property (nonatomic,retain) NSNumber * inputLevels;              //@synthesize inputLevels=_inputLevels - In the implementation block
+(id)supportedSettings;
+(void)setupJavascriptContext:(id)arg1 ;
+(id)filterWithInputLevels:(id)arg1 ;
-(id)outputImage;
-(NSNumber *)inputLevels;
-(void)setInputLevels:(NSNumber *)arg1 ;
-(id)inputKeys;
-(void)setSettingInputLevels:(id)arg1 ;
@end

