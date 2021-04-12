/*
* Generated on Monday, March 1, 2021 at 2:34:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HUExpandableItemContainerModule.h>
#import <libobjc.A.dylib/HUCameraSettingsModule.h>

@protocol HUCameraRecordingSettingsModuleDelegate;
@class NSSet, NSString, NSArray, HUCameraRecordingOptionsItem, HUCameraPresenceRecordingSettingsModule, HFItemProvider, HULocationDeviceManager, UIViewController;

@interface HUCameraRecordingSettingsModule : HUExpandableItemContainerModule <HUCameraSettingsModule> {

	NSSet* _itemProviders;
	unsigned long long _displayStyle;
	NSString* _longestCameraUsageOptionItemTitle;
	NSString* _longestCameraPresenceItemTitle;
	NSArray* _cameraPresenceItems;
	id<HUCameraRecordingSettingsModuleDelegate> _delegate;
	NSSet* _cameraProfiles;
	HUCameraRecordingOptionsItem* _recordingOptionsItem;
	HUCameraPresenceRecordingSettingsModule* _whenHomeSectionModule;
	HUCameraPresenceRecordingSettingsModule* _whenAwaySectionModule;
	HFItemProvider* _headerItemProvider;
	HULocationDeviceManager* _locationDeviceManager;
	NSString* _locationDeviceName;

}

@property (nonatomic,retain) HUCameraPresenceRecordingSettingsModule * whenHomeSectionModule;              //@synthesize whenHomeSectionModule=_whenHomeSectionModule - In the implementation block
@property (nonatomic,retain) HUCameraPresenceRecordingSettingsModule * whenAwaySectionModule;              //@synthesize whenAwaySectionModule=_whenAwaySectionModule - In the implementation block
@property (nonatomic,readonly) HFItemProvider * headerItemProvider;                                        //@synthesize headerItemProvider=_headerItemProvider - In the implementation block
@property (nonatomic,retain) NSSet * itemProviders;                                                        //@synthesize itemProviders=_itemProviders - In the implementation block
@property (nonatomic,retain) HULocationDeviceManager * locationDeviceManager;                              //@synthesize locationDeviceManager=_locationDeviceManager - In the implementation block
@property (nonatomic,retain) NSString * locationDeviceName;                                                //@synthesize locationDeviceName=_locationDeviceName - In the implementation block
@property (assign,nonatomic,__weak) id<HUCameraRecordingSettingsModuleDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSSet * cameraProfiles;                                                     //@synthesize cameraProfiles=_cameraProfiles - In the implementation block
@property (nonatomic,readonly) unsigned long long awayAccessModeSetting; 
@property (nonatomic,readonly) unsigned long long presentAccessModeSetting; 
@property (nonatomic,readonly) HUCameraRecordingOptionsItem * recordingOptionsItem;                        //@synthesize recordingOptionsItem=_recordingOptionsItem - In the implementation block
@property (nonatomic,readonly) NSArray * presenceModules; 
@property (nonatomic,readonly) NSString * longestCameraUsageOptionItemTitle;                               //@synthesize longestCameraUsageOptionItemTitle=_longestCameraUsageOptionItemTitle - In the implementation block
@property (nonatomic,readonly) NSString * longestCameraPresenceItemTitle;                                  //@synthesize longestCameraPresenceItemTitle=_longestCameraPresenceItemTitle - In the implementation block
@property (nonatomic,readonly) NSArray * cameraPresenceItems;                                              //@synthesize cameraPresenceItems=_cameraPresenceItems - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long displayStyle;                                            //@synthesize displayStyle=_displayStyle - In the implementation block
@property (nonatomic,retain) UIViewController * presentingViewController; 
-(id<HUCameraRecordingSettingsModuleDelegate>)delegate;
-(void)setDelegate:(id<HUCameraRecordingSettingsModuleDelegate>)arg1 ;
-(NSSet *)itemProviders;
-(void)setItemProviders:(NSSet *)arg1 ;
-(unsigned long long)displayStyle;
-(NSSet *)cameraProfiles;
-(id)initWithItemUpdater:(id)arg1 ;
-(id)buildSectionsWithDisplayedItems:(id)arg1 ;
-(id)_attributedFooterTitle;
-(id)didSelectItem:(id)arg1 ;
-(void)_buildItemProviders;
-(HFItemProvider *)headerItemProvider;
-(id)expandableModules;
-(BOOL)isItemHeader:(id)arg1 ;
-(HULocationDeviceManager *)locationDeviceManager;
-(id)initWithItemUpdater:(id)arg1 cameraProfiles:(id)arg2 displayStyle:(unsigned long long)arg3 ;
-(NSString *)longestCameraUsageOptionItemTitle;
-(NSArray *)presenceModules;
-(NSString *)longestCameraPresenceItemTitle;
-(HUCameraRecordingOptionsItem *)recordingOptionsItem;
-(NSArray *)cameraPresenceItems;
-(HUCameraPresenceRecordingSettingsModule *)whenAwaySectionModule;
-(HUCameraPresenceRecordingSettingsModule *)whenHomeSectionModule;
-(void)setLocationDeviceName:(NSString *)arg1 ;
-(void)setWhenHomeSectionModule:(HUCameraPresenceRecordingSettingsModule *)arg1 ;
-(void)setWhenAwaySectionModule:(HUCameraPresenceRecordingSettingsModule *)arg1 ;
-(NSString *)locationDeviceName;
-(unsigned long long)awayAccessModeSetting;
-(unsigned long long)presentAccessModeSetting;
-(id)_expandingSectionModuleForPresenceType:(unsigned long long)arg1 ;
-(void)setLocationDeviceManager:(HULocationDeviceManager *)arg1 ;
@end

