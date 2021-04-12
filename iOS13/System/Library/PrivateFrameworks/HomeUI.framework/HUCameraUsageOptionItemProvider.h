/*
* Generated on Monday, March 1, 2021 at 2:34:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(unsigned long long)displayStyle;
-(id)reloadItems;
-(unsigned long long)presenceEventType;
-(NSSet *)cameraProfiles;
-(id)invalidationReasons;
-(id)initWithPresenceEventType:(unsigned long long)arg1 cameraProfiles:(id)arg2 ;
@end

