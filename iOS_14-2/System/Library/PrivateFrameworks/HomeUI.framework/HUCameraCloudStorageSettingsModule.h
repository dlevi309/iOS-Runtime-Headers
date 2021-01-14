/*
* Generated on Thursday, January 14, 2021 at 2:24:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <Home/HFItemModule.h>
#import <libobjc.A.dylib/HUCameraSettingsModule.h>

@class NSSet, HFItemProvider, UIViewController, NSString;

@interface HUCameraCloudStorageSettingsModule : HFItemModule <HUCameraSettingsModule> {

	NSSet* _itemProviders;
	NSSet* _cameraProfiles;
	HFItemProvider* _cloudStorageSectionSettingsItemProvider;

}

@property (nonatomic,readonly) NSSet * cameraProfiles;                                                //@synthesize cameraProfiles=_cameraProfiles - In the implementation block
@property (nonatomic,readonly) HFItemProvider * cloudStorageSectionSettingsItemProvider;              //@synthesize cloudStorageSectionSettingsItemProvider=_cloudStorageSectionSettingsItemProvider - In the implementation block
@property (nonatomic,readonly) unsigned long long displayStyle; 
@property (nonatomic,retain) UIViewController * presentingViewController; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)didSelectItem:(id)arg1 ;
-(id)itemProviders;
-(NSSet *)cameraProfiles;
-(id)initWithItemUpdater:(id)arg1 ;
-(id)buildSectionsWithDisplayedItems:(id)arg1 ;
-(BOOL)isItemHeader:(id)arg1 ;
-(id)initWithItemUpdater:(id)arg1 cameraProfiles:(id)arg2 ;
-(id)removeAllCameraRecordings;
-(HFItemProvider *)cloudStorageSectionSettingsItemProvider;
@end

