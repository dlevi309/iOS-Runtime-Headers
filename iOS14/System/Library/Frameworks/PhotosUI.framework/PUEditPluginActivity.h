/*
* Generated on Thursday, January 14, 2021 at 2:22:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <ShareSheet/UIActivity.h>

@class PUEditPlugin;

@interface PUEditPluginActivity : UIActivity {

	PUEditPlugin* _plugin;

}

@property (nonatomic,readonly) PUEditPlugin * plugin;              //@synthesize plugin=_plugin - In the implementation block
+(long long)activityCategory;
-(id)activityType;
-(id)_activitySettingsImage;
-(PUEditPlugin *)plugin;
-(id)initWithPlugin:(id)arg1 ;
-(BOOL)_isHiddenByDefault;
-(BOOL)canPerformWithActivityItems:(id)arg1 ;
-(id)activityTitle;
-(id)_activityImage;
@end

