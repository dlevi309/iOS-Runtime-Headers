/*
* Generated on Thursday, January 14, 2021 at 2:20:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
*/


@protocol OS_dispatch_queue;
@class NSObject, BBSettingsGateway, NSDictionary;

@interface PSNotificationSettingsController : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	BBSettingsGateway* _gateway;
	NSDictionary* _sectionInfosByIdentifier;

}
+(id)sharedInstance;
-(id)init;
-(id)sectionInfoForIdentifier:(id)arg1 ;
-(id)allSectionInfoIdentifiers;
-(void)dealloc;
@end

