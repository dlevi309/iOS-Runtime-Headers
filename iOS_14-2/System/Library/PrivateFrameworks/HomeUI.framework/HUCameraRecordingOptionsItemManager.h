/*
* Generated on Thursday, January 14, 2021 at 2:24:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <Home/HFItemManager.h>
#import <libobjc.A.dylib/HUCameraRecordingSettingsModuleDelegate.h>

@class HUCameraRecordingSettingsModule, NSString;

@interface HUCameraRecordingOptionsItemManager : HFItemManager <HUCameraRecordingSettingsModuleDelegate> {

	HUCameraRecordingSettingsModule* _cameraRecordingItemModule;

}

@property (nonatomic,retain) HUCameraRecordingSettingsModule * cameraRecordingItemModule;              //@synthesize cameraRecordingItemModule=_cameraRecordingItemModule - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_buildSectionsWithDisplayedItems:(id)arg1 ;
-(id)_buildItemProvidersForHome:(id)arg1 ;
-(HUCameraRecordingSettingsModule *)cameraRecordingItemModule;
-(void)setCameraRecordingItemModule:(HUCameraRecordingSettingsModule *)arg1 ;
-(void)cameraRecordingSettingsModule:(id)arg1 didUpdateItem:(id)arg2 ;
@end

