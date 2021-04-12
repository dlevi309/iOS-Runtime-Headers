/*
* Generated on Monday, March 1, 2021 at 2:34:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <Home/HFStaticItemProvider.h>

@class NSSet;

@interface HUCameraStorageDurationHeaderItemProvider : HFStaticItemProvider {

	unsigned long long _displayStyle;
	NSSet* _cameraProfiles;

}

@property (nonatomic,readonly) unsigned long long displayStyle;              //@synthesize displayStyle=_displayStyle - In the implementation block
@property (nonatomic,copy,readonly) NSSet * cameraProfiles;                  //@synthesize cameraProfiles=_cameraProfiles - In the implementation block
-(id)initWithItems:(id)arg1 ;
-(unsigned long long)displayStyle;
-(NSSet *)cameraProfiles;
-(id)invalidationReasons;
-(id)initWithCameraProfiles:(id)arg1 displayStyle:(unsigned long long)arg2 ;
@end

