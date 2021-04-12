/*
* Generated on Thursday, January 14, 2021 at 2:21:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/

#import <AVFCore/AVOutputSettingsAssistantBaseSettingsProvider.h>

@class NSDictionary, NSString;

@interface AVExportSettingsOutputSettingsAssistantBaseSettings : NSObject <AVOutputSettingsAssistantBaseSettingsProvider> {

	NSDictionary* _exportSettings;

}

@property (nonatomic,readonly) NSDictionary * baseAudioSettings; 
@property (nonatomic,readonly) NSDictionary * baseVideoSettings; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSDictionary *)baseAudioSettings;
-(NSDictionary *)baseVideoSettings;
-(id)initWithOutputSettingsPreset:(id)arg1 ;
-(void)dealloc;
@end

