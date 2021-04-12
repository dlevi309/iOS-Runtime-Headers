/*
* Generated on Thursday, January 14, 2021 at 2:21:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/


@protocol AVDecodedAudioSettingsForFig
@required
-(AudioChannelLayout*)copyAudioChannelLayoutForSourceFormatDescription:(opaqueCMFormatDescriptionRef)arg1 audioChannelLayoutSize:(unsigned long long*)arg2;
-(id)audioOptions;
-(void)getAudioStreamBasicDescription:(AudioStreamBasicDescription*)arg1 forAudioFileTypeID:(unsigned)arg2 sourceFormatDescription:(opaqueCMFormatDescriptionRef)arg3;

@end

