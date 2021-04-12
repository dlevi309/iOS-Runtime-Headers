/*
* Generated on Thursday, January 14, 2021 at 2:21:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

@class INSettingMetadata, INSpeakableString;


@protocol INOpenSettingIntentExport <NSObject,JSExport>
@property (nonatomic,copy) INSettingMetadata * settingMetadata; 
@property (nonatomic,copy) INSpeakableString * searchQuery; 
@required
-(id)init;
-(INSettingMetadata *)settingMetadata;
-(void)setSettingMetadata:(id)arg1;
-(INSpeakableString *)searchQuery;
-(void)setSearchQuery:(id)arg1;

@end

