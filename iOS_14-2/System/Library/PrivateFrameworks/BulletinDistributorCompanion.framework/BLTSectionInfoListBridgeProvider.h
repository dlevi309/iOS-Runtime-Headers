/*
* Generated on Thursday, January 14, 2021 at 2:27:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
*/

#import <BulletinDistributorCompanion/BulletinDistributorCompanion-Structs.h>
#import <libobjc.A.dylib/LSApplicationWorkspaceObserverProtocol.h>
#import <libobjc.A.dylib/BLTSectionInfoListOverrideProvider.h>

@protocol BLTSectionInfoListProviderDelegate;
@class NSDate, NPSDomainAccessor, BLTSectionConfiguration, NSString;

@interface BLTSectionInfoListBridgeProvider : NSObject <LSApplicationWorkspaceObserverProtocol, BLTSectionInfoListOverrideProvider> {

	opaque_pthread_mutex_t _lock;
	NSDate* _lastKnownBridgeSettingsChangeDate;
	NPSDomainAccessor* _npsDomainAccessor;
	id<BLTSectionInfoListProviderDelegate> _delegate;
	BLTSectionConfiguration* _sectionConfiguration;

}

@property (nonatomic,retain) BLTSectionConfiguration * sectionConfiguration;                      //@synthesize sectionConfiguration=_sectionConfiguration - In the implementation block
@property (assign,nonatomic,__weak) id<BLTSectionInfoListProviderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<BLTSectionInfoListProviderDelegate>)delegate;
-(void)setDelegate:(id<BLTSectionInfoListProviderDelegate>)arg1 ;
-(void)dealloc;
-(void)reloadWithCompletion:(/*^block*/id)arg1 ;
-(void)_reloadUpdatedOverrides;
-(void)_reloadUpdatedOverridesWithCompletion:(/*^block*/id)arg1 ;
-(id)_loadOverridesChangedSince:(id)arg1 ;
-(BLTSectionConfiguration *)sectionConfiguration;
-(id)_companionSetupNotificationSettingsDictionaryForSectionInfo:(id)arg1 sectionID:(id)arg2 ;
-(id)initWithSectionConfiguration:(id)arg1 ;
-(void)setNotificationsLevel:(int)arg1 sectionID:(id)arg2 forceCustom:(BOOL)arg3 ;
-(void)setCustomSettingsWithSectionInfo:(id)arg1 ;
-(void)setCustomSettingsWithSectionInfo:(id)arg1 watchSectionID:(id)arg2 ;
-(void)enableCustomSettingsForWatchSectionID:(id)arg1 ;
-(void)removeSectionWithSectionID:(id)arg1 ;
-(void)setSectionConfiguration:(BLTSectionConfiguration *)arg1 ;
@end

