/*
* Generated on Monday, March 1, 2021 at 2:35:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
*/

#import <CoreImage/CIFilter.h>
#import <libobjc.A.dylib/OKSettingsSupport.h>

@class CIImage, OKPresentation, NSString;

@interface OKWidgetBasicFilter : CIFilter <OKSettingsSupport> {

	CIImage* _inputImage;
	OKPresentation* _inputPresentation;

}

@property (assign,nonatomic) OKPresentation * inputPresentation;              //@synthesize inputPresentation=_inputPresentation - In the implementation block
@property (nonatomic,retain) CIImage * inputImage;                            //@synthesize inputImage=_inputImage - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)supportedSettings;
+(void)setupJavascriptContext:(id)arg1 ;
-(void)dealloc;
-(id)initWithSettings:(id)arg1 ;
-(id)outputImage;
-(CIImage *)inputImage;
-(void)setInputImage:(CIImage *)arg1 ;
-(id)inputKeys;
-(id)settingObjectForKey:(id)arg1 ;
-(void)setUserSettingObject:(id)arg1 forKey:(id)arg2 ;
-(OKPresentation *)inputPresentation;
-(void)setInputPresentation:(OKPresentation *)arg1 ;
@end

