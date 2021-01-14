/*
* Generated on Thursday, January 14, 2021 at 2:21:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/

#import <AVFCore/AVFCore-Structs.h>
#import <AVFCore/AVOutputSettingsAssistantVideoSettingsAdjuster.h>

@class NSString, NSDictionary;

@interface AVExportSettingsOutputSettingsAssistantVideoSettingsAdjuster : NSObject <AVOutputSettingsAssistantVideoSettingsAdjuster> {

	NSString* _outputSettingsPresetIdentifier;
	NSDictionary* _exportSettings;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)averageBitRateForSourceFormatDescription:(opaqueCMFormatDescriptionRef)arg1 andTargetFrameRate:(float)arg2 andEncoderSpecification:(id)arg3 ;
-(id)colorSpaceFromSourceFormatDescriptions:(id)arg1 andRendererColorSpace:(id)arg2 ;
-(id)initWithOutputSettingsPreset:(id)arg1 ;
-(void)dealloc;
@end

