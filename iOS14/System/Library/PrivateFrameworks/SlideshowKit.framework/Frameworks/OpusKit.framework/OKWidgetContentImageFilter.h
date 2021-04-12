/*
* Generated on Thursday, January 14, 2021 at 2:28:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
*/

#import <OpusKit/OKWidgetBasicFilter.h>
#import <libobjc.A.dylib/JSOKWidgetContentImageFilter.h>

@class NSURL, CIImage;

@interface OKWidgetContentImageFilter : OKWidgetBasicFilter <JSOKWidgetContentImageFilter> {

	NSURL* _inputImageURL;
	CIImage* _imageOutput;

}

@property (nonatomic,retain) NSURL * inputImageURL;              //@synthesize inputImageURL=_inputImageURL - In the implementation block
+(id)supportedSettings;
+(void)setupJavascriptContext:(id)arg1 ;
+(id)filterWithImageURL:(id)arg1 ;
-(id)inputKeys;
-(id)outputImage;
-(void)dealloc;
-(void)setInputImageURL:(NSURL *)arg1 ;
-(void)setSettingInputImageURL:(id)arg1 ;
-(NSURL *)inputImageURL;
@end

