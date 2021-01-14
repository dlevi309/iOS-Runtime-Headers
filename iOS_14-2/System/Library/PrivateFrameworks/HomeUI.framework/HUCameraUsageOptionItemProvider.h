/*
* Generated on Thursday, January 14, 2021 at 2:24:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <Home/HFItemProvider.h>

@class NSMutableSet, NSSet;

@interface HUCameraUsageOptionItemProvider : HFItemProvider {

	NSMutableSet* _items;
	unsigned long long _presenceEventType;
	unsigned long long _displayStyle;
	NSSet* _cameraProfiles;

}

@property (nonatomic,readonly) NSMutableSet * items;                              //@synthesize items=_items - In the implementation block
@property (nonatomic,readonly) unsigned long long presenceEventType;              //@synthesize presenceEventType=_presenceEventType - In the implementation block
@property (nonatomic,readonly) unsigned long long displayStyle;                   //@synthesize displayStyle=_displayStyle - In the implementation block
@property (nonatomic,copy,readonly) NSSet * cameraProfiles;                       //@synthesize cameraProfiles=_cameraProfiles - In the implementation block
-(id)init;
-(NSMutableSet *)items;
-(id)reloadItems;
-(unsigned long long)presenceEventType;
-(id)invalidationReasons;
-(NSSet *)cameraProfiles;
-(unsigned long long)displayStyle;
-(id)initWithPresenceEventType:(unsigned long long)arg1 cameraProfiles:(id)arg2 ;
@end

