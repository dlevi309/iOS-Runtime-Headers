/*
* Generated on Monday, March 1, 2021 at 2:30:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/

#import <AVFoundation/AVVideoOutputSettings.h>
#import <AVFoundation/AVDecodedVideoSettingsForFig.h>

@class NSDictionary, NSString;

@interface AVPixelBufferAttributesVideoOutputSettings : AVVideoOutputSettings <AVDecodedVideoSettingsForFig> {

	NSDictionary* _VTPixelAspectRatioDictionary;
	NSDictionary* _VTCleanApertureDictionary;

}

@property (nonatomic,readonly) NSDictionary * pixelBufferAttributes; 
@property (nonatomic,readonly) NSString * fieldMode; 
+(id)_videoOutputSettingsWithVideoSettingsDictionary:(id)arg1 exceptionReason:(id*)arg2 ;
+(id)eligibleOutputSettingsDictionaryKeys;
-(void)dealloc;
-(int)width;
-(int)height;
-(NSDictionary *)pixelBufferAttributes;
-(BOOL)willYieldCompressedSamples;
-(NSString *)fieldMode;
-(BOOL)canFullySpecifyOutputFormatReturningReason:(id*)arg1 ;
-(BOOL)encoderIsAvailableOnCurrentSystemReturningError:(id*)arg1 ;
-(id)initWithTrustedPixelBufferAttributes:(id)arg1 ;
-(id)pixelAspectRatioDictionary;
-(id)cleanApertureDictionary;
-(id)initWithPixelBufferAttributes:(id)arg1 exceptionReason:(id*)arg2 ;
@end

