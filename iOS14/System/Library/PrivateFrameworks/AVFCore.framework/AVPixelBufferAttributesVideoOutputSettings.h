/*
* Generated on Thursday, January 14, 2021 at 2:21:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/

#import <AVFCore/AVVideoOutputSettings.h>
#import <AVFCore/AVDecodedVideoSettingsForFig.h>

@class NSDictionary, NSString;

@interface AVPixelBufferAttributesVideoOutputSettings : AVVideoOutputSettings <AVDecodedVideoSettingsForFig> {

	NSDictionary* _VTPixelAspectRatioDictionary;
	NSDictionary* _VTCleanApertureDictionary;

}

@property (nonatomic,readonly) NSDictionary * pixelBufferAttributes; 
@property (nonatomic,readonly) NSString * fieldMode; 
+(id)_videoOutputSettingsWithVideoSettingsDictionary:(id)arg1 exceptionReason:(id*)arg2 ;
+(id)eligibleOutputSettingsDictionaryKeys;
-(id)cleanApertureDictionary;
-(int)width;
-(NSDictionary *)pixelBufferAttributes;
-(int)height;
-(id)initWithTrustedPixelBufferAttributes:(id)arg1 ;
-(BOOL)encoderIsAvailableOnCurrentSystemReturningError:(id*)arg1 ;
-(BOOL)canFullySpecifyOutputFormatReturningReason:(id*)arg1 ;
-(id)initWithPixelBufferAttributes:(id)arg1 exceptionReason:(id*)arg2 ;
-(id)pixelAspectRatioDictionary;
-(NSString *)fieldMode;
-(BOOL)willYieldCompressedSamples;
-(void)dealloc;
@end

