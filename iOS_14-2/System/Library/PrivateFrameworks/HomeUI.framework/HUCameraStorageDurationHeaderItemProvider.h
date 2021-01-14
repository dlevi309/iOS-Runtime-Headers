/*
* Generated on Thursday, January 14, 2021 at 2:24:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)invalidationReasons;
-(NSSet *)cameraProfiles;
-(unsigned long long)displayStyle;
-(id)initWithCameraProfiles:(id)arg1 displayStyle:(unsigned long long)arg2 ;
@end

