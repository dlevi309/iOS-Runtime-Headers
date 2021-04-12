/*
* Generated on Monday, March 1, 2021 at 2:35:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id)outputImage;
-(id)inputKeys;
-(void)setInputImageURL:(NSURL *)arg1 ;
-(void)setSettingInputImageURL:(id)arg1 ;
-(NSURL *)inputImageURL;
@end

