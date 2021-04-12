/*
* Generated on Monday, March 1, 2021 at 2:34:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HUExpandableItemModule.h>
#import <libobjc.A.dylib/ICQUpgradeFlowManagerDelegate.h>
#import <libobjc.A.dylib/HUCameraSettingsModule.h>

@class NSSet, HFItem, NSString, UIViewController, HUCameraUsageOptionItemProvider, HFStaticItemProvider, NSArray, HMHome;

@interface HUCameraPresenceRecordingSettingsModule : HUExpandableItemModule <ICQUpgradeFlowManagerDelegate, HUCameraSettingsModule> {

	BOOL _didCompleteCloudUpgradeOffer;
	NSSet* _itemProviders;
	HFItem* _showOptionsItem;
	NSString* _longestCameraUsageOptionItemTitle;
	NSSet* _cameraProfiles;
	unsigned long long _presenceEventType;
	UIViewController* _presentingViewController;
	HUCameraUsageOptionItemProvider* _recordingSettingItemProvider;
	HFStaticItemProvider* _itemProvider;
	UIViewController* _viewController;
	NSArray* _optionItems;
	unsigned long long _upgradeState;
	unsigned long long _offerState;
	unsigned long long _numCamerasSupportRecordingService;
	HMHome* _home;

}

@property (nonatomic,retain) HUCameraUsageOptionItemProvider * recordingSettingItemProvider;              //@synthesize recordingSettingItemProvider=_recordingSettingItemProvider - In the implementation block
@property (nonatomic,retain) HFStaticItemProvider * itemProvider;                                         //@synthesize itemProvider=_itemProvider - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * viewController;                                    //@synthesize viewController=_viewController - In the implementation block
@property (nonatomic,retain) NSArray * optionItems;                                                       //@synthesize optionItems=_optionItems - In the implementation block
@property (assign,nonatomic) BOOL didCompleteCloudUpgradeOffer;                                           //@synthesize didCompleteCloudUpgradeOffer=_didCompleteCloudUpgradeOffer - In the implementation block
@property (assign,nonatomic) unsigned long long upgradeState;                                             //@synthesize upgradeState=_upgradeState - In the implementation block
@property (assign,nonatomic) unsigned long long offerState;                                               //@synthesize offerState=_offerState - In the implementation block
@property (assign,nonatomic) unsigned long long numCamerasSupportRecordingService;                        //@synthesize numCamerasSupportRecordingService=_numCamerasSupportRecordingService - In the implementation block
@property (nonatomic,retain) HMHome * home;                                                               //@synthesize home=_home - In the implementation block
@property (nonatomic,readonly) NSSet * cameraProfiles;                                                    //@synthesize cameraProfiles=_cameraProfiles - In the implementation block
@property (nonatomic,readonly) unsigned long long presenceEventType;                                      //@synthesize presenceEventType=_presenceEventType - In the implementation block
@property (nonatomic,readonly) unsigned long long accessModeSetting; 
@property (nonatomic,readonly) NSString * longestCameraUsageOptionItemTitle;                              //@synthesize longestCameraUsageOptionItemTitle=_longestCameraUsageOptionItemTitle - In the implementation block
@property (nonatomic,retain) UIViewController * presentingViewController;                                 //@synthesize presentingViewController=_presentingViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long displayStyle; 
-(HFStaticItemProvider *)itemProvider;
-(void)setItemProvider:(HFStaticItemProvider *)arg1 ;
-(HMHome *)home;
-(void)setViewController:(UIViewController *)arg1 ;
-(UIViewController *)presentingViewController;
-(UIViewController *)viewController;
-(id)itemProviders;
-(void)setPresentingViewController:(UIViewController *)arg1 ;
-(void)setHome:(HMHome *)arg1 ;
-(id)_titleString;
-(unsigned long long)offerState;
-(void)setOfferState:(unsigned long long)arg1 ;
-(unsigned long long)presenceEventType;
-(NSSet *)cameraProfiles;
-(unsigned long long)upgradeState;
-(id)initWithItemUpdater:(id)arg1 ;
-(id)buildSectionsWithDisplayedItems:(id)arg1 ;
-(id)didSelectItem:(id)arg1 ;
-(void)upgradeFlowManagerDidCancel:(id)arg1 ;
-(void)upgradeFlowManagerDidComplete:(id)arg1 ;
-(BOOL)isItemHeader:(id)arg1 ;
-(id)showOptionsItem;
-(void)_buildItemProvider;
-(void)setOptionItems:(NSArray *)arg1 ;
-(NSArray *)optionItems;
-(id)initWithItemUpdater:(id)arg1 cameraProfiles:(id)arg2 presenceEventType:(unsigned long long)arg3 ;
-(unsigned long long)countCameraProfilesWithRecordingService;
-(void)setNumCamerasSupportRecordingService:(unsigned long long)arg1 ;
-(void)setUpgradeState:(unsigned long long)arg1 ;
-(void)presentInsufficientPrivilegesAlert;
-(void)presentGenericError;
-(void)_dispatchUpdateForCameraProfile:(id)arg1 ;
-(BOOL)didCompleteCloudUpgradeOffer;
-(void)presentCloudUpgradeFlowWithCameraCount:(unsigned long long)arg1 ;
-(void)setDidCompleteCloudUpgradeOffer:(BOOL)arg1 ;
-(void)sendCAMetricInfo;
-(void)_clearItemsUpdating;
-(void)presentMissingSupportedHubAlert;
-(HUCameraUsageOptionItemProvider *)recordingSettingItemProvider;
-(id)updateStreamingSetting:(unsigned long long)arg1 isRetry:(BOOL)arg2 ;
-(unsigned long long)accessModeSetting;
-(void)setRecordingSettingItemProvider:(HUCameraUsageOptionItemProvider *)arg1 ;
-(unsigned long long)numCamerasSupportRecordingService;
-(NSString *)longestCameraUsageOptionItemTitle;
@end

