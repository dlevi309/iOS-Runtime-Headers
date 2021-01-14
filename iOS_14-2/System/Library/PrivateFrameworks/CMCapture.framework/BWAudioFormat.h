/*
* Generated on Thursday, January 14, 2021 at 2:23:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/BWFormat.h>

@class NSDictionary;

@interface BWAudioFormat : BWFormat {

	opaqueCMFormatDescriptionRef _audioFormatDescription;
	NSDictionary* _avAudioSettings;

}

@property (readonly) opaqueCMFormatDescriptionRef audioFormatDescription; 
@property (readonly) NSDictionary * audioCompressionSBPOptions; 
+(void)initialize;
+(BOOL)compressionOptionTrimSampleBufferDurationsIsRequiredForAudioSettings:(id)arg1 ;
+(id)formatWithAudioFormatDescription:(opaqueCMFormatDescriptionRef)arg1 ;
+(id)formatForAVAudioSettings:(id)arg1 inputFormat:(id)arg2 ;
-(unsigned)mediaType;
-(opaqueCMFormatDescriptionRef)formatDescription;
-(id)debugDescription;
-(opaqueCMFormatDescriptionRef)audioFormatDescription;
-(id)_initForAVAudioSettings:(id)arg1 inputFormat:(id)arg2 ;
-(id)description;
-(id)_initWithAudioFormatDescription:(opaqueCMFormatDescriptionRef)arg1 ;
-(NSDictionary *)audioCompressionSBPOptions;
-(void)dealloc;
@end

