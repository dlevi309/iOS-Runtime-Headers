/*
* Generated on Thursday, January 14, 2021 at 2:21:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/


@protocol AVOutputSettingsAssistantBaseSettingsProvider, AVOutputSettingsAssistantVideoSettingsAdjuster;
#import <AVFCore/AVFCore-Structs.h>
@class NSDictionary;

@interface AVOutputSettingsAssistantInternal : NSObject {

	id<AVOutputSettingsAssistantBaseSettingsProvider> baseSettingsProvider;
	id<AVOutputSettingsAssistantVideoSettingsAdjuster> videoSettingsAdjuster;
	opaqueCMFormatDescriptionRef sourceVideoFormat;
	opaqueCMFormatDescriptionRef sourceAudioFormat;
	NSDictionary* videoEncoderSpecification;
	SCD_Struct_AV6 sourceVideoAverageFrameDuration;
	SCD_Struct_AV6 sourceVideoMinFrameDuration;

}
@end

